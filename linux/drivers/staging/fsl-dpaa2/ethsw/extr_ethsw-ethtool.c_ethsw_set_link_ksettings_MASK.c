
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ autoneg; scalar_t__ duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct ethsw_port_priv {int idx; struct ethsw_core* ethsw_data; } ;
struct ethsw_core {int dpsw_handle; int mc_io; } ;
struct dpsw_link_cfg {int options; int rate; int member_0; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,struct dpsw_link_cfg*) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct ethsw_port_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_4,
    const struct ethtool_link_ksettings *VAR_5)
{
 struct ethsw_port_priv *VAR_6 = FUNC_4(VAR_4);
 struct ethsw_core *VAR_7 = VAR_6->ethsw_data;
 struct dpsw_link_cfg VAR_8 = {0};
 bool VAR_9;
 int VAR_10 = 0, VAR_11;


 VAR_9 = FUNC_5(VAR_4);
 if (VAR_9) {
  VAR_10 = FUNC_0(VAR_7->mc_io, 0,
          VAR_7->dpsw_handle,
          VAR_6->idx);
  if (VAR_10) {
   FUNC_3(VAR_4, "dpsw_if_disable err %d\n", VAR_10);
   return VAR_10;
  }
 }

 VAR_8.rate = VAR_5->base.speed;
 if (VAR_5->base.autoneg == VAR_0)
  VAR_8.options |= VAR_1;
 else
  VAR_8.options &= ~VAR_1;
 if (VAR_5->base.duplex == VAR_3)
  VAR_8.options |= VAR_2;
 else
  VAR_8.options &= ~VAR_2;

 VAR_10 = FUNC_2(VAR_6->ethsw_data->mc_io, 0,
       VAR_6->ethsw_data->dpsw_handle,
       VAR_6->idx,
       &VAR_8);

 if (VAR_9) {
  VAR_11 = FUNC_1(VAR_7->mc_io, 0,
         VAR_7->dpsw_handle,
         VAR_6->idx);
  if (VAR_11) {
   FUNC_3(VAR_4, "dpsw_if_enable err %d\n", VAR_11);
   return VAR_11;
  }
 }
 return VAR_10;
}
