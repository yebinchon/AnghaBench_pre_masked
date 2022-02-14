
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__* mapping; } ;
struct mlxsw_core {TYPE_1__ lag; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_core*,int ) ;
 int FUNC_1 (struct mlxsw_core*,int ,int) ;

void FUNC_2(struct mlxsw_core *VAR_1,
      u16 VAR_2, u8 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1, VAR_0); VAR_4++) {
  int VAR_5 = FUNC_1(VAR_1,
        VAR_2, VAR_4);

  if (VAR_1->lag.mapping[VAR_5] == VAR_3)
   VAR_1->lag.mapping[VAR_5] = 0;
 }
}
