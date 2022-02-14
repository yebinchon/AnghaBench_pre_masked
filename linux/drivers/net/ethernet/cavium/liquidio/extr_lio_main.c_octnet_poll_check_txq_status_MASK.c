
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_3__ {int work; } ;
struct TYPE_4__ {TYPE_1__ wk; int wq; } ;
struct lio {TYPE_2__ txq_status_wq; } ;
struct cavium_wk {scalar_t__ ctxptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct lio*) ;
 int FUNC_1 (struct lio*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_1)
{
 struct cavium_wk *VAR_2 = (struct cavium_wk *)VAR_1;
 struct lio *VAR_3 = (struct lio *)VAR_2->ctxptr;

 if (!FUNC_1(VAR_3, VAR_0))
  return;

 FUNC_0(VAR_3);
 FUNC_3(VAR_3->txq_status_wq.wq,
      &VAR_3->txq_status_wq.wk.work, FUNC_2(1));
}
