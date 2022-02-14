
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {TYPE_1__* phydev; } ;
struct hns_nic_priv {int link; struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {scalar_t__ (* get_status ) (struct hnae_handle*) ;int (* adjust_link ) (struct hnae_handle*,int ,int ) ;scalar_t__ (* need_adjust_link ) (struct hnae_handle*,int ,int ) ;} ;
struct TYPE_4__ {scalar_t__ link; int duplex; int speed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct hnae_handle*,int ,int ) ;
 int FUNC_7 (struct hnae_handle*,int ,int ) ;
 scalar_t__ FUNC_8 (struct hnae_handle*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_0)
{
 struct hns_nic_priv *VAR_1 = FUNC_2(VAR_0);
 struct hnae_handle *VAR_2 = VAR_1->ae_handle;
 int VAR_3 = 1;


 if (VAR_0->phydev) {

  if (VAR_0->phydev->link == 0)
   return;

  if (VAR_2->dev->ops->need_adjust_link(VAR_2, VAR_0->phydev->speed,
        VAR_0->phydev->duplex)) {




   FUNC_3(VAR_0);
   FUNC_0(200);
   VAR_2->dev->ops->adjust_link(VAR_2, VAR_0->phydev->speed,
       VAR_0->phydev->duplex);
   FUNC_4(VAR_0);
  }
 }

 VAR_3 = VAR_3 && VAR_2->dev->ops->get_status(VAR_2);

 if (VAR_3 != VAR_1->link) {
  if (VAR_3) {
   FUNC_4(VAR_0);
   FUNC_5(VAR_0);
   FUNC_1(VAR_0, "link up\n");
  } else {
   FUNC_3(VAR_0);
   FUNC_1(VAR_0, "link down\n");
  }
  VAR_1->link = VAR_3;
 }
}
