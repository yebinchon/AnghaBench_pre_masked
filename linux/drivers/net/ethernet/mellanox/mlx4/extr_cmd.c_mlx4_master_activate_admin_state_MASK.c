
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mlx4_vport_state {scalar_t__ vlan_proto; scalar_t__ default_vlan; int mac; scalar_t__ spoofchk; int guid; int qos_vport; int tx_rate; int link_state; int default_qos; } ;
struct TYPE_17__ {scalar_t__ vlan_proto; scalar_t__ default_vlan; int mac; int guid; int qos_vport; int tx_rate; scalar_t__ spoofchk; int link_state; int default_qos; } ;
struct mlx4_vport_oper_state {int vlan_idx; int mac_idx; TYPE_6__ state; } ;
struct mlx4_slave_state {scalar_t__ vst_qinq_supported; } ;
struct TYPE_12__ {int num_ports; } ;
struct TYPE_18__ {TYPE_1__ caps; } ;
struct TYPE_15__ {TYPE_3__* vf_admin; TYPE_2__* vf_oper; struct mlx4_slave_state* slave_state; } ;
struct TYPE_16__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_7__ dev; TYPE_5__ mfunc; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_14__ {struct mlx4_vport_state* vport; int * enable_smi; } ;
struct TYPE_13__ {struct mlx4_vport_oper_state* vport; int * smi_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (TYPE_7__*,int,int) ;
 int FUNC_1 (TYPE_7__*,int,scalar_t__,int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*,char*,int,int,int,int) ;
 struct mlx4_active_ports FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (TYPE_7__*,char*,int,int) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct mlx4_priv *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 struct mlx4_vport_state *VAR_8;
 struct mlx4_vport_oper_state *VAR_9;
 struct mlx4_slave_state *VAR_10 =
  &VAR_4->mfunc.master.slave_state[VAR_5];
 struct mlx4_active_ports VAR_11 = FUNC_6(
   &VAR_4->dev, VAR_5);
 int VAR_12 = FUNC_3(VAR_11.ports,
          VAR_4->dev.caps.num_ports) + 1;
 int VAR_13 = VAR_12 - 1 +
  FUNC_2(VAR_11.ports, VAR_4->dev.caps.num_ports);

 for (VAR_6 = VAR_12; VAR_6 <= VAR_13; VAR_6++) {
  if (!FUNC_8(VAR_6 - 1, VAR_11.ports))
   continue;
  VAR_4->mfunc.master.vf_oper[VAR_5].smi_enabled[VAR_6] =
   VAR_4->mfunc.master.vf_admin[VAR_5].enable_smi[VAR_6];
  VAR_9 = &VAR_4->mfunc.master.vf_oper[VAR_5].vport[VAR_6];
  VAR_8 = &VAR_4->mfunc.master.vf_admin[VAR_5].vport[VAR_6];
  if (VAR_8->vlan_proto != FUNC_4(VAR_0) ||
      VAR_10->vst_qinq_supported) {
   VAR_9->state.vlan_proto = VAR_8->vlan_proto;
   VAR_9->state.default_vlan = VAR_8->default_vlan;
   VAR_9->state.default_qos = VAR_8->default_qos;
  }
  VAR_9->state.link_state = VAR_8->link_state;
  VAR_9->state.mac = VAR_8->mac;
  VAR_9->state.spoofchk = VAR_8->spoofchk;
  VAR_9->state.tx_rate = VAR_8->tx_rate;
  VAR_9->state.qos_vport = VAR_8->qos_vport;
  VAR_9->state.guid = VAR_8->guid;

  if (VAR_2 != VAR_8->default_vlan) {
   VAR_7 = FUNC_1(&VAR_4->dev, VAR_6,
         VAR_8->default_vlan, &(VAR_9->vlan_idx));
   if (VAR_7) {
    VAR_9->vlan_idx = VAR_3;
    VAR_9->state.default_vlan = VAR_2;
    VAR_9->state.vlan_proto = FUNC_4(VAR_1);
    FUNC_7(&VAR_4->dev,
       "No vlan resources slave %d, port %d\n",
       VAR_5, VAR_6);
    return VAR_7;
   }
   FUNC_5(&VAR_4->dev, "alloc vlan %d idx  %d slave %d port %d\n",
     (int)(VAR_9->state.default_vlan),
     VAR_9->vlan_idx, VAR_5, VAR_6);
  }
  if (VAR_8->spoofchk) {
   VAR_9->mac_idx = FUNC_0(&VAR_4->dev,
              VAR_6,
              VAR_8->mac);
   if (0 > VAR_9->mac_idx) {
    VAR_7 = VAR_9->mac_idx;
    VAR_9->mac_idx = VAR_3;
    FUNC_7(&VAR_4->dev,
       "No mac resources slave %d, port %d\n",
       VAR_5, VAR_6);
    return VAR_7;
   }
   FUNC_5(&VAR_4->dev, "alloc mac %llx idx  %d slave %d port %d\n",
     VAR_9->state.mac, VAR_9->mac_idx, VAR_5, VAR_6);
  }
 }
 return 0;
}
