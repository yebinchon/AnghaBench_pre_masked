
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sx {int core; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *,struct mlxsw_sx*) ;
 int FUNC_3 (int ,int *,struct mlxsw_sx*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,char*) ;
 int * VAR_9 ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sx *VAR_10)
{
 char VAR_11[VAR_3];
 int VAR_12;
 int VAR_13;

 FUNC_5(VAR_11, VAR_7,
       VAR_2,
       VAR_0,
       VAR_1);
 FUNC_4(VAR_11,
       VAR_5);

 VAR_13 = FUNC_6(VAR_10->core, FUNC_1(VAR_8), VAR_11);
 if (VAR_13)
  return VAR_13;

 FUNC_5(VAR_11, VAR_6,
       VAR_2,
       VAR_0,
       VAR_1);
 FUNC_4(VAR_11,
     VAR_4);

 VAR_13 = FUNC_6(VAR_10->core, FUNC_1(VAR_8), VAR_11);
 if (VAR_13)
  return VAR_13;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9); VAR_12++) {
  VAR_13 = FUNC_2(VAR_10->core,
            &VAR_9[VAR_12],
            VAR_10);
  if (VAR_13)
   goto err_listener_register;

 }
 return 0;

err_listener_register:
 for (VAR_12--; VAR_12 >= 0; VAR_12--) {
  FUNC_3(VAR_10->core,
        &VAR_9[VAR_12],
        VAR_10);
 }
 return VAR_13;
}
