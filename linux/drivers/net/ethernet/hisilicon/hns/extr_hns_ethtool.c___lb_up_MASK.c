
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {scalar_t__ phy_if; TYPE_2__* dev; } ;
typedef enum hnae_loop { ____Placeholder_hnae_loop } hnae_loop ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* start ) (struct hnae_handle*) ;int (* adjust_link ) (struct hnae_handle*,int,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 struct hns_nic_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct hnae_handle*) ;
 int FUNC_5 (struct hnae_handle*,int,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,
     enum hnae_loop VAR_3)
{

 struct hns_nic_priv *VAR_4 = FUNC_3(VAR_2);
 struct hnae_handle *VAR_5 = VAR_4->ae_handle;
 int VAR_6, VAR_7;
 int VAR_8;

 FUNC_1(VAR_2);

 VAR_8 = FUNC_0(VAR_2, VAR_3);
 if (VAR_8)
  return VAR_8;

 FUNC_2(200);

 VAR_8 = VAR_5->dev->ops->start ? VAR_5->dev->ops->start(VAR_5) : 0;
 if (VAR_8)
  return VAR_8;


 if (VAR_4->ae_handle->phy_if != VAR_1)
  VAR_6 = 1000;
 else
  VAR_6 = 10000;
 VAR_7 = 1;

 VAR_5->dev->ops->adjust_link(VAR_5, VAR_6, VAR_7);


 FUNC_2(300);

 return 0;
}
