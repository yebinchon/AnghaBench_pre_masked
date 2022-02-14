
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int,int,int,int,int) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp*,int) ;
 int FUNC_2 (struct mlxsw_sp*,int) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_1, u8 VAR_2,
          u8 VAR_3, unsigned int VAR_4, u8 VAR_5)
{
 u8 VAR_6 = VAR_0 / VAR_4;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7 = FUNC_0(VAR_1, VAR_2 + VAR_8 * VAR_5,
        1, VAR_3, VAR_6, VAR_8 * VAR_6);
  if (VAR_7)
   goto err_port_create;
 }

 return 0;

err_port_create:
 for (VAR_8--; VAR_8 >= 0; VAR_8--)
  if (FUNC_1(VAR_1, VAR_2 + VAR_8 * VAR_5))
   FUNC_2(VAR_1, VAR_2 + VAR_8 * VAR_5);
 return VAR_7;
}
