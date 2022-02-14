
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format_mplane {int width; } ;
struct hantro_dev {int dummy; } ;
struct hantro_ctx {TYPE_1__* vpu_src_fmt; struct v4l2_pix_format_mplane src_fmt; } ;
struct TYPE_2__ {int enc_fmt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hantro_dev*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct hantro_dev *VAR_1,
           struct hantro_ctx *VAR_2)
{
 struct v4l2_pix_format_mplane *VAR_3 = &VAR_2->src_fmt;
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_3->width)
  | FUNC_2(0)
  | FUNC_1(0)
  | FUNC_0(VAR_2->vpu_src_fmt->enc_fmt);
 FUNC_4(VAR_1, VAR_4, VAR_0);
}
