
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_table {int table_type; int table_id; TYPE_1__* dmn; } ;
struct TYPE_2__ {int mdev; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_table *VAR_0)
{
 return FUNC_0(VAR_0->dmn->mdev,
          VAR_0->table_id,
          VAR_0->table_type);
}
