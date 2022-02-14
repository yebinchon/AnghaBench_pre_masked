
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ egr_types; scalar_t__ ing_types; } ;
struct mlxsw_sp_port {TYPE_1__ ptp; } ;



__attribute__((used)) static bool FUNC_0(struct mlxsw_sp_port *VAR_0)
{
 return VAR_0->ptp.ing_types || VAR_0->ptp.egr_types;
}
