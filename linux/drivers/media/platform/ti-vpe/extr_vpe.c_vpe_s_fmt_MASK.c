
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe_ctx {int dummy; } ;
struct v4l2_format {int type; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vpe_ctx*,struct v4l2_format*) ;
 struct vpe_ctx* FUNC_2 (struct file*) ;
 int FUNC_3 (struct vpe_ctx*) ;
 int FUNC_4 (struct vpe_ctx*) ;
 int FUNC_5 (struct vpe_ctx*) ;
 int FUNC_6 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 int VAR_3;
 struct vpe_ctx *VAR_4 = FUNC_2(VAR_0);

 VAR_3 = FUNC_6(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_4, VAR_2);
 if (VAR_3)
  return VAR_3;

 if (FUNC_0(VAR_2->type))
  FUNC_4(VAR_4);
 else
  FUNC_3(VAR_4);

 return FUNC_5(VAR_4);
}
