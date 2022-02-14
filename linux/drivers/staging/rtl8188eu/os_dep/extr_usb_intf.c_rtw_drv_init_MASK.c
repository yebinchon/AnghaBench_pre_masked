
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct dvobj_priv {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 struct adapter* FUNC_2 (struct dvobj_priv*,struct usb_interface*,struct usb_device_id const*) ;
 int FUNC_3 (struct usb_interface*) ;
 struct dvobj_priv* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_3, const struct usb_device_id *VAR_4)
{
 struct adapter *VAR_5 = ((void*)0);
 struct dvobj_priv *VAR_6;


 VAR_6 = FUNC_4(VAR_3);
 if (!VAR_6) {
  FUNC_0(VAR_2, VAR_1,
    ("initialize device object priv Failed!\n"));
  goto exit;
 }

 VAR_5 = FUNC_2(VAR_6, VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_1("rtw_init_primarystruct adapter Failed!\n");
  goto free_dvobj;
 }

 return 0;

free_dvobj:
 FUNC_3(VAR_3);
exit:
 return -VAR_0;
}
