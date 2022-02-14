
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_info {int tx_flush_wq; int lock; int tasklet; scalar_t__ resched; TYPE_1__* pub; int wlc; int isr_lock; } ;
struct TYPE_2__ {scalar_t__ up; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct brcms_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(unsigned long VAR_0)
{
 struct brcms_info *VAR_1;

 VAR_1 = (struct brcms_info *) VAR_0;

 FUNC_3(&VAR_1->lock);


 if (VAR_1->pub->up) {
  if (VAR_1->resched) {
   unsigned long VAR_2;

   FUNC_4(&VAR_1->isr_lock, VAR_2);
   FUNC_1(VAR_1->wlc);
   FUNC_6(&VAR_1->isr_lock, VAR_2);
  }

  VAR_1->resched = FUNC_0(VAR_1->wlc, 1);
 }


 if (!VAR_1->pub->up)
  goto done;


 if (VAR_1->resched)
  FUNC_7(&VAR_1->tasklet);
 else

  FUNC_2(VAR_1);

 done:
 FUNC_5(&VAR_1->lock);
 FUNC_8(&VAR_1->tx_flush_wq);
}
