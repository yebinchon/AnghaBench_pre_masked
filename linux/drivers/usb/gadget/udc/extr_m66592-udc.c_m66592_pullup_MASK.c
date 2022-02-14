
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct m66592 {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct m66592* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct m66592*,int ,int ) ;
 int FUNC_2 (struct m66592*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_2, int VAR_3)
{
 struct m66592 *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;

 FUNC_3(&VAR_4->lock, VAR_5);
 if (VAR_3)
  FUNC_2(VAR_4, VAR_0, VAR_1);
 else
  FUNC_1(VAR_4, VAR_0, VAR_1);
 FUNC_4(&VAR_4->lock, VAR_5);

 return 0;
}
