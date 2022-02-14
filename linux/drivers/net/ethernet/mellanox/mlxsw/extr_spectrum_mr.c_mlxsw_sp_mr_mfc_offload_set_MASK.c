
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_mr_route {TYPE_1__* mfc; } ;
struct TYPE_2__ {int mfc_flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mlxsw_sp_mr_route *VAR_1,
     bool VAR_2)
{
 if (VAR_2)
  VAR_1->mfc->mfc_flags |= VAR_0;
 else
  VAR_1->mfc->mfc_flags &= ~VAR_0;
}
