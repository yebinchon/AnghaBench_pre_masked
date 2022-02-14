
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* vf_admin; } ;
struct TYPE_11__ {TYPE_4__ master; } ;
struct TYPE_7__ {int num_ports; } ;
struct TYPE_12__ {TYPE_1__ caps; } ;
struct mlx4_priv {TYPE_5__ mfunc; TYPE_6__ dev; } ;
struct TYPE_8__ {int num_ports; } ;
struct mlx4_dev {int num_slaves; TYPE_2__ caps; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_9__ {int* enable_smi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct mlx4_active_ports FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (struct mlx4_dev*,char*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;

int FUNC_6(struct mlx4_dev *VAR_3, int VAR_4, int VAR_5,
     int VAR_6)
{
 struct mlx4_priv *VAR_7 = FUNC_5(VAR_3);
 struct mlx4_active_ports VAR_8 = FUNC_2(
   &VAR_7->dev, VAR_4);
 int VAR_9 = FUNC_1(VAR_8.ports,
          VAR_7->dev.caps.num_ports) + 1;
 int VAR_10 = VAR_9 - 1 +
  FUNC_0(VAR_8.ports, VAR_7->dev.caps.num_ports);

 if (VAR_4 == FUNC_4(VAR_3))
  return 0;

 if (VAR_4 < 1 || VAR_4 >= VAR_3->num_slaves ||
     VAR_5 < 1 || VAR_5 > VAR_2 ||
     VAR_6 < 0 || VAR_6 > 1)
  return -VAR_0;

 if (VAR_9 == VAR_10 && VAR_3->caps.num_ports > 1) {
  FUNC_3(VAR_3, "SMI access disallowed for single ported VFs\n");
  return -VAR_1;
 }

 VAR_7->mfunc.master.vf_admin[VAR_4].enable_smi[VAR_5] = VAR_6;
 return 0;
}
