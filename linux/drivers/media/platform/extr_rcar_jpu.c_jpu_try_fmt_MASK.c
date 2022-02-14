
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pix_mp; } ;
struct v4l2_format {int type; TYPE_2__ fmt; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct jpu_ctx {TYPE_1__ fh; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct jpu_ctx*,int *,int *,int ) ;
 struct jpu_ctx* FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct jpu_ctx *VAR_4 = FUNC_1(VAR_2);

 if (!FUNC_2(VAR_4->fh.m2m_ctx, VAR_3->type))
  return -VAR_0;

 return FUNC_0(VAR_4, ((void*)0), &VAR_3->fmt.pix_mp, VAR_3->type);
}
