
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cpsw_slave {int port_vlan; } ;
struct cpsw_priv {int mac_addr; TYPE_1__* ndev; struct cpsw_common* cpsw; } ;
struct cpsw_common {scalar_t__ version; int ale; } ;
struct TYPE_2__ {int broadcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,int,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int,int,int ) ;
 int FUNC_3 (int ,int,int ,int) ;
 int FUNC_4 (struct cpsw_slave*,int ,int ) ;

__attribute__((used)) static inline void FUNC_5(
  struct cpsw_priv *VAR_8, struct cpsw_slave *VAR_9,
  u32 VAR_10)
{
 struct cpsw_common *VAR_11 = VAR_8->cpsw;
 u32 VAR_12 = 1 << VAR_10 | VAR_1;

 if (VAR_11->version == VAR_6)
  FUNC_4(VAR_9, VAR_9->port_vlan, VAR_4);
 else
  FUNC_4(VAR_9, VAR_9->port_vlan, VAR_5);
 FUNC_2(VAR_11->ale, VAR_9->port_vlan, VAR_12,
     VAR_12, VAR_12, 0);
 FUNC_0(VAR_11->ale, VAR_8->ndev->broadcast,
      VAR_1, VAR_3, VAR_9->port_vlan, 0);
 FUNC_1(VAR_11->ale, VAR_8->mac_addr,
      VAR_7, VAR_3 |
      VAR_2, VAR_9->port_vlan);
 FUNC_3(VAR_11->ale, VAR_10,
        VAR_0, 1);
}
