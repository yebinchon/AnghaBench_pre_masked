
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {int pend_cred; int credits; int cntxt_id; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct adapter *VAR_1, struct sge_fl *VAR_2)
{
 if (VAR_2->pend_cred >= VAR_2->credits / 4) {
  VAR_2->pend_cred = 0;
  FUNC_2();
  FUNC_1(VAR_1, VAR_0, FUNC_0(VAR_2->cntxt_id));
 }
}
