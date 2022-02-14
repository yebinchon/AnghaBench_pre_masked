
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct r8192_priv {int * pFirmware; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 struct net_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_1)
{
 struct net_device *VAR_2 = FUNC_8(VAR_1);
 struct r8192_priv *VAR_3 = FUNC_2(VAR_2);

 FUNC_7(VAR_2);

 FUNC_0(VAR_0, "=============>wlan driver to be removed\n");
 FUNC_5(VAR_2);

 FUNC_4(VAR_2);
 FUNC_3(VAR_3->pFirmware);
 VAR_3->pFirmware = ((void*)0);
 FUNC_6(VAR_2);
 FUNC_9(10000, 11000);
 FUNC_1(VAR_2);

 FUNC_0(VAR_0, "wlan driver removed\n");
}
