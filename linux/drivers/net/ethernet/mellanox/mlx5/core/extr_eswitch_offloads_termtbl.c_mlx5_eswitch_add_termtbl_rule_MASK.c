
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vhca_id; int num; } ;
struct TYPE_8__ {TYPE_3__ vport; } ;
struct mlx5_termtbl_handle {scalar_t__ termtbl; TYPE_4__ dest; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_spec {int dummy; } ;
struct mlx5_flow_handle {scalar_t__ termtbl; TYPE_4__ dest; } ;
struct TYPE_6__ {int vhca_id; int num; } ;
struct mlx5_flow_destination {scalar_t__ type; scalar_t__ ft; TYPE_2__ vport; } ;
struct mlx5_flow_act {int action; } ;
struct mlx5_eswitch {int dev; } ;
struct mlx5_esw_flow_attr {TYPE_1__* dests; } ;
typedef int dest ;
struct TYPE_5__ {struct mlx5_termtbl_handle* termtbl; } ;


 scalar_t__ FUNC_0 (struct mlx5_termtbl_handle*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mlx5_flow_destination*,int ,int) ;
 struct mlx5_termtbl_handle* FUNC_3 (struct mlx5_flow_table*,struct mlx5_flow_spec*,struct mlx5_flow_act*,struct mlx5_flow_destination*,int) ;
 int FUNC_4 (struct mlx5_flow_act*,struct mlx5_flow_act*) ;
 struct mlx5_termtbl_handle* FUNC_5 (struct mlx5_eswitch*,struct mlx5_flow_act*,struct mlx5_flow_destination*) ;
 int FUNC_6 (struct mlx5_eswitch*,struct mlx5_termtbl_handle*) ;

struct mlx5_flow_handle *
FUNC_7(struct mlx5_eswitch *VAR_3,
         struct mlx5_flow_table *VAR_4,
         struct mlx5_flow_spec *VAR_5,
         struct mlx5_esw_flow_attr *VAR_6,
         struct mlx5_flow_act *VAR_7,
         struct mlx5_flow_destination *VAR_8,
         int VAR_9)
{
 struct mlx5_flow_act VAR_10 = {};
 struct mlx5_flow_handle *VAR_11 = ((void*)0);
 bool VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14, VAR_15;

 FUNC_4(VAR_7, &VAR_10);
 VAR_10.action |= VAR_0;

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  struct mlx5_termtbl_handle *VAR_16;


  if (VAR_8[VAR_14].type != VAR_2)
   continue;


  VAR_16 = FUNC_5(VAR_3, &VAR_10,
           &VAR_8[VAR_14]);
  if (FUNC_0(VAR_16)) {
   FUNC_1(VAR_3->dev, "Failed to create termination table\n");
   goto revert_changes;
  }
  VAR_6->dests[VAR_13].termtbl = VAR_16;
  VAR_13++;


  VAR_8[VAR_14].type = VAR_1;
  VAR_8[VAR_14].ft = VAR_16->termtbl;
  VAR_12 = 1;
 }


 if (!VAR_12)
  goto revert_changes;


 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_7, VAR_8, VAR_9);
 if (FUNC_0(VAR_11))
  goto revert_changes;

 goto out;

revert_changes:



 FUNC_4(&VAR_10, VAR_7);

 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  struct mlx5_termtbl_handle *VAR_17 = VAR_6->dests[VAR_15].termtbl;




  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
   if (VAR_8[VAR_14].ft != VAR_17->termtbl)
    continue;

   FUNC_2(&VAR_8[VAR_14], 0, sizeof(VAR_8[VAR_14]));
   VAR_8[VAR_14].type = VAR_2;
   VAR_8[VAR_14].vport.num = VAR_17->dest.vport.num;
   VAR_8[VAR_14].vport.vhca_id = VAR_17->dest.vport.vhca_id;
   FUNC_6(VAR_3, VAR_17);
   break;
  }
 }
 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_7, VAR_8, VAR_9);
out:
 return VAR_11;
}
