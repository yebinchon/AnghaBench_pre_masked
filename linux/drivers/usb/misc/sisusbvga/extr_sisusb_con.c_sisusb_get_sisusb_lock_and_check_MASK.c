
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int lock; int * havethisconsole; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sisusb_usb_data* FUNC_3 (unsigned short) ;
 int FUNC_4 (struct sisusb_usb_data*) ;

__attribute__((used)) static struct sisusb_usb_data *
FUNC_5(unsigned short VAR_0)
{
 struct sisusb_usb_data *VAR_1;






 if (FUNC_0())
  return ((void*)0);

 VAR_1 = FUNC_3(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_1(&VAR_1->lock);

 if (!FUNC_4(VAR_1) ||
     !VAR_1->havethisconsole[VAR_0]) {
  FUNC_2(&VAR_1->lock);
  return ((void*)0);
 }

 return VAR_1;
}
