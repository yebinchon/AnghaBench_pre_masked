
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {scalar_t__ codec_state; int reconfig; int streamon_out; int num_input_bufs; scalar_t__ sequence_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct venus_inst*) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*) ;
 int FUNC_3 (struct venus_inst*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (struct venus_inst*,int ,int ,int ) ;
 int FUNC_6 (struct venus_inst*) ;

__attribute__((used)) static int FUNC_7(struct venus_inst *VAR_7)
{
 int VAR_8;

 if (VAR_7->codec_state == VAR_6) {
  VAR_8 = FUNC_4(VAR_7);
  VAR_7->codec_state = VAR_3;
  goto done;
 }

 if (VAR_7->codec_state == VAR_5 ||
     VAR_7->codec_state == VAR_2) {
  VAR_8 = FUNC_4(VAR_7);
  goto done;
 }

 if (VAR_7->codec_state != VAR_4)
  return -VAR_0;

 FUNC_3(VAR_7);
 VAR_7->sequence_out = 0;
 VAR_7->reconfig = 0;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_7, VAR_7->num_input_bufs,
     VAR_1, VAR_1);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7->codec_state = VAR_5;

done:
 VAR_7->streamon_out = 1;
 return VAR_8;
}
