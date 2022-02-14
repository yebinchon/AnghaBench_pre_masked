
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sge_fl {int pend_cred; int * bar2_addr; int bar2_qid; int cntxt_id; } ;
struct TYPE_3__ {int sge_fl_db; } ;
struct TYPE_4__ {int chip; TYPE_1__ arch; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static inline void FUNC_8(struct adapter *VAR_4, struct sge_fl *VAR_5)
{
 u32 VAR_6 = VAR_4->params.arch.sge_fl_db;





 if (VAR_5->pend_cred >= VAR_0) {
  if (FUNC_3(VAR_4->params.chip))
   VAR_6 |= FUNC_1(VAR_5->pend_cred / VAR_0);
  else
   VAR_6 |= FUNC_0(VAR_5->pend_cred / VAR_0);




  FUNC_6();





  if (FUNC_5(VAR_5->bar2_addr == ((void*)0))) {
   FUNC_4(VAR_4,
         VAR_3 + VAR_2,
         FUNC_2(VAR_5->cntxt_id) | VAR_6);
  } else {
   FUNC_7(VAR_6 | FUNC_2(VAR_5->bar2_qid),
          VAR_5->bar2_addr + VAR_1);




   FUNC_6();
  }
  VAR_5->pend_cred %= VAR_0;
 }
}
