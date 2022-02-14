
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* fdb_left; } ;
struct TYPE_4__ {TYPE_1__ offloads; } ;
struct mlx5_eswitch {TYPE_2__ fdb_table; } ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct mlx5_eswitch *VAR_1)
{
 int VAR_2 = 0, VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_1->fdb_table.offloads.fdb_left[VAR_3]) {
   --VAR_1->fdb_table.offloads.fdb_left[VAR_3];
   VAR_2 = VAR_0[VAR_3];
   break;
  }
 }

 return VAR_2;
}
