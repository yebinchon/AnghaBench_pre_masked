
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {scalar_t__ phy_if; TYPE_1__* dev; } ;
struct hnae_ae_ops {int (* set_loopback ) (struct hnae_handle*,int ,int) ;int (* start ) (struct hnae_handle*) ;int (* adjust_link ) (struct hnae_handle*,int,int) ;} ;
struct TYPE_2__ {struct hnae_ae_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hnae_handle*,int ,int) ;
 int FUNC_3 (struct hnae_handle*) ;
 int FUNC_4 (struct hnae_handle*,int,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2)
{
 struct hns_nic_priv *VAR_3 = FUNC_1(VAR_2);
 struct hnae_handle *VAR_4 = VAR_3->ae_handle;
 struct hnae_ae_ops *VAR_5 = VAR_4->dev->ops;
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = VAR_5->set_loopback(VAR_4, VAR_0, 1);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_5->start ? VAR_5->start(VAR_4) : 0;
 if (VAR_8)
  return VAR_8;


 if (VAR_4->phy_if != VAR_1)
  VAR_6 = 1000;
 else
  VAR_6 = 10000;
 VAR_7 = 1;

 VAR_5->adjust_link(VAR_4, VAR_6, VAR_7);


 FUNC_0(300);

 return 0;
}
