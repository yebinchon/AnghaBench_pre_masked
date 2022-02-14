
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; } ;
struct dpaa_priv {TYPE_1__* mac_dev; } ;
struct TYPE_2__ {int promisc; int (* set_promisc ) (int ,int) ;int allmulti; int (* set_allmulti ) (int ,int) ;int (* set_multi ) (struct net_device*,TYPE_1__*) ;int fman_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dpaa_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dpaa_priv const*,int ,struct net_device*,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct net_device*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 const struct dpaa_priv *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3);

 if (!!(VAR_3->flags & VAR_1) != VAR_4->mac_dev->promisc) {
  VAR_4->mac_dev->promisc = !VAR_4->mac_dev->promisc;
  VAR_5 = VAR_4->mac_dev->set_promisc(VAR_4->mac_dev->fman_mac,
       VAR_4->mac_dev->promisc);
  if (VAR_5 < 0)
   FUNC_1(VAR_4, VAR_2, VAR_3,
      "mac_dev->set_promisc() = %d\n",
      VAR_5);
 }

 if (!!(VAR_3->flags & VAR_0) != VAR_4->mac_dev->allmulti) {
  VAR_4->mac_dev->allmulti = !VAR_4->mac_dev->allmulti;
  VAR_5 = VAR_4->mac_dev->set_allmulti(VAR_4->mac_dev->fman_mac,
        VAR_4->mac_dev->allmulti);
  if (VAR_5 < 0)
   FUNC_1(VAR_4, VAR_2, VAR_3,
      "mac_dev->set_allmulti() = %d\n",
      VAR_5);
 }

 VAR_5 = VAR_4->mac_dev->set_multi(VAR_3, VAR_4->mac_dev);
 if (VAR_5 < 0)
  FUNC_1(VAR_4, VAR_2, VAR_3, "mac_dev->set_multi() = %d\n",
     VAR_5);
}
