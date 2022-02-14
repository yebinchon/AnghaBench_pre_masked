
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cudbg_pbt_tables {int * pbt_data; int * lrf_table; int * pbt_static; int * pbt_dynamic; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_err; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,scalar_t__,int,int *) ;

int FUNC_4(struct cudbg_init *VAR_7,
        struct cudbg_buffer *VAR_8,
        struct cudbg_error *VAR_9)
{
 struct adapter *VAR_10 = VAR_7->adap;
 struct cudbg_buffer VAR_11 = { 0 };
 struct cudbg_pbt_tables *VAR_12;
 int VAR_13, VAR_14;
 u32 VAR_15;

 VAR_14 = FUNC_0(VAR_7, VAR_8,
       sizeof(struct cudbg_pbt_tables),
       &VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_12 = (struct cudbg_pbt_tables *)VAR_11.data;

 VAR_15 = VAR_0;
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_14 = FUNC_3(VAR_10, VAR_15 + (VAR_13 * 4), 1,
     &VAR_12->pbt_dynamic[VAR_13]);
  if (VAR_14) {
   VAR_9->sys_err = VAR_14;
   FUNC_1(VAR_7, &VAR_11);
   return VAR_14;
  }
 }



 VAR_15 = VAR_0 + (1 << 6);
 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_14 = FUNC_3(VAR_10, VAR_15 + (VAR_13 * 4), 1,
     &VAR_12->pbt_static[VAR_13]);
  if (VAR_14) {
   VAR_9->sys_err = VAR_14;
   FUNC_1(VAR_7, &VAR_11);
   return VAR_14;
  }
 }


 VAR_15 = VAR_2;
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_14 = FUNC_3(VAR_10, VAR_15 + (VAR_13 * 4), 1,
     &VAR_12->lrf_table[VAR_13]);
  if (VAR_14) {
   VAR_9->sys_err = VAR_14;
   FUNC_1(VAR_7, &VAR_11);
   return VAR_14;
  }
 }


 VAR_15 = VAR_1;
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_14 = FUNC_3(VAR_10, VAR_15 + (VAR_13 * 4), 1,
     &VAR_12->pbt_data[VAR_13]);
  if (VAR_14) {
   VAR_9->sys_err = VAR_14;
   FUNC_1(VAR_7, &VAR_11);
   return VAR_14;
  }
 }
 return FUNC_2(VAR_7, &VAR_11, VAR_8);
}
