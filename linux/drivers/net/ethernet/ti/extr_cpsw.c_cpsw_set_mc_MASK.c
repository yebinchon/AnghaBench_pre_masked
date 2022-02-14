
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct cpsw_priv {size_t emac_port; struct cpsw_common* cpsw; } ;
struct TYPE_4__ {scalar_t__ dual_emac; } ;
struct cpsw_common {int ale; TYPE_2__ data; TYPE_1__* slaves; } ;
struct TYPE_3__ {int port_vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,int,int,int,int ) ;
 int FUNC_1 (int ,int const*,int ,int,int) ;
 struct cpsw_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, const u8 *VAR_4,
         int VAR_5, int VAR_6)
{
 struct cpsw_priv *VAR_7 = FUNC_2(VAR_3);
 struct cpsw_common *VAR_8 = VAR_7->cpsw;
 int VAR_9, VAR_10, VAR_11;

 if (VAR_5 < 0) {
  if (VAR_8->data.dual_emac)
   VAR_5 = VAR_8->slaves[VAR_7->emac_port].port_vlan;
  else
   VAR_5 = 0;
 }

 VAR_9 = VAR_8->data.dual_emac ? VAR_1 : VAR_0;
 VAR_10 = VAR_5 ? VAR_2 : 0;

 if (VAR_6)
  VAR_11 = FUNC_0(VAR_8->ale, VAR_4, VAR_9, VAR_10, VAR_5, 0);
 else
  VAR_11 = FUNC_1(VAR_8->ale, VAR_4, 0, VAR_10, VAR_5);

 return VAR_11;
}
