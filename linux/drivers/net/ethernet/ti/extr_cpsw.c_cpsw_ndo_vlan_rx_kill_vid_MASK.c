
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct cpsw_priv {TYPE_3__* ndev; int mac_addr; int dev; struct cpsw_common* cpsw; } ;
struct TYPE_4__ {scalar_t__ default_vlan; int slaves; scalar_t__ dual_emac; } ;
struct cpsw_common {int dev; int ale; TYPE_2__* slaves; TYPE_1__ data; } ;
typedef int __be16 ;
struct TYPE_6__ {int broadcast; } ;
struct TYPE_5__ {scalar_t__ port_vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 struct cpsw_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2,
         __be16 VAR_3, u16 VAR_4)
{
 struct cpsw_priv *VAR_5 = FUNC_5(VAR_2);
 struct cpsw_common *VAR_6 = VAR_5->cpsw;
 int VAR_7;

 if (VAR_4 == VAR_6->data.default_vlan)
  return 0;

 VAR_7 = FUNC_6(VAR_6->dev);
 if (VAR_7 < 0) {
  FUNC_8(VAR_6->dev);
  return VAR_7;
 }

 if (VAR_6->data.dual_emac) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_6->data.slaves; VAR_8++) {
   if (VAR_4 == VAR_6->slaves[VAR_8].port_vlan)
    goto err;
  }
 }

 FUNC_4(VAR_5->dev, "removing vlanid %d from vlan filter\n", VAR_4);
 VAR_7 = FUNC_2(VAR_6->ale, VAR_4, 0);
 VAR_7 |= FUNC_1(VAR_6->ale, VAR_5->mac_addr,
      VAR_1, VAR_0, VAR_4);
 VAR_7 |= FUNC_0(VAR_6->ale, VAR_5->ndev->broadcast,
      0, VAR_0, VAR_4);
 VAR_7 |= FUNC_3(VAR_6->ale, 0, VAR_4);
err:
 FUNC_7(VAR_6->dev);
 return VAR_7;
}
