
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_promisc_mode ) (struct hnae_handle*,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct hnae_handle*,int) ;
 int FUNC_5 (struct hnae_handle*,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct hns_nic_priv *VAR_4 = FUNC_3(VAR_3);
 struct hnae_handle *VAR_5 = VAR_4->ae_handle;

 if (VAR_5->dev->ops->set_promisc_mode) {
  if (VAR_3->flags & VAR_0)
   VAR_5->dev->ops->set_promisc_mode(VAR_5, 1);
  else
   VAR_5->dev->ops->set_promisc_mode(VAR_5, 0);
 }

 FUNC_1(VAR_3);

 if (FUNC_0(VAR_3, VAR_1, VAR_2))
  FUNC_2(VAR_3, "sync uc address fail\n");
}
