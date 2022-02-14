
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvtc_device {int xvip; } ;
struct platform_device {int dummy; } ;


 struct xvtc_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xvtc_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct xvtc_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);

 FUNC_1(&VAR_1->xvip);

 return 0;
}
