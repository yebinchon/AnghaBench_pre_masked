
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int type; } ;
struct fimc_frame {int dummy; } ;
struct fimc_ctx {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct fimc_frame*) ;
 int FUNC_1 (struct fimc_frame*) ;
 int FUNC_2 (struct fimc_frame*,struct v4l2_format*) ;
 struct fimc_frame* FUNC_3 (struct fimc_ctx*,int ) ;
 struct fimc_ctx* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct fimc_ctx *VAR_3 = FUNC_4(VAR_1);
 struct fimc_frame *VAR_4 = FUNC_3(VAR_3, VAR_2->type);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_2(VAR_4, VAR_2);
 return 0;
}
