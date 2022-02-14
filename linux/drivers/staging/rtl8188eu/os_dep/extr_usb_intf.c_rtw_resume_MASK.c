
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct dvobj_priv {struct adapter* if1; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*) ;
 struct dvobj_priv* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0)
{
 struct dvobj_priv *VAR_1 = FUNC_1(VAR_0);
 struct adapter *VAR_2 = VAR_1->if1;

 return FUNC_0(VAR_2);
}
