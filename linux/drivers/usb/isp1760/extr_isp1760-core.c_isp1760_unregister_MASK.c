
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1760_device {int hcd; } ;
struct device {int dummy; } ;


 struct isp1760_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct isp1760_device*) ;

void FUNC_3(struct device *VAR_0)
{
 struct isp1760_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->hcd);
}
