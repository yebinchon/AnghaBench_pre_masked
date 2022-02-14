
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct cpsw_priv {size_t emac_port; int mac_addr; struct cpsw_common* cpsw; } ;
struct TYPE_3__ {scalar_t__ dual_emac; } ;
struct cpsw_common {int dev; int ale; TYPE_2__* slaves; TYPE_1__ data; } ;
struct TYPE_4__ {int port_vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct cpsw_priv*,int ,struct cpsw_priv*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct cpsw_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5, void *VAR_6)
{
 struct cpsw_priv *VAR_7 = FUNC_5(VAR_5);
 struct sockaddr *VAR_8 = (struct sockaddr *)VAR_6;
 struct cpsw_common *VAR_9 = VAR_7->cpsw;
 int VAR_10 = 0;
 u16 VAR_11 = 0;
 int VAR_12;

 if (!FUNC_3(VAR_8->sa_data))
  return -VAR_1;

 VAR_12 = FUNC_6(VAR_9->dev);
 if (VAR_12 < 0) {
  FUNC_8(VAR_9->dev);
  return VAR_12;
 }

 if (VAR_9->data.dual_emac) {
  VAR_11 = VAR_9->slaves[VAR_7->emac_port].port_vlan;
  VAR_10 = VAR_0;
 }

 FUNC_1(VAR_9->ale, VAR_7->mac_addr, VAR_3,
      VAR_10, VAR_11);
 FUNC_0(VAR_9->ale, VAR_8->sa_data, VAR_3,
      VAR_10, VAR_11);

 FUNC_4(VAR_7->mac_addr, VAR_8->sa_data, VAR_2);
 FUNC_4(VAR_5->dev_addr, VAR_7->mac_addr, VAR_2);
 FUNC_2(VAR_7, VAR_4, VAR_7);

 FUNC_7(VAR_9->dev);

 return 0;
}
