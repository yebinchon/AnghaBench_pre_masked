
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_4__ {int source_port; } ;
struct TYPE_3__ {int metadata_reg_c_0; } ;


 void* FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ FUNC_3 (struct mlx5_eswitch*) ;

__attribute__((used)) static void FUNC_4(struct mlx5_eswitch *VAR_8,
        u32 *VAR_9)
{
 void *VAR_10 = FUNC_0(VAR_2,
         VAR_9,
         VAR_10);

 if (FUNC_3(VAR_8)) {
  FUNC_1(VAR_2, VAR_9,
    VAR_5,
    VAR_1);

  FUNC_2(VAR_3, VAR_10,
     VAR_7);
 } else {
  FUNC_1(VAR_2, VAR_9,
    VAR_5,
    VAR_0);

  FUNC_2(VAR_3, VAR_10,
     VAR_6.source_port);
 }
}
