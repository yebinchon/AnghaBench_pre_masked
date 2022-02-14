
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_flow_handle {int dummy; } ;
struct TYPE_4__ {int num_flows; } ;
struct mlx5_eswitch {TYPE_2__ offloads; } ;
struct mlx5_esw_flow_attr {scalar_t__ split_count; int prio; scalar_t__ dest_chain; scalar_t__ chain; TYPE_1__* dests; } ;
struct TYPE_3__ {scalar_t__ termtbl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_eswitch*,scalar_t__,int,int) ;
 int FUNC_2 (struct mlx5_flow_handle*) ;
 int FUNC_3 (struct mlx5_eswitch*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct mlx5_eswitch *VAR_1,
   struct mlx5_flow_handle *VAR_2,
   struct mlx5_esw_flow_attr *VAR_3,
   bool VAR_4)
{
 bool VAR_5 = (VAR_3->split_count > 0);
 int VAR_6;

 FUNC_2(VAR_2);


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3->dests[VAR_6].termtbl)
   FUNC_3(VAR_1, VAR_3->dests[VAR_6].termtbl);
 }

 FUNC_0(&VAR_1->offloads.num_flows);

 if (VAR_4) {
  FUNC_1(VAR_1, VAR_3->chain, VAR_3->prio, 1);
  FUNC_1(VAR_1, VAR_3->chain, VAR_3->prio, 0);
 } else {
  FUNC_1(VAR_1, VAR_3->chain, VAR_3->prio, !!VAR_5);
  if (VAR_3->dest_chain)
   FUNC_1(VAR_1, VAR_3->dest_chain, 1, 0);
 }
}
