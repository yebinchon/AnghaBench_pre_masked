
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct stm32_dcmi {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct stm32_dcmi*,struct v4l2_format*,int *,int *) ;
 struct stm32_dcmi* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
    struct v4l2_format *VAR_2)
{
 struct stm32_dcmi *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_2, ((void*)0), ((void*)0));
}
