
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct fimc_ctx {int dummy; } ;
struct file {int dummy; } ;


 struct fimc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct fimc_ctx*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
       struct v4l2_format *VAR_2)
{
 struct fimc_ctx *VAR_3 = FUNC_0(VAR_1);
 return FUNC_1(VAR_3, VAR_2);
}
