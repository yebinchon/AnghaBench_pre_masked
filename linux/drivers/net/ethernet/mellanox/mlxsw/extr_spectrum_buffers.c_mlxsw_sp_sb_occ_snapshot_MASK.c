
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlxsw_sp_sb_sr_occ_query_cb_ctx {size_t masked_count; size_t local_port_1; } ;
struct mlxsw_sp {TYPE_1__* sb_vals; int * ports; } ;
struct mlxsw_core {int dummy; } ;
typedef int cb_ctx ;
struct TYPE_2__ {int pool_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long*,struct mlxsw_sp_sb_sr_occ_query_cb_ctx*,int) ;
 struct mlxsw_sp* FUNC_5 (struct mlxsw_core*) ;
 size_t FUNC_6 (struct mlxsw_core*) ;
 int FUNC_7 (char*,size_t,int) ;
 int FUNC_8 (char*,size_t,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (char*,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct mlxsw_core*,int ,char*,int *,int ,unsigned long) ;
 int FUNC_14 (struct mlxsw_sp*,size_t,int,int *) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_15(struct mlxsw_core *VAR_10,
        unsigned int VAR_11)
{
 struct mlxsw_sp *VAR_12 = FUNC_5(VAR_10);
 struct mlxsw_sp_sb_sr_occ_query_cb_ctx VAR_13;
 unsigned long VAR_14;
 FUNC_0(VAR_7);
 char *VAR_15;
 u8 VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_15 = FUNC_3(VAR_4, VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_18 = VAR_3;
next_batch:
 VAR_17 = VAR_18;
 VAR_16 = 0;
 FUNC_9(VAR_15, 0);
 for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++)
  FUNC_10(VAR_15, VAR_19, 1);
 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++)
  FUNC_11(VAR_15, VAR_19, 1);
 for (; VAR_18 < FUNC_6(VAR_10); VAR_18++) {
  if (!VAR_12->ports[VAR_18])
   continue;
  if (VAR_18 != VAR_3) {

   FUNC_8(VAR_15,
            VAR_18, 1);
  }
  FUNC_7(VAR_15, VAR_18, 1);
  for (VAR_19 = 0; VAR_19 < VAR_12->sb_vals->pool_count; VAR_19++) {
   VAR_20 = FUNC_14(VAR_12, VAR_18, VAR_19,
             &VAR_7);
   if (VAR_20)
    goto out;
  }
  if (++VAR_16 == VAR_2)
   goto do_query;
 }

do_query:
 VAR_13.masked_count = VAR_16;
 VAR_13.local_port_1 = VAR_17;
 FUNC_4(&VAR_14, &VAR_13, sizeof(VAR_13));
 VAR_20 = FUNC_13(VAR_10, FUNC_1(VAR_9), VAR_15,
        &VAR_7, VAR_8,
        VAR_14);
 if (VAR_20)
  goto out;
 if (VAR_18 < FUNC_6(VAR_10)) {
  VAR_18++;
  goto next_batch;
 }

out:
 VAR_21 = FUNC_12(&VAR_7);
 if (!VAR_20)
  VAR_20 = VAR_21;
 FUNC_2(VAR_15);
 return VAR_20;
}
