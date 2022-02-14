
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int * netdev; int rx_bh; } ;
struct wireless_dev {scalar_t__ wiphy; } ;


 int FUNC_0 (int *) ;
 struct wireless_dev* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct wlandevice *VAR_0)
{
 struct wireless_dev *VAR_1;

 FUNC_2(&VAR_0->rx_bh);

 if (VAR_0->netdev) {
  VAR_1 = FUNC_1(VAR_0->netdev);
  if (VAR_1->wiphy)
   FUNC_3(VAR_1->wiphy);
  FUNC_0(VAR_0->netdev);
  VAR_0->netdev = ((void*)0);
 }
}
