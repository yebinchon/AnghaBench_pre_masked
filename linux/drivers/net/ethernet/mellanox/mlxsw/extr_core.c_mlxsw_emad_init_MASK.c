
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct workqueue_struct {int dummy; } ;
struct TYPE_6__ {int use_emad; int trans_list_lock; int trans_list; int tid; } ;
struct mlxsw_core {struct workqueue_struct* emad_wq; TYPE_3__ emad; TYPE_2__* driver; TYPE_1__* bus; } ;
struct TYPE_5__ {int (* basic_trap_groups_set ) (struct mlxsw_core*) ;} ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct workqueue_struct* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct workqueue_struct*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct mlxsw_core*,int *,struct mlxsw_core*) ;
 int FUNC_6 (struct mlxsw_core*,int *,struct mlxsw_core*) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mlxsw_core*) ;

__attribute__((used)) static int FUNC_9(struct mlxsw_core *VAR_3)
{
 struct workqueue_struct *VAR_4;
 u64 VAR_5;
 int VAR_6;

 if (!(VAR_3->bus->features & VAR_1))
  return 0;

 VAR_4 = FUNC_1("mlxsw_core_emad", 0, 0);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->emad_wq = VAR_4;





 FUNC_4(&VAR_5, 4);
 VAR_5 <<= 32;
 FUNC_2(&VAR_3->emad.tid, VAR_5);

 FUNC_0(&VAR_3->emad.trans_list);
 FUNC_7(&VAR_3->emad.trans_list_lock);

 VAR_6 = FUNC_5(VAR_3, &VAR_2,
           VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_3->driver->basic_trap_groups_set(VAR_3);
 if (VAR_6)
  goto err_emad_trap_set;
 VAR_3->emad.use_emad = 1;

 return 0;

err_emad_trap_set:
 FUNC_6(VAR_3, &VAR_2,
       VAR_3);
 FUNC_3(VAR_3->emad_wq);
 return VAR_6;
}
