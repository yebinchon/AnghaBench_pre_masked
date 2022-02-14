
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sib {int core; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,struct mlxsw_sib*) ;
 int FUNC_2 (int ,int *,struct mlxsw_sib*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sib *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = FUNC_1(VAR_1->core,
            &VAR_0[VAR_2],
            VAR_1);
  if (VAR_3)
   goto err_rx_listener_register;
 }

 return 0;

err_rx_listener_register:
 for (VAR_2--; VAR_2 >= 0; VAR_2--) {
  FUNC_2(VAR_1->core,
        &VAR_0[VAR_2],
        VAR_1);
 }

 return VAR_3;
}
