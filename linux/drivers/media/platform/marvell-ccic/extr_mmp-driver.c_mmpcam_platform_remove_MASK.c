
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mmp_camera {int dummy; } ;


 int VAR_0 ;
 struct mmp_camera* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct mmp_camera*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct mmp_camera *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0))
  return -VAR_0;
 return FUNC_1(VAR_2);
}
