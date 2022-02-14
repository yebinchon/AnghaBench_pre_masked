
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mlxsw_sp {scalar_t__* port_to_module; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,size_t,int,size_t,size_t,int ) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp *VAR_1,
      u8 VAR_2, unsigned int VAR_3)
{
 u8 VAR_4, VAR_5, VAR_6 = VAR_0;
 int VAR_7;




 VAR_3 = VAR_3 / 2;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_4 = VAR_2 + VAR_7 * 2;
  if (VAR_1->port_to_module[VAR_4] < 0)
   continue;
  VAR_5 = VAR_1->port_to_module[VAR_4];

  FUNC_0(VAR_1, VAR_4, 0, VAR_5,
         VAR_6, 0);
 }
}
