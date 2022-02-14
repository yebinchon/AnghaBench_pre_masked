
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int netdev; int nsdname; int (* tx_timeout ) (struct wlandevice*) ;} ;
struct net_device {struct wlandevice* ml_priv; } ;


 int FUNC_0 (struct net_device*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wlandevice*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct wlandevice *VAR_1 = VAR_0->ml_priv;

 if (VAR_1->tx_timeout) {
  VAR_1->tx_timeout(VAR_1);
 } else {
  FUNC_0(VAR_0, "Implement tx_timeout for %s\n",
       VAR_1->nsdname);
  FUNC_1(VAR_1->netdev);
 }
}
