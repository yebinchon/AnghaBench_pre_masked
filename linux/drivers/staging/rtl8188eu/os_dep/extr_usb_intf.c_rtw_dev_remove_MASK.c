
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int unregistering; } ;
struct dvobj_priv {struct adapter* if1; } ;
struct adapter {int bSurpriseRemoved; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct usb_interface*) ;
 struct dvobj_priv* FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_4)
{
 struct dvobj_priv *VAR_5 = FUNC_7(VAR_4);
 struct adapter *VAR_6 = VAR_5->if1;

 FUNC_2("+rtw_dev_remove\n");
 FUNC_1(VAR_3, VAR_2, ("+dev_remove()\n"));

 if (!VAR_4->unregistering)
  VAR_6->bSurpriseRemoved = 1;

 FUNC_3(VAR_6, VAR_0);
 FUNC_4(VAR_6, VAR_1);

 FUNC_0(VAR_6);

 FUNC_5(VAR_6);

 FUNC_6(VAR_4);

 FUNC_1(VAR_3, VAR_2, ("-dev_remove()\n"));
 FUNC_2("-r871xu_dev_remove, done\n");
}
