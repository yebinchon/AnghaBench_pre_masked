
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;
struct cal_ctx {struct v4l2_format v_fmt; } ;


 struct cal_ctx* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
        struct v4l2_format *VAR_2)
{
 struct cal_ctx *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->v_fmt;

 return 0;
}
