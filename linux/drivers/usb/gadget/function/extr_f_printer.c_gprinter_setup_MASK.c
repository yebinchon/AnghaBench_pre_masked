
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int,char*) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,int) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_7(int VAR_4)
{
 int VAR_5;
 dev_t VAR_6;

 VAR_3 = FUNC_4(VAR_0, "usb_printer_gadget");
 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_2(VAR_3);
  VAR_3 = ((void*)0);
  FUNC_6("unable to create usb_gadget class %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_3(&VAR_6, 0, VAR_4, "USB printer gadget");
 if (VAR_5) {
  FUNC_6("alloc_chrdev_region %d\n", VAR_5);
  FUNC_5(VAR_3);
  VAR_3 = ((void*)0);
  return VAR_5;
 }

 VAR_1 = FUNC_1(VAR_6);
 VAR_2 = VAR_4;

 return VAR_5;
}
