
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct isp_device {int notifier; int crashed; } ;


 int FUNC_0 (struct isp_device*,int) ;
 int FUNC_1 (struct isp_device*,int) ;
 int FUNC_2 (struct isp_device*) ;
 int FUNC_3 (struct isp_device*) ;
 int FUNC_4 (struct isp_device*) ;
 int FUNC_5 (struct isp_device*) ;
 int FUNC_6 (struct isp_device*) ;
 int FUNC_7 (int *) ;
 struct isp_device* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct isp_device *VAR_1 = FUNC_8(VAR_0);

 FUNC_10(&VAR_1->notifier);
 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 FUNC_5(VAR_1);

 FUNC_0(VAR_1, 0);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1, 0);

 FUNC_7(&VAR_1->crashed);
 FUNC_9(&VAR_1->notifier);

 FUNC_6(VAR_1);

 return 0;
}
