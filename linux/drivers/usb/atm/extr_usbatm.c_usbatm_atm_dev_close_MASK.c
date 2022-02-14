
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbatm_data {int dummy; } ;
struct atm_dev {struct usbatm_data* dev_data; } ;


 int FUNC_0 (struct usbatm_data*) ;

__attribute__((used)) static void FUNC_1(struct atm_dev *VAR_0)
{
 struct usbatm_data *VAR_1 = VAR_0->dev_data;

 if (!VAR_1)
  return;

 VAR_0->dev_data = ((void*)0);
 FUNC_0(VAR_1);
}
