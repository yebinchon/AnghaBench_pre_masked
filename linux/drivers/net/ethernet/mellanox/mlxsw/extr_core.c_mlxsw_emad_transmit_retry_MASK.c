
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_reg_trans {scalar_t__ retries; int core; } ;
struct mlxsw_core {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlxsw_reg_trans*,int) ;
 int FUNC_1 (int ,struct mlxsw_reg_trans*) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_core *VAR_2,
          struct mlxsw_reg_trans *VAR_3)
{
 int VAR_4;

 if (VAR_3->retries < VAR_1) {
  VAR_3->retries++;
  VAR_4 = FUNC_1(VAR_3->core, VAR_3);
  if (VAR_4 == 0)
   return;
 } else {
  VAR_4 = -VAR_0;
 }
 FUNC_0(VAR_3, VAR_4);
}
