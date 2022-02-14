
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * nic_dmn; } ;
struct mlx5dr_table {TYPE_2__* dmn; TYPE_3__ tx; TYPE_3__ rx; int table_type; int matcher_list; } ;
struct TYPE_4__ {int tx; int rx; } ;
struct TYPE_5__ {int type; int mutex; TYPE_1__ info; } ;


 int FUNC_0 (int *) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx5dr_table*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mlx5dr_table *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_3->matcher_list);

 FUNC_4(&VAR_3->dmn->mutex);

 switch (VAR_3->dmn->type) {
 case 129:
  VAR_3->table_type = VAR_1;
  VAR_3->rx.nic_dmn = &VAR_3->dmn->info.rx;
  VAR_4 = FUNC_3(VAR_3->dmn, &VAR_3->rx);
  break;
 case 128:
  VAR_3->table_type = VAR_2;
  VAR_3->tx.nic_dmn = &VAR_3->dmn->info.tx;
  VAR_4 = FUNC_3(VAR_3->dmn, &VAR_3->tx);
  break;
 case 130:
  VAR_3->table_type = VAR_0;
  VAR_3->rx.nic_dmn = &VAR_3->dmn->info.rx;
  VAR_3->tx.nic_dmn = &VAR_3->dmn->info.tx;
  VAR_4 = FUNC_2(VAR_3);
  break;
 default:
  FUNC_1(1);
  break;
 }

 FUNC_5(&VAR_3->dmn->mutex);

 return VAR_4;
}
