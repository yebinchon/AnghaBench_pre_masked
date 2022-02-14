
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_streaminfo {int dummy; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int flags; int decode_errors; int stream_errors; int dropped_frames; int output_frames; int decoded_frames; int name; struct delta_streaminfo streaminfo; struct delta_dev* dev; } ;
typedef int str ;


 int VAR_0 ;
 int FUNC_0 (struct delta_streaminfo*,unsigned char*,int) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_2(struct delta_ctx *VAR_1)
{
 struct delta_dev *VAR_2 = VAR_1->dev;
 struct delta_streaminfo *VAR_3 = &VAR_1->streaminfo;
 unsigned char VAR_4[100] = "";

 if (!(VAR_1->flags & VAR_0))
  return;

 FUNC_1(VAR_2->dev, "%s %s, %d frames decoded, %d frames output, %d frames dropped, %d stream errors, %d decode errors",
  VAR_1->name,
  FUNC_0(VAR_3, VAR_4, sizeof(VAR_4)),
  VAR_1->decoded_frames,
  VAR_1->output_frames,
  VAR_1->dropped_frames,
  VAR_1->stream_errors,
  VAR_1->decode_errors);
}
