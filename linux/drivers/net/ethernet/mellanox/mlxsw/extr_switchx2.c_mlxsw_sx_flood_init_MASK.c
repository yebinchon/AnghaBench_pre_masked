
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sx {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sx *VAR_16)
{
 char VAR_17[VAR_4];
 char VAR_18[VAR_12];
 char *VAR_19;
 int VAR_20;


 VAR_19 = FUNC_2(VAR_11, VAR_1);
 if (!VAR_19)
  return -VAR_0;
 FUNC_4(VAR_19, 0, 0, VAR_5, 0,
       VAR_2, 1);
 VAR_20 = FUNC_6(VAR_16->core, FUNC_0(VAR_14), VAR_19);
 FUNC_1(VAR_19);
 if (VAR_20)
  return VAR_20;


 FUNC_3(VAR_17,
       VAR_7,
       VAR_3,
       VAR_5,
       0);
 VAR_20 = FUNC_6(VAR_16->core, FUNC_0(VAR_13), VAR_17);
 if (VAR_20)
  return VAR_20;

 FUNC_3(VAR_17,
       VAR_6,
       VAR_3,
       VAR_5,
       0);
 VAR_20 = FUNC_6(VAR_16->core, FUNC_0(VAR_13), VAR_17);
 if (VAR_20)
  return VAR_20;

 FUNC_3(VAR_17,
       VAR_10,
       VAR_3,
       VAR_5,
       0);
 VAR_20 = FUNC_6(VAR_16->core, FUNC_0(VAR_13), VAR_17);
 if (VAR_20)
  return VAR_20;

 FUNC_3(VAR_17,
       VAR_9,
       VAR_3,
       VAR_5,
       0);
 VAR_20 = FUNC_6(VAR_16->core, FUNC_0(VAR_13), VAR_17);
 if (VAR_20)
  return VAR_20;

 FUNC_3(VAR_17,
       VAR_8,
       VAR_3,
       VAR_5,
       0);
 VAR_20 = FUNC_6(VAR_16->core, FUNC_0(VAR_13), VAR_17);
 if (VAR_20)
  return VAR_20;

 FUNC_5(VAR_18, 1);
 return FUNC_6(VAR_16->core, FUNC_0(VAR_15), VAR_18);
}
