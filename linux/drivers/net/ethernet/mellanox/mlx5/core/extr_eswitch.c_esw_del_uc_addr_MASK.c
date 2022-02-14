
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int * addr; } ;
struct vport_addr {scalar_t__ vport; int mpfs; int * flow_rule; TYPE_1__ node; } ;
struct mlx5_eswitch {scalar_t__ manager_vport; int dev; } ;


 int FUNC_0 (int ,char*,int *,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_eswitch *VAR_0, struct vport_addr *VAR_1)
{
 u8 *VAR_2 = VAR_1->node.addr;
 u16 VAR_3 = VAR_1->vport;
 int VAR_4 = 0;




 if (!VAR_1->mpfs || VAR_0->manager_vport == VAR_3)
  goto fdb_del;

 VAR_4 = FUNC_2(VAR_0->dev, VAR_2);
 if (VAR_4)
  FUNC_0(VAR_0->dev,
    "Failed to del L2 table mac(%pM) for vport(%d), err(%d)\n",
    VAR_2, VAR_3, VAR_4);
 VAR_1->mpfs = 0;

fdb_del:
 if (VAR_1->flow_rule)
  FUNC_1(VAR_1->flow_rule);
 VAR_1->flow_rule = ((void*)0);

 return 0;
}
