
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_sp_vr {int id; } ;
struct mlxsw_sp {int core; TYPE_1__* router; } ;
typedef enum mlxsw_reg_ralxx_protocol { ____Placeholder_mlxsw_reg_ralxx_protocol } mlxsw_reg_ralxx_protocol ;
struct TYPE_2__ {struct mlxsw_sp_vr* vrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int,int,int ) ;
 int FUNC_4 (char*,int ,int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,int ,int ,int ) ;
 int FUNC_7 (int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp *VAR_10,
         enum mlxsw_reg_ralxx_protocol VAR_11,
         u8 VAR_12)
{
 char VAR_13[VAR_2];
 char VAR_14[VAR_1];
 int VAR_15, VAR_16;

 FUNC_3(VAR_13, 1, VAR_11, VAR_12);
 VAR_16 = FUNC_7(VAR_10->core, FUNC_1(VAR_7), VAR_13);
 if (VAR_16)
  return VAR_16;

 FUNC_2(VAR_14, 0xff, VAR_12);
 VAR_16 = FUNC_7(VAR_10->core, FUNC_1(VAR_6), VAR_14);
 if (VAR_16)
  return VAR_16;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_10->core, VAR_0); VAR_15++) {
  struct mlxsw_sp_vr *VAR_17 = &VAR_10->router->vrs[VAR_15];
  char VAR_18[VAR_3];
  char VAR_19[VAR_4];

  FUNC_4(VAR_18, VAR_17->id, VAR_11, VAR_12);
  VAR_16 = FUNC_7(VAR_10->core, FUNC_1(VAR_8),
          VAR_18);
  if (VAR_16)
   return VAR_16;

  FUNC_6(VAR_19, VAR_11,
         VAR_5, VAR_17->id, 0);
  FUNC_5(VAR_19);
  VAR_16 = FUNC_7(VAR_10->core, FUNC_1(VAR_9),
          VAR_19);
  if (VAR_16)
   return VAR_16;
 }

 return 0;
}
