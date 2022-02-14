
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct isc_device {int hclock; int ispck; int v4l2_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct isc_device*) ;
 int FUNC_2 (struct isc_device*) ;
 struct isc_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct isc_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(&VAR_0->dev);

 FUNC_2(VAR_1);

 FUNC_5(&VAR_1->v4l2_dev);

 FUNC_0(VAR_1->ispck);
 FUNC_0(VAR_1->hclock);

 FUNC_1(VAR_1);

 return 0;
}
