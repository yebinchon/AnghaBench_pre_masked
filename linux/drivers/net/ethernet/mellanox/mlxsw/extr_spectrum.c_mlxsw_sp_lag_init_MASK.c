
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_upper {int dummy; } ;
struct mlxsw_sp {int lags; int core; int base_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp *VAR_17)
{
 char VAR_18[VAR_14];
 u32 VAR_19;
 int VAR_20;

 VAR_19 = FUNC_3(VAR_17->base_mac, sizeof(VAR_17->base_mac),
       VAR_15);
 FUNC_5(VAR_18, VAR_11 |
         VAR_6 |
         VAR_8 |
         VAR_13 |
         VAR_10 |
         VAR_5 |
         VAR_12 |
         VAR_7 |
         VAR_9, VAR_19);
 VAR_20 = FUNC_6(VAR_17->core, FUNC_2(VAR_16), VAR_18);
 if (VAR_20)
  return VAR_20;

 if (!FUNC_1(VAR_17->core, VAR_3) ||
     !FUNC_1(VAR_17->core, VAR_4))
  return -VAR_0;

 VAR_17->lags = FUNC_4(FUNC_0(VAR_17->core, VAR_3),
     sizeof(struct mlxsw_sp_upper),
     VAR_2);
 if (!VAR_17->lags)
  return -VAR_1;

 return 0;
}
