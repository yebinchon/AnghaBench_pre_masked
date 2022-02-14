
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timer; scalar_t__ pci_out_enabled; } ;
struct TYPE_5__ {TYPE_1__ out; } ;
struct qdio_q {unsigned int first_to_check; TYPE_2__ u; TYPE_3__* irq_ptr; int nr_buf_used; } ;
struct TYPE_6__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct qdio_q*,int) ;
 scalar_t__ FUNC_8 (struct qdio_q*) ;
 int FUNC_9 (struct qdio_q*,unsigned int) ;
 int FUNC_10 (struct qdio_q*) ;
 int FUNC_11 (struct qdio_q*,int ) ;
 scalar_t__ FUNC_12 (struct qdio_q*) ;
 int VAR_4 ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct qdio_q *VAR_5)
{
 unsigned int VAR_6 = VAR_5->first_to_check;
 int VAR_7;

 FUNC_11(VAR_5, VAR_4);
 FUNC_0(FUNC_2(&VAR_5->nr_buf_used) < 0);

 VAR_7 = FUNC_9(VAR_5, VAR_6);
 if (VAR_7) {
  VAR_5->first_to_check = FUNC_1(VAR_6, VAR_7);
  FUNC_7(VAR_5, VAR_7);
 }

 if (FUNC_12(VAR_5) == VAR_2 && !FUNC_6(VAR_5->irq_ptr) &&
     !FUNC_8(VAR_5))
  goto sched;

 if (VAR_5->u.out.pci_out_enabled)
  return;






 if (FUNC_8(VAR_5))
  FUNC_3(&VAR_5->u.out.timer);
 else
  if (!FUNC_13(&VAR_5->u.out.timer) &&
      FUNC_4(VAR_5->irq_ptr->state == VAR_1))
   FUNC_5(&VAR_5->u.out.timer, VAR_3 + 10 * VAR_0);
 return;

sched:
 FUNC_10(VAR_5);
}
