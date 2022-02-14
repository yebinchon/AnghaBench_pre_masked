
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_device {int gadget_driver; } ;
struct cdns3 {struct cdns3_device* gadget_dev; } ;


 int FUNC_0 (struct cdns3_device*) ;

__attribute__((used)) static int FUNC_1(struct cdns3 *VAR_0, bool VAR_1)
{
 struct cdns3_device *VAR_2 = VAR_0->gadget_dev;

 if (!VAR_2->gadget_driver)
  return 0;

 FUNC_0(VAR_2);

 return 0;
}
