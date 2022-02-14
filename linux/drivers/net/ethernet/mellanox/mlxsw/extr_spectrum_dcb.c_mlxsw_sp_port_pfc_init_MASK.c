
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* pfc; } ;
struct mlxsw_sp_port {TYPE_1__ dcb; } ;
struct TYPE_4__ {int pfc_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp_port *VAR_3)
{
 VAR_3->dcb.pfc = FUNC_0(sizeof(*VAR_3->dcb.pfc),
      VAR_1);
 if (!VAR_3->dcb.pfc)
  return -VAR_0;

 VAR_3->dcb.pfc->pfc_cap = VAR_2;

 return 0;
}
