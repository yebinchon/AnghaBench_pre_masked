
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct m66592 {int * driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct m66592*) ;
 int FUNC_1 (struct m66592*) ;
 int FUNC_2 (struct m66592*,int,int ) ;
 struct m66592* FUNC_3 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_3)
{
 struct m66592 *VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_4, VAR_2 | VAR_1, VAR_0);

 FUNC_1(VAR_4);
 FUNC_0(VAR_4);

 VAR_4->driver = ((void*)0);

 return 0;
}
