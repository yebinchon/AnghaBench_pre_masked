
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int,int *) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(void *VAR_3, u32 *VAR_4,
        u8 VAR_5)
{
 struct mlxsw_sp *VAR_6 = VAR_3;
 char VAR_7[VAR_0];
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6, VAR_1,
      1, &VAR_8);
 if (VAR_9)
  return VAR_9;
 FUNC_1(VAR_7, VAR_8, VAR_5);
 VAR_9 = FUNC_2(VAR_6->core, FUNC_0(VAR_2), VAR_7);
 if (VAR_9)
  goto err_ppbs_write;
 *VAR_4 = VAR_8;
 return 0;

err_ppbs_write:
 FUNC_4(VAR_6, VAR_1,
      1, VAR_8);
 return VAR_9;
}
