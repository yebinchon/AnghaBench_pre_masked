
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlxsw_sp {TYPE_1__* sb_vals; int * ports; } ;
struct mlxsw_core {int dummy; } ;
struct TYPE_2__ {int pool_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 struct mlxsw_sp* FUNC_4 (struct mlxsw_core*) ;
 size_t FUNC_5 (struct mlxsw_core*) ;
 int FUNC_6 (char*,size_t,int) ;
 int FUNC_7 (char*,size_t,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct mlxsw_core*,int ,char*,int *,int *,int ) ;
 int FUNC_13 (struct mlxsw_sp*,size_t,int,int *) ;
 int VAR_8 ;

int FUNC_14(struct mlxsw_core *VAR_9,
         unsigned int VAR_10)
{
 struct mlxsw_sp *VAR_11 = FUNC_4(VAR_9);
 FUNC_0(VAR_7);
 char *VAR_12;
 unsigned int VAR_13;
 u8 VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_12 = FUNC_3(VAR_4, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_14 = VAR_3;
next_batch:
 VAR_13 = 0;
 FUNC_8(VAR_12, 1);
 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++)
  FUNC_9(VAR_12, VAR_15, 1);
 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++)
  FUNC_10(VAR_12, VAR_15, 1);
 for (; VAR_14 < FUNC_5(VAR_9); VAR_14++) {
  if (!VAR_11->ports[VAR_14])
   continue;
  if (VAR_14 != VAR_3) {

   FUNC_7(VAR_12,
            VAR_14, 1);
  }
  FUNC_6(VAR_12, VAR_14, 1);
  for (VAR_15 = 0; VAR_15 < VAR_11->sb_vals->pool_count; VAR_15++) {
   VAR_16 = FUNC_13(VAR_11, VAR_14, VAR_15,
             &VAR_7);
   if (VAR_16)
    goto out;
  }
  if (++VAR_13 == VAR_2)
   goto do_query;
 }

do_query:
 VAR_16 = FUNC_12(VAR_9, FUNC_1(VAR_8), VAR_12,
        &VAR_7, ((void*)0), 0);
 if (VAR_16)
  goto out;
 if (VAR_14 < FUNC_5(VAR_9)) {
  VAR_14++;
  goto next_batch;
 }

out:
 VAR_17 = FUNC_11(&VAR_7);
 if (!VAR_16)
  VAR_16 = VAR_17;
 FUNC_2(VAR_12);
 return VAR_16;
}
