
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct rndis_wlan_private {int connected; int bssid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int,int ) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int ) ;
 struct rndis_wlan_private* FUNC_3 (struct usbnet*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct usbnet *VAR_1)
{
 struct rndis_wlan_private *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->connected) {
  VAR_2->connected = 0;
  FUNC_2(VAR_2->bssid);

  FUNC_1(VAR_1);

  FUNC_0(VAR_1->net, 0, ((void*)0), 0, 1, VAR_0);
 }

 FUNC_4(VAR_1->net);
}
