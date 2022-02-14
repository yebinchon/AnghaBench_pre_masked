
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int,char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int,int *) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(void *VAR_3, u32 *VAR_4,
         char *VAR_5, bool VAR_6, bool VAR_7)
{
 struct mlxsw_sp *VAR_8 = VAR_3;
 char VAR_9[VAR_0];
 u32 VAR_10;
 int VAR_11;




 if (VAR_6)
  return 0;

 VAR_11 = FUNC_3(VAR_8, VAR_1,
      1, &VAR_10);
 if (VAR_11)
  return VAR_11;
 FUNC_1(VAR_9, VAR_10, VAR_7, VAR_5);
 VAR_11 = FUNC_2(VAR_8->core, FUNC_0(VAR_2), VAR_9);
 if (VAR_11)
  goto err_pefa_write;
 *VAR_4 = VAR_10;
 return 0;

err_pefa_write:
 FUNC_4(VAR_8, VAR_1,
      1, VAR_10);
 return VAR_11;
}
