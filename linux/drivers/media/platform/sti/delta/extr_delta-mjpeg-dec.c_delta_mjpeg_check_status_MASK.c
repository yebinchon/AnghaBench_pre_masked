
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jpeg_decode_return_params_t {scalar_t__ error_code; int decode_time_in_us; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; int decode_errors; int decoded_frames; int stream_errors; struct delta_dev* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct delta_ctx *VAR_1,
         struct jpeg_decode_return_params_t *VAR_2)
{
 struct delta_dev *VAR_3 = VAR_1->dev;
 bool VAR_4 = 0;

 if (VAR_2->error_code == VAR_0)
  goto out;

 if (FUNC_3(VAR_2->error_code)) {
  FUNC_1(VAR_3->dev,
         "%s  firmware: stream error @ frame %d (%s)\n",
         VAR_1->name, VAR_1->decoded_frames,
         FUNC_2(VAR_2->error_code));
  VAR_1->stream_errors++;
 } else {
  FUNC_1(VAR_3->dev,
         "%s  firmware: decode error @ frame %d (%s)\n",
         VAR_1->name, VAR_1->decoded_frames,
         FUNC_2(VAR_2->error_code));
  VAR_1->decode_errors++;
  VAR_4 = 1;
 }

out:
 FUNC_0(VAR_3->dev,
  "%s  firmware: decoding time(us)=%d\n", VAR_1->name,
  VAR_2->decode_time_in_us);

 return VAR_4;
}
