
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rc_device {int rdev; int sys_clock; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 struct st_rc_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct st_rc_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_0->dev);
 FUNC_2(&VAR_0->dev, 0);
 FUNC_0(VAR_1->sys_clock);
 FUNC_4(VAR_1->rdev);
 return 0;
}
