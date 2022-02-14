
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct switchdev_trans {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct mlxsw_sp*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp_port *VAR_3,
         struct switchdev_trans *VAR_4,
         unsigned long VAR_5)
{
 struct mlxsw_sp *VAR_6 = VAR_3->mlxsw_sp;
 unsigned long VAR_7 = FUNC_0(VAR_5);
 u32 VAR_8 = FUNC_1(VAR_7) / 1000;

 if (FUNC_3(VAR_4)) {
  if (VAR_8 < VAR_2 ||
      VAR_8 > VAR_1)
   return -VAR_0;
  else
   return 0;
 }

 return FUNC_2(VAR_6, VAR_8);
}
