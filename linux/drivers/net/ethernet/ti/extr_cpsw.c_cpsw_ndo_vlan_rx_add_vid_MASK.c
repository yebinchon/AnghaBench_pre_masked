
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct cpsw_priv {int dev; struct cpsw_common* cpsw; } ;
struct TYPE_3__ {scalar_t__ default_vlan; int slaves; scalar_t__ dual_emac; } ;
struct cpsw_common {int dev; TYPE_2__* slaves; TYPE_1__ data; } ;
typedef int __be16 ;
struct TYPE_4__ {scalar_t__ port_vlan; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_priv*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 struct cpsw_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1,
        __be16 VAR_2, u16 VAR_3)
{
 struct cpsw_priv *VAR_4 = FUNC_2(VAR_1);
 struct cpsw_common *VAR_5 = VAR_4->cpsw;
 int VAR_6;

 if (VAR_3 == VAR_5->data.default_vlan)
  return 0;

 VAR_6 = FUNC_3(VAR_5->dev);
 if (VAR_6 < 0) {
  FUNC_5(VAR_5->dev);
  return VAR_6;
 }

 if (VAR_5->data.dual_emac) {




  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_5->data.slaves; VAR_7++) {
   if (VAR_3 == VAR_5->slaves[VAR_7].port_vlan) {
    VAR_6 = -VAR_0;
    goto err;
   }
  }
 }

 FUNC_1(VAR_4->dev, "Adding vlanid %d to vlan filter\n", VAR_3);
 VAR_6 = FUNC_0(VAR_4, VAR_3);
err:
 FUNC_4(VAR_5->dev);
 return VAR_6;
}
