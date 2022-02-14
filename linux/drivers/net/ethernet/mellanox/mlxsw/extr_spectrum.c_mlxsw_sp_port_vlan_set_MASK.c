
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_port*,int,int,int,int) ;
 int FUNC_1 (int,int) ;

int FUNC_2(struct mlxsw_sp_port *VAR_1, u16 VAR_2,
      u16 VAR_3, bool VAR_4, bool VAR_5)
{
 u16 VAR_6, VAR_7;
 int VAR_8;

 for (VAR_6 = VAR_2; VAR_6 <= VAR_3;
      VAR_6 += VAR_0) {
  VAR_7 = FUNC_1((u16) (VAR_6 + VAR_0 - 1),
       VAR_3);

  VAR_8 = FUNC_0(VAR_1, VAR_6, VAR_7,
            VAR_4, VAR_5);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
