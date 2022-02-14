
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_tid_data {int dbig_cmd; int dbig_conf; int dbig_rsp_stat; int tid; void** data; } ;
struct cudbg_init {struct adapter* adap; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_3 (struct adapter*,scalar_t__) ;
 int FUNC_4 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_10, u32 VAR_11,
     struct cudbg_tid_data *VAR_12)
{
 struct adapter *VAR_13 = VAR_10->adap;
 int VAR_14, VAR_15 = 8;
 u32 VAR_16;


 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
  FUNC_4(VAR_13, VAR_4 + (VAR_14 << 2), 0);


 VAR_16 = FUNC_1(4) | FUNC_2(VAR_11);
 FUNC_4(VAR_13, VAR_5, VAR_16);
 VAR_12->dbig_cmd = VAR_16;

 VAR_16 = VAR_2 | FUNC_0(1);
 FUNC_4(VAR_13, VAR_3, VAR_16);
 VAR_12->dbig_conf = VAR_16;


 VAR_16 = 1;
 while (VAR_16) {
  VAR_16 = FUNC_3(VAR_13, VAR_3);
  VAR_16 = VAR_16 & VAR_1;
  VAR_15--;
  if (!VAR_15)
   return VAR_0;
 }


 VAR_16 = FUNC_3(VAR_13, VAR_7);
 VAR_12->dbig_rsp_stat = VAR_16;
 if (!(VAR_16 & 1))
  return VAR_0;


 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
  VAR_12->data[VAR_14] = FUNC_3(VAR_13,
      VAR_6 +
      (VAR_14 << 2));
 VAR_12->tid = VAR_11;
 return 0;
}
