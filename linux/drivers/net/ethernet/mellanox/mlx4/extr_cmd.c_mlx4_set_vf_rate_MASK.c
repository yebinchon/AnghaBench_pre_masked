
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mlx4_vport_state {int tx_rate; scalar_t__ default_vlan; int qos_vport; } ;
struct TYPE_8__ {TYPE_2__* slave_state; TYPE_1__* vf_admin; } ;
struct TYPE_9__ {TYPE_3__ master; } ;
struct mlx4_priv {TYPE_4__ mfunc; } ;
struct TYPE_10__ {int flags2; } ;
struct mlx4_dev {TYPE_5__ caps; } ;
struct TYPE_7__ {scalar_t__ active; } ;
struct TYPE_6__ {struct mlx4_vport_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx4_dev*,int) ;
 int FUNC_1 (struct mlx4_dev*,char*,...) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int,struct mlx4_vport_state*) ;
 int FUNC_4 (struct mlx4_priv*,int,int) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_priv*,int,int,int) ;
 int FUNC_7 (struct mlx4_dev*,int,int) ;

int FUNC_8(struct mlx4_dev *VAR_6, int VAR_7, int VAR_8, int VAR_9,
       int VAR_10)
{
 int VAR_11;
 int VAR_12;
 struct mlx4_vport_state *VAR_13;
 struct mlx4_priv *VAR_14 = FUNC_5(VAR_6);

 if (!FUNC_2(VAR_6) ||
     !(VAR_6->caps.flags2 & VAR_2))
  return -VAR_1;

 if (VAR_9) {
  FUNC_1(VAR_6, "Minimum BW share not supported\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_0(VAR_6, VAR_8);
 if (VAR_12 < 0)
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_6, VAR_12, VAR_7);
 VAR_13 = &VAR_14->mfunc.master.vf_admin[VAR_12].vport[VAR_7];

 VAR_11 = FUNC_6(VAR_14, VAR_12, VAR_7, VAR_10);
 if (VAR_11) {
  FUNC_1(VAR_6, "vf %d failed to set rate %d\n", VAR_8,
     VAR_10);
  return VAR_11;
 }

 VAR_13->tx_rate = VAR_10;





 if (!FUNC_3(VAR_6, VAR_7, VAR_13)) {
  FUNC_1(VAR_6,
     "rate set for VF %d when not in valid state\n", VAR_8);

  if (VAR_13->default_vlan != VAR_4)
   FUNC_1(VAR_6, "VST priority not supported by QoS\n");
  else
   FUNC_1(VAR_6, "VF in VGT mode (needed VST)\n");

  FUNC_1(VAR_6,
     "rate %d take affect when VF moves to valid state\n",
     VAR_10);
  return 0;
 }


 VAR_13->qos_vport = VAR_10 ? VAR_12 : VAR_5;

 if (VAR_14->mfunc.master.slave_state[VAR_12].active &&
     VAR_6->caps.flags2 & VAR_3)
  FUNC_4(VAR_14, VAR_12, VAR_7);

 return 0;
}
