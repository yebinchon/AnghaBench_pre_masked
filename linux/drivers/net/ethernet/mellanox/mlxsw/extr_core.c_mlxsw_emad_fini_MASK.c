
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int use_emad; } ;
struct mlxsw_core {int emad_wq; TYPE_2__ emad; TYPE_1__* bus; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_core*,int *,struct mlxsw_core*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct mlxsw_core *VAR_2)
{

 if (!(VAR_2->bus->features & VAR_0))
  return;

 VAR_2->emad.use_emad = 0;
 FUNC_1(VAR_2, &VAR_1,
       VAR_2);
 FUNC_0(VAR_2->emad_wq);
}
