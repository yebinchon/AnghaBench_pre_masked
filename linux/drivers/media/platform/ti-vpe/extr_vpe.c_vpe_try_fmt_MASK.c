
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe_fmt {int dummy; } ;
struct vpe_ctx {int dummy; } ;
struct v4l2_format {int type; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vpe_ctx*,struct v4l2_format*,struct vpe_fmt*,int ) ;
 struct vpe_ctx* FUNC_2 (struct file*) ;
 struct vpe_fmt* FUNC_3 (struct v4l2_format*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct vpe_ctx *VAR_5 = FUNC_2(VAR_2);
 struct vpe_fmt *VAR_6 = FUNC_3(VAR_4);

 if (FUNC_0(VAR_4->type))
  return FUNC_1(VAR_5, VAR_4, VAR_6, VAR_1);
 else
  return FUNC_1(VAR_5, VAR_4, VAR_6, VAR_0);
}
