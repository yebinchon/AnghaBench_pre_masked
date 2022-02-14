
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hantro_h264_reflist_builder {int dummy; } ;
struct TYPE_2__ {int b1; int b0; int p; } ;
struct hantro_h264_dec_ctrls {void* pps; void* sps; void* slices; void* decode; void* scaling; } ;
struct hantro_h264_dec_hw_ctx {TYPE_1__ reflists; struct hantro_h264_dec_ctrls ctrls; } ;
struct hantro_ctx {struct hantro_h264_dec_hw_ctx h264_dec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hantro_h264_reflist_builder*,int ,int ) ;
 int FUNC_2 (struct hantro_h264_reflist_builder*,int ) ;
 void* FUNC_3 (struct hantro_ctx*,int ) ;
 int FUNC_4 (struct hantro_ctx*) ;
 int FUNC_5 (struct hantro_ctx*,struct hantro_h264_reflist_builder*) ;
 int FUNC_6 (struct hantro_ctx*) ;
 int FUNC_7 (struct hantro_ctx*) ;

int FUNC_8(struct hantro_ctx *VAR_6)
{
 struct hantro_h264_dec_hw_ctx *VAR_7 = &VAR_6->h264_dec;
 struct hantro_h264_dec_ctrls *VAR_8 = &VAR_7->ctrls;
 struct hantro_h264_reflist_builder VAR_9;

 FUNC_4(VAR_6);

 VAR_8->scaling =
  FUNC_3(VAR_6, VAR_3);
 if (FUNC_0(!VAR_8->scaling))
  return -VAR_0;

 VAR_8->decode =
  FUNC_3(VAR_6, VAR_1);
 if (FUNC_0(!VAR_8->decode))
  return -VAR_0;

 VAR_8->slices =
  FUNC_3(VAR_6, VAR_4);
 if (FUNC_0(!VAR_8->slices))
  return -VAR_0;

 VAR_8->sps =
  FUNC_3(VAR_6, VAR_5);
 if (FUNC_0(!VAR_8->sps))
  return -VAR_0;

 VAR_8->pps =
  FUNC_3(VAR_6, VAR_2);
 if (FUNC_0(!VAR_8->pps))
  return -VAR_0;


 FUNC_7(VAR_6);


 FUNC_6(VAR_6);


 FUNC_5(VAR_6, &VAR_9);
 FUNC_2(&VAR_9, VAR_7->reflists.p);
 FUNC_1(&VAR_9, VAR_7->reflists.b0,
     VAR_7->reflists.b1);
 return 0;
}
