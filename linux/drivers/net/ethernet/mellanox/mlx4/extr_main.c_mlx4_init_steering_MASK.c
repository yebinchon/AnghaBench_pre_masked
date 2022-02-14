
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_steer {int dummy; } ;
struct mlx4_priv {TYPE_2__* steer; } ;
struct TYPE_3__ {int num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {int * steer_entries; int * promisc_qps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int,int,int ) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = VAR_3->caps.num_ports;
 int VAR_6, VAR_7;

 VAR_4->steer = FUNC_1(VAR_5, sizeof(struct mlx4_steer),
         VAR_1);
 if (!VAR_4->steer)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   FUNC_0(&VAR_4->steer[VAR_6].promisc_qps[VAR_7]);
   FUNC_0(&VAR_4->steer[VAR_6].steer_entries[VAR_7]);
  }
 return 0;
}
