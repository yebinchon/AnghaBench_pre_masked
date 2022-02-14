
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef void u32 ;
struct mlx5_flow_table_attr {int max_fte; int prio; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
typedef struct mlx5_flow_table mlx5_flow_group ;
struct TYPE_5__ {struct mlx5_flow_table* promisc_grp; struct mlx5_flow_table* allmulti_grp; struct mlx5_flow_table* addr_grp; struct mlx5_flow_table* fdb; } ;
struct TYPE_6__ {TYPE_1__ legacy; } ;
struct mlx5_eswitch {TYPE_2__ fdb_table; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_8__ {int source_port; } ;
struct TYPE_7__ {void* dmac_47_16; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mlx5_flow_table*) ;
 int VAR_3 ;
 void* FUNC_2 (int ,void*,void*) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,void*,int ,int) ;
 int FUNC_5 (int ,void*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlx5_flow_table*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct mlx5_core_dev*,char*,int ) ;
 int FUNC_9 (struct mlx5_eswitch*) ;
 int FUNC_10 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int*) ;
 int VAR_8 ;
 int FUNC_13 (void*) ;
 void* FUNC_14 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_4__ VAR_11 ;
 struct mlx5_flow_table* FUNC_15 (struct mlx5_flow_table*,void*) ;
 struct mlx5_flow_table* FUNC_16 (struct mlx5_flow_namespace*,struct mlx5_flow_table_attr*) ;
 struct mlx5_flow_namespace* FUNC_17 (struct mlx5_core_dev*,int ) ;
 TYPE_3__ VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_18(struct mlx5_eswitch *VAR_14)
{
 int VAR_15 = FUNC_6(VAR_6);
 struct mlx5_flow_table_attr VAR_16 = {};
 struct mlx5_core_dev *VAR_17 = VAR_14->dev;
 struct mlx5_flow_namespace *VAR_18;
 struct mlx5_flow_table *VAR_19;
 struct mlx5_flow_group *VAR_20;
 void *VAR_21;
 int VAR_22;
 u32 *VAR_23;
 u8 *VAR_24;
 int VAR_25 = 0;

 FUNC_8(VAR_17, "Create FDB log_max_size(%d)\n",
    FUNC_3(VAR_17, VAR_9));

 VAR_18 = FUNC_17(VAR_17, 0);
 if (!VAR_18) {
  FUNC_10(VAR_17, "Failed to get FDB flow namespace\n");
  return -VAR_1;
 }

 VAR_23 = FUNC_14(VAR_15, VAR_2);
 if (!VAR_23)
  return -VAR_0;

 VAR_22 = FUNC_0(FUNC_3(VAR_17, VAR_9));
 VAR_16.max_fte = VAR_22;
 VAR_16.prio = VAR_3;
 VAR_19 = FUNC_16(VAR_18, &VAR_16);
 if (FUNC_1(VAR_19)) {
  VAR_25 = FUNC_7(VAR_19);
  FUNC_10(VAR_17, "Failed to create FDB Table err %d\n", VAR_25);
  goto out;
 }
 VAR_14->fdb_table.legacy.fdb = VAR_19;


 FUNC_4(VAR_6, VAR_23, VAR_10,
   VAR_5);
 VAR_21 = FUNC_2(VAR_6, VAR_23, VAR_21);
 VAR_24 = FUNC_2(VAR_8, VAR_21, VAR_12.dmac_47_16);
 FUNC_4(VAR_6, VAR_23, VAR_13, 0);

 FUNC_4(VAR_6, VAR_23, VAR_7, VAR_22 - 3);
 FUNC_11(VAR_24);
 VAR_20 = FUNC_15(VAR_19, VAR_23);
 if (FUNC_1(VAR_20)) {
  VAR_25 = FUNC_7(VAR_20);
  FUNC_10(VAR_17, "Failed to create flow group err(%d)\n", VAR_25);
  goto out;
 }
 VAR_14->fdb_table.legacy.addr_grp = VAR_20;


 FUNC_4(VAR_6, VAR_23, VAR_10,
   VAR_5);
 FUNC_4(VAR_6, VAR_23, VAR_13, VAR_22 - 2);
 FUNC_4(VAR_6, VAR_23, VAR_7, VAR_22 - 2);
 FUNC_12(VAR_24);
 VAR_24[0] = 0x01;
 VAR_20 = FUNC_15(VAR_19, VAR_23);
 if (FUNC_1(VAR_20)) {
  VAR_25 = FUNC_7(VAR_20);
  FUNC_10(VAR_17, "Failed to create allmulti flow group err(%d)\n", VAR_25);
  goto out;
 }
 VAR_14->fdb_table.legacy.allmulti_grp = VAR_20;




 FUNC_12(VAR_24);
 FUNC_4(VAR_6, VAR_23, VAR_10,
   VAR_4);
 FUNC_5(VAR_8, VAR_21, VAR_11.source_port);
 FUNC_4(VAR_6, VAR_23, VAR_13, VAR_22 - 1);
 FUNC_4(VAR_6, VAR_23, VAR_7, VAR_22 - 1);
 VAR_20 = FUNC_15(VAR_19, VAR_23);
 if (FUNC_1(VAR_20)) {
  VAR_25 = FUNC_7(VAR_20);
  FUNC_10(VAR_17, "Failed to create promisc flow group err(%d)\n", VAR_25);
  goto out;
 }
 VAR_14->fdb_table.legacy.promisc_grp = VAR_20;

out:
 if (VAR_25)
  FUNC_9(VAR_14);

 FUNC_13(VAR_23);
 return VAR_25;
}
