
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_vport_state {int mac; int link_state; int spoofchk; int tx_rate; int vlan_proto; int default_qos; int default_vlan; } ;
struct TYPE_5__ {TYPE_1__* vf_admin; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct ifla_vf_info {int vf; int* mac; int linkstate; int spoofchk; scalar_t__ min_tx_rate; int max_tx_rate; int vlan_proto; int qos; int vlan; } ;
struct TYPE_4__ {struct mlx4_vport_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int) ;
 int FUNC_1 (struct mlx4_dev*) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*,int,struct mlx4_vport_state*) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;

int FUNC_4(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4, struct ifla_vf_info *VAR_5)
{
 struct mlx4_priv *VAR_6 = FUNC_3(VAR_2);
 struct mlx4_vport_state *VAR_7;
 int VAR_8;

 if (!FUNC_1(VAR_2))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_2, VAR_4);
 if (VAR_8 < 0)
  return -VAR_0;

 VAR_7 = &VAR_6->mfunc.master.vf_admin[VAR_8].vport[VAR_3];
 VAR_5->vf = VAR_4;


 VAR_5->mac[0] = ((VAR_7->mac >> (5*8)) & 0xff);
 VAR_5->mac[1] = ((VAR_7->mac >> (4*8)) & 0xff);
 VAR_5->mac[2] = ((VAR_7->mac >> (3*8)) & 0xff);
 VAR_5->mac[3] = ((VAR_7->mac >> (2*8)) & 0xff);
 VAR_5->mac[4] = ((VAR_7->mac >> (1*8)) & 0xff);
 VAR_5->mac[5] = ((VAR_7->mac) & 0xff);

 VAR_5->vlan = VAR_7->default_vlan;
 VAR_5->qos = VAR_7->default_qos;
 VAR_5->vlan_proto = VAR_7->vlan_proto;

 if (FUNC_2(VAR_2, VAR_3, VAR_7))
  VAR_5->max_tx_rate = VAR_7->tx_rate;
 else
  VAR_5->max_tx_rate = 0;

 VAR_5->min_tx_rate = 0;
 VAR_5->spoofchk = VAR_7->spoofchk;
 VAR_5->linkstate = VAR_7->link_state;

 return 0;
}
