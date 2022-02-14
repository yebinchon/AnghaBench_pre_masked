
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pix_mp; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
struct file {int dummy; } ;
struct fdp1_q_data {int format; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct fdp1_ctx {TYPE_1__ fh; } ;


 int VAR_0 ;
 struct fdp1_ctx* FUNC_0 (void*) ;
 struct fdp1_q_data* FUNC_1 (struct fdp1_ctx*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct fdp1_q_data *VAR_4;
 struct fdp1_ctx *VAR_5 = FUNC_0(VAR_2);

 if (!FUNC_2(VAR_5->fh.m2m_ctx, VAR_3->type))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_5, VAR_3->type);
 VAR_3->fmt.pix_mp = VAR_4->format;

 return 0;
}
