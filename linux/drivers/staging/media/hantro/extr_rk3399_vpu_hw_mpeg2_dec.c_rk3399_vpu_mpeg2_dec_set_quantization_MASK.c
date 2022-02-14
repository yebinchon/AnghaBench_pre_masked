
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_mpeg2_quantization {int dummy; } ;
struct hantro_dev {int dummy; } ;
struct TYPE_3__ {int dma; int cpu; } ;
struct TYPE_4__ {TYPE_1__ qtable; } ;
struct hantro_ctx {TYPE_2__ mpeg2_dec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_ctrl_mpeg2_quantization* FUNC_0 (struct hantro_ctx*,int ) ;
 int FUNC_1 (int ,struct v4l2_ctrl_mpeg2_quantization*) ;
 int FUNC_2 (struct hantro_dev*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct hantro_dev *VAR_2,
          struct hantro_ctx *VAR_3)
{
 struct v4l2_ctrl_mpeg2_quantization *VAR_4;

 VAR_4 = FUNC_0(VAR_3,
           VAR_0);
 FUNC_1(VAR_3->mpeg2_dec.qtable.cpu, VAR_4);
 FUNC_2(VAR_2, VAR_3->mpeg2_dec.qtable.dma,
      VAR_1);
}
