
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct ethsw_port_priv {int idx; TYPE_1__* ethsw_data; } ;
struct TYPE_4__ {int name; int id; } ;
struct TYPE_3__ {int dpsw_handle; int mc_io; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct net_device*,char*,int ,int) ;
 struct ethsw_port_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
        struct ethtool_stats *VAR_3,
        u64 *VAR_4)
{
 struct ethsw_port_priv *VAR_5 = FUNC_2(VAR_2);
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_0(VAR_5->ethsw_data->mc_io, 0,
       VAR_5->ethsw_data->dpsw_handle,
       VAR_5->idx,
       VAR_1[VAR_6].id,
       &VAR_4[VAR_6]);
  if (VAR_7)
   FUNC_1(VAR_2, "dpsw_if_get_counter[%s] err %d\n",
       VAR_1[VAR_6].name, VAR_7);
 }
}
