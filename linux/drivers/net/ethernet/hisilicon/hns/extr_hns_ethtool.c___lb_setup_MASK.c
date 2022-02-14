
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int flags; struct phy_device* phydev; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_2__* dev; int phy_if; } ;
typedef enum hnae_loop { ____Placeholder_hnae_loop } hnae_loop ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_loopback ) (struct hnae_handle*,int,int) ;int (* set_promisc_mode ) (struct hnae_handle*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int) ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hnae_handle*,int,int) ;
 int FUNC_3 (struct hnae_handle*,int,int) ;
 int FUNC_4 (struct hnae_handle*,int,int) ;
 int FUNC_5 (struct hnae_handle*,int const,int) ;
 int FUNC_6 (struct hnae_handle*,int const,int) ;
 int FUNC_7 (struct hnae_handle*,int) ;
 int FUNC_8 (struct hnae_handle*,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3,
        enum hnae_loop VAR_4)
{
 int VAR_5 = 0;
 struct hns_nic_priv *VAR_6 = FUNC_1(VAR_3);
 struct phy_device *VAR_7 = VAR_3->phydev;
 struct hnae_handle *VAR_8 = VAR_6->ae_handle;

 switch (VAR_4) {
 case 131:
  VAR_5 = FUNC_0(VAR_7, 0x1);
  if (!VAR_5)
   VAR_5 = VAR_8->dev->ops->set_loopback(VAR_8, VAR_4, 0x1);
  break;
 case 132:
  if ((VAR_8->dev->ops->set_loopback) &&
      (VAR_6->ae_handle->phy_if != VAR_2))
   VAR_5 = VAR_8->dev->ops->set_loopback(VAR_8, VAR_4, 0x1);
  break;
 case 130:
  if (VAR_8->dev->ops->set_loopback)
   VAR_5 = VAR_8->dev->ops->set_loopback(VAR_8, VAR_4, 0x1);
  break;
 case 128:
  VAR_5 = FUNC_0(VAR_7, 0x0);

 case 129:
  if (!VAR_5 && VAR_8->dev->ops->set_loopback) {
   if (VAR_6->ae_handle->phy_if != VAR_2)
    VAR_5 = VAR_8->dev->ops->set_loopback(VAR_8,
     132, 0x0);

   if (!VAR_5)
    VAR_5 = VAR_8->dev->ops->set_loopback(VAR_8,
     130, 0x0);
  }
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 if (!VAR_5) {
  if (VAR_4 == 129)
   VAR_8->dev->ops->set_promisc_mode(
    VAR_8, VAR_3->flags & VAR_1);
  else
   VAR_8->dev->ops->set_promisc_mode(VAR_8, 1);
 }
 return VAR_5;
}
