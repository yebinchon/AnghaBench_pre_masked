
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_ports; scalar_t__* port_type; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__* persist; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_3__ {int num_vfs; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 scalar_t__ VAR_0 ;
 struct mlx4_cmd_mailbox* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 struct mlx4_active_ports FUNC_3 (struct mlx4_dev*,int) ;
 int FUNC_4 (struct mlx4_dev*,int,int,struct mlx4_cmd_mailbox*) ;
 int FUNC_5 (struct mlx4_dev*,char*,int,int,int) ;
 scalar_t__ FUNC_6 (int,int ) ;

void FUNC_7(struct mlx4_dev *VAR_1, int VAR_2)
{
 struct mlx4_active_ports VAR_3;
 struct mlx4_cmd_mailbox *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 if (VAR_2 < 0 || VAR_2 > VAR_1->persist->num_vfs)
  return;

 VAR_3 = FUNC_3(VAR_1, VAR_2);

 for (VAR_7 = 0, VAR_5 = 0; VAR_7 < VAR_1->caps.num_ports; VAR_7++) {
  if (FUNC_6(VAR_7, VAR_3.ports)) {
   if (VAR_1->caps.port_type[VAR_7 + 1] != VAR_0)
    continue;
   VAR_5++;
  }
 }

 if (!VAR_5)
  return;


 VAR_4 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_4))
  return;

 for (VAR_7 = 0; VAR_7 < VAR_1->caps.num_ports; VAR_7++) {
  if (FUNC_6(VAR_7, VAR_3.ports)) {
   if (VAR_1->caps.port_type[VAR_7 + 1] != VAR_0)
    continue;
   VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_7 + 1, VAR_4);
   if (VAR_6)
    FUNC_5(VAR_1, "Could not reset ETH port GID table for slave %d, port %d (%d)\n",
       VAR_2, VAR_7 + 1, VAR_6);
  }
 }

 FUNC_2(VAR_1, VAR_4);
 return;
}
