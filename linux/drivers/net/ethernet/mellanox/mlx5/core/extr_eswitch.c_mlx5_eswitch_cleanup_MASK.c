
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_7__ {int encap_tbl_lock; TYPE_1__ mod_hdr; } ;
struct mlx5_eswitch {struct mlx5_eswitch* vports; TYPE_2__ offloads; int work_queue; TYPE_4__* dev; } ;
struct TYPE_8__ {int * eswitch; } ;
struct TYPE_9__ {TYPE_3__ priv; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (struct mlx5_eswitch*) ;
 int FUNC_4 (struct mlx5_eswitch*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mlx5_eswitch *VAR_0)
{
 if (!VAR_0 || !FUNC_0(VAR_0->dev))
  return;

 FUNC_2(VAR_0->dev, "cleanup\n");

 VAR_0->dev->priv.eswitch = ((void*)0);
 FUNC_1(VAR_0->work_queue);
 FUNC_3(VAR_0);
 FUNC_5(&VAR_0->offloads.mod_hdr.lock);
 FUNC_5(&VAR_0->offloads.encap_tbl_lock);
 FUNC_4(VAR_0->vports);
 FUNC_4(VAR_0);
}
