
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sge_fl {int pend_cred; int * bar2_addr; int bar2_qid; int cntxt_id; } ;
struct TYPE_4__ {int sge_fl_db; } ;
struct TYPE_3__ {int chip; TYPE_2__ arch; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct adapter*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static inline void FUNC_9(struct adapter *VAR_2, struct sge_fl *VAR_3)
{
 if (VAR_3->pend_cred >= 8) {
  u32 VAR_4 = VAR_2->params.arch.sge_fl_db;

  if (FUNC_4(VAR_2->params.chip))
   VAR_4 |= FUNC_2(VAR_3->pend_cred / 8);
  else
   VAR_4 |= FUNC_1(VAR_3->pend_cred / 8);




  FUNC_7();





  if (FUNC_6(VAR_3->bar2_addr == ((void*)0))) {
   FUNC_5(VAR_2, FUNC_0(VAR_0),
         VAR_4 | FUNC_3(VAR_3->cntxt_id));
  } else {
   FUNC_8(VAR_4 | FUNC_3(VAR_3->bar2_qid),
          VAR_3->bar2_addr + VAR_1);




   FUNC_7();
  }
  VAR_3->pend_cred &= 7;
 }
}
