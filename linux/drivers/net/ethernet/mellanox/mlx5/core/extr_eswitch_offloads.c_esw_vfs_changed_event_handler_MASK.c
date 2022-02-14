
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ num_vfs; } ;
struct mlx5_eswitch {TYPE_1__ esw_funcs; } ;
struct TYPE_4__ {int host_pf_disabled; int host_num_of_vfs; } ;


 void* FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct mlx5_eswitch*,scalar_t__) ;
 int FUNC_2 (struct mlx5_eswitch*,scalar_t__) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct mlx5_eswitch *VAR_2, const u32 *VAR_3)
{
 bool VAR_4;
 u16 VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_3,
          VAR_0.host_num_of_vfs);
 VAR_4 = FUNC_0(VAR_1, VAR_3,
        VAR_0.host_pf_disabled);

 if (VAR_5 == VAR_2->esw_funcs.num_vfs || VAR_4)
  return;


 if (VAR_2->esw_funcs.num_vfs > 0) {
  FUNC_2(VAR_2, VAR_2->esw_funcs.num_vfs);
 } else {
  int VAR_6;

  VAR_6 = FUNC_1(VAR_2, VAR_5);
  if (VAR_6)
   return;
 }
 VAR_2->esw_funcs.num_vfs = VAR_5;
}
