
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sge_txq {scalar_t__ db_pidx; scalar_t__ size; int db_lock; scalar_t__ db_pidx_inc; scalar_t__ db_disabled; scalar_t__ cntxt_id; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (struct adapter*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct adapter*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct adapter*,int ,int) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct adapter *VAR_1, struct sge_txq *VAR_2)
{
 u16 VAR_3, VAR_4;
 int VAR_5;

 FUNC_7(&VAR_2->db_lock);
 VAR_5 = FUNC_6(VAR_1, (u16)VAR_2->cntxt_id, &VAR_3, &VAR_4);
 if (VAR_5)
  goto out;
 if (VAR_2->db_pidx != VAR_3) {
  u16 VAR_6;
  u32 VAR_7;

  if (VAR_2->db_pidx >= VAR_3)
   VAR_6 = VAR_2->db_pidx - VAR_3;
  else
   VAR_6 = VAR_2->size - VAR_3 + VAR_2->db_pidx;

  if (FUNC_5(VAR_1->params.chip))
   VAR_7 = FUNC_3(VAR_6);
  else
   VAR_7 = FUNC_2(VAR_6);
  FUNC_10();
  FUNC_9(VAR_1, FUNC_1(VAR_0),
        FUNC_4(VAR_2->cntxt_id) | VAR_7);
 }
out:
 VAR_2->db_disabled = 0;
 VAR_2->db_pidx_inc = 0;
 FUNC_8(&VAR_2->db_lock);
 if (VAR_5)
  FUNC_0(VAR_1, "DB drop recovery failed.\n");
}
