
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {int db_lock; scalar_t__ db_disabled; scalar_t__ db_pidx_inc; int cntxt_id; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adapter*,int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct adapter *VAR_1, struct sge_txq *VAR_2)
{
 FUNC_3(&VAR_2->db_lock);
 if (VAR_2->db_pidx_inc) {



  FUNC_6();
  FUNC_5(VAR_1, FUNC_0(VAR_0),
        FUNC_2(VAR_2->cntxt_id) | FUNC_1(VAR_2->db_pidx_inc));
  VAR_2->db_pidx_inc = 0;
 }
 VAR_2->db_disabled = 0;
 FUNC_4(&VAR_2->db_lock);
}
