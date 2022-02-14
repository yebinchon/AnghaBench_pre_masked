
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {TYPE_3__* phydev; } ;
struct hns_nic_priv {int link; struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_2__* dev; } ;
struct TYPE_6__ {int link; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ (* get_status ) (struct hnae_handle*) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct hnae_handle*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_0)
{
 struct hns_nic_priv *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = VAR_1->link;
 struct hnae_handle *VAR_3;

 VAR_3 = VAR_1->ae_handle;

 if (VAR_0->phydev) {
  if (!FUNC_0(VAR_0->phydev))
   VAR_2 = VAR_0->phydev->link;
  else
   VAR_2 = 0;
 }

 if (VAR_3->dev && VAR_3->dev->ops && VAR_3->dev->ops->get_status)
  VAR_2 = VAR_2 && VAR_3->dev->ops->get_status(VAR_3);
 else
  VAR_2 = 0;

 return VAR_2;
}
