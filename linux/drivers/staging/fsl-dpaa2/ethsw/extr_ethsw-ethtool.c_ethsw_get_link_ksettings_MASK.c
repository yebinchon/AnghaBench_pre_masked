
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int speed; int duplex; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct ethsw_port_priv {int idx; TYPE_1__* ethsw_data; } ;
struct dpsw_link_state {int options; int rate; int member_0; } ;
struct TYPE_3__ {int dpsw_handle; int mc_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,struct dpsw_link_state*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct ethsw_port_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_4,
    struct ethtool_link_ksettings *VAR_5)
{
 struct ethsw_port_priv *VAR_6 = FUNC_2(VAR_4);
 struct dpsw_link_state VAR_7 = {0};
 int VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_6->ethsw_data->mc_io, 0,
         VAR_6->ethsw_data->dpsw_handle,
         VAR_6->idx,
         &VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_4, "ERROR %d getting link state\n", VAR_8);
  goto out;
 }





 if (VAR_7.options & VAR_1)
  VAR_5->base.autoneg = VAR_0;
 if (!(VAR_7.options & VAR_2))
  VAR_5->base.duplex = VAR_3;
 VAR_5->base.speed = VAR_7.rate;

out:
 return VAR_8;
}
