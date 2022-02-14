
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int * addr; } ;
struct vport_addr {scalar_t__ vport; int mpfs; int flow_rule; TYPE_3__ node; } ;
struct TYPE_4__ {scalar_t__ fdb; } ;
struct TYPE_5__ {TYPE_1__ legacy; } ;
struct mlx5_eswitch {scalar_t__ manager_vport; scalar_t__ mode; int dev; TYPE_2__ fdb_table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int *,int ) ;
 int FUNC_1 (struct mlx5_eswitch*,int *,scalar_t__) ;
 int FUNC_2 (int ,char*,int *,scalar_t__,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct mlx5_eswitch *VAR_1, struct vport_addr *VAR_2)
{
 u8 *VAR_3 = VAR_2->node.addr;
 u16 VAR_4 = VAR_2->vport;
 int VAR_5;




 if (VAR_1->manager_vport == VAR_4)
  goto fdb_add;

 VAR_5 = FUNC_3(VAR_1->dev, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_1->dev,
    "Failed to add L2 table mac(%pM) for vport(0x%x), err(%d)\n",
    VAR_3, VAR_4, VAR_5);
  return VAR_5;
 }
 VAR_2->mpfs = 1;

fdb_add:

 if (VAR_1->fdb_table.legacy.fdb && VAR_1->mode == VAR_0)
  VAR_2->flow_rule = FUNC_1(VAR_1, VAR_3, VAR_4);

 FUNC_0(VAR_1->dev, "\tADDED UC MAC: vport[%d] %pM fr(%p)\n",
    VAR_4, VAR_3, VAR_2->flow_rule);

 return 0;
}
