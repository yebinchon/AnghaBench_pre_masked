
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int,char*) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_6(struct usb_gadget *VAR_4, int VAR_5)
{
 int VAR_6;
 dev_t VAR_7;

 VAR_1 = FUNC_4(VAR_0, "hidg");
 if (FUNC_0(VAR_1)) {
  VAR_6 = FUNC_2(VAR_1);
  VAR_1 = ((void*)0);
  return VAR_6;
 }

 VAR_6 = FUNC_3(&VAR_7, 0, VAR_5, "hidg");
 if (VAR_6) {
  FUNC_5(VAR_1);
  VAR_1 = ((void*)0);
  return VAR_6;
 }

 VAR_2 = FUNC_1(VAR_7);
 VAR_3 = VAR_5;

 return 0;
}
