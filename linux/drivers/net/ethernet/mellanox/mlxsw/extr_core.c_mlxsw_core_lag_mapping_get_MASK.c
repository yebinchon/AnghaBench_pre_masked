
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int * mapping; } ;
struct mlxsw_core {TYPE_1__ lag; } ;


 int FUNC_0 (struct mlxsw_core*,int ,int ) ;

u8 FUNC_1(struct mlxsw_core *VAR_0,
         u16 VAR_1, u8 VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0,
       VAR_1, VAR_2);

 return VAR_0->lag.mapping[VAR_3];
}
