
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlxsw_sp_sb_sr_occ_query_cb_ctx {size_t local_port_1; size_t masked_count; } ;
struct TYPE_2__ {int max; int cur; } ;
struct mlxsw_sp_sb_cm {TYPE_1__ occ; } ;
struct mlxsw_sp {int * ports; } ;
struct mlxsw_core {int dummy; } ;
typedef int cb_ctx ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlxsw_sp_sb_sr_occ_query_cb_ctx*,unsigned long*,int) ;
 struct mlxsw_sp* FUNC_1 (struct mlxsw_core*) ;
 size_t FUNC_2 (struct mlxsw_core*) ;
 int FUNC_3 (char*,int ,int *,int *) ;
 struct mlxsw_sp_sb_cm* FUNC_4 (struct mlxsw_sp*,size_t,int,int ) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_core *VAR_5,
     char *VAR_6, size_t VAR_7,
     unsigned long VAR_8)
{
 struct mlxsw_sp *VAR_9 = FUNC_1(VAR_5);
 struct mlxsw_sp_sb_sr_occ_query_cb_ctx VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 int VAR_13 = 0;
 struct mlxsw_sp_sb_cm *VAR_14;
 int VAR_15;

 FUNC_0(&VAR_10, &VAR_8, sizeof(VAR_10));

 VAR_11 = 0;
 for (VAR_12 = VAR_10.local_port_1;
      VAR_12 < FUNC_2(VAR_5); VAR_12++) {
  if (!VAR_9->ports[VAR_12])
   continue;
  if (VAR_12 == VAR_0) {

   VAR_11++;
   continue;
  }
  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   VAR_14 = FUNC_4(VAR_9, VAR_12, VAR_15,
      VAR_2);
   FUNC_3(VAR_6, VAR_13++,
        &VAR_14->occ.cur, &VAR_14->occ.max);
  }
  if (++VAR_11 == VAR_10.masked_count)
   break;
 }
 VAR_11 = 0;
 for (VAR_12 = VAR_10.local_port_1;
      VAR_12 < FUNC_2(VAR_5); VAR_12++) {
  if (!VAR_9->ports[VAR_12])
   continue;
  for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
   VAR_14 = FUNC_4(VAR_9, VAR_12, VAR_15,
      VAR_1);
   FUNC_3(VAR_6, VAR_13++,
        &VAR_14->occ.cur, &VAR_14->occ.max);
  }
  if (++VAR_11 == VAR_10.masked_count)
   break;
 }
}
