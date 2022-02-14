
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct ieee_pfc {int pfc_en; scalar_t__ delay; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,int ,char*) ;
 scalar_t__ FUNC_5 (struct mlxsw_sp*,int,scalar_t__,int,int) ;
 int FUNC_6 (char*,int,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 (struct mlxsw_sp*,int) ;
 scalar_t__ FUNC_8 (struct mlxsw_sp*) ;
 int VAR_3 ;

int FUNC_9(struct mlxsw_sp_port *VAR_4, int VAR_5,
     u8 *VAR_6, bool VAR_7,
     struct ieee_pfc *VAR_8)
{
 struct mlxsw_sp *VAR_9 = VAR_4->mlxsw_sp;
 u8 VAR_10 = !!VAR_8 ? VAR_8->pfc_en : 0;
 u16 VAR_11 = !!VAR_8 ? VAR_8->delay : 0;
 char VAR_12[VAR_2];
 u32 VAR_13 = 0;
 u32 VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_14 = FUNC_8(VAR_9);

 FUNC_2(VAR_12, VAR_4->local_port, 0, 0);
 VAR_17 = FUNC_3(VAR_9->core, FUNC_1(VAR_3), VAR_12);
 if (VAR_17)
  return VAR_17;

 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  bool VAR_18 = 0;
  bool VAR_19 = 0;
  u16 VAR_20;
  u16 VAR_21;
  u16 VAR_22;
  bool VAR_23;

  for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
   if (VAR_6[VAR_16] == VAR_15) {
    VAR_19 = VAR_10 & FUNC_0(VAR_16);
    VAR_18 = 1;
    break;
   }
  }

  if (!VAR_18)
   continue;

  VAR_23 = !(VAR_19 || VAR_7);
  VAR_20 = FUNC_7(VAR_9, VAR_5);
  VAR_21 = FUNC_5(VAR_9, VAR_5, VAR_11,
       VAR_19, VAR_7);
  VAR_22 = VAR_20 + VAR_21;

  VAR_13 += VAR_22;
  if (VAR_13 > VAR_14)
   return -VAR_0;

  FUNC_6(VAR_12, VAR_15, VAR_22,
         VAR_20, VAR_23);
 }

 return FUNC_4(VAR_9->core, FUNC_1(VAR_3), VAR_12);
}
