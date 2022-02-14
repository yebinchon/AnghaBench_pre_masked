
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_flow_table {scalar_t__ level; } ;
struct mlx5_flow_destination {scalar_t__ type; TYPE_1__* ft; } ;
struct TYPE_2__ {scalar_t__ level; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct mlx5_flow_destination *VAR_3,
     u32 VAR_4,
     struct mlx5_flow_table *VAR_5)
{
 if (VAR_3 && (VAR_3->type == VAR_1))
  return FUNC_0(VAR_4);

 if (!(VAR_4 & VAR_0))
  return 1;

 if (!VAR_3 || ((VAR_3->type ==
     VAR_2) &&
     (VAR_3->ft->level <= VAR_5->level)))
  return 0;
 return 1;
}
