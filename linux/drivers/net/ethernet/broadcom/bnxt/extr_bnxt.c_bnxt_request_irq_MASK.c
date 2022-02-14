
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cpu_rmap {int dummy; } ;
struct bnxt_irq {int vector; int requested; int have_cpumask; int cpu_mask; int name; int handler; } ;
struct bnxt {int flags; int cp_nr_rings; TYPE_3__* dev; TYPE_1__* pdev; TYPE_2__** bnapi; struct bnxt_irq* irq_tbl; } ;
struct TYPE_7__ {struct cpu_rmap* rx_cpu_rmap; } ;
struct TYPE_6__ {scalar_t__ rx_ring; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct bnxt*,int) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cpu_rmap*,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_3__*,char*,int) ;
 int FUNC_8 (TYPE_3__*,char*,int) ;
 int FUNC_9 (int,int ,unsigned long,int ,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct bnxt *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 unsigned long VAR_7 = 0;




 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6) {
  FUNC_7(VAR_3->dev, "bnxt_setup_int_mode err: %x\n",
      VAR_6);
  return VAR_6;
 }



 if (!(VAR_3->flags & VAR_0))
  VAR_7 = VAR_2;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_3->cp_nr_rings; VAR_4++) {
  int VAR_8 = FUNC_0(VAR_3, VAR_4);
  struct bnxt_irq *VAR_9 = &VAR_3->irq_tbl[VAR_8];
  VAR_6 = FUNC_9(VAR_9->vector, VAR_9->handler, VAR_7, VAR_9->name,
     VAR_3->bnapi[VAR_4]);
  if (VAR_6)
   break;

  VAR_9->requested = 1;

  if (FUNC_10(&VAR_9->cpu_mask, VAR_1)) {
   int VAR_10 = FUNC_4(&VAR_3->pdev->dev);

   VAR_9->have_cpumask = 1;
   FUNC_3(FUNC_2(VAR_4, VAR_10),
     VAR_9->cpu_mask);
   VAR_6 = FUNC_6(VAR_9->vector, VAR_9->cpu_mask);
   if (VAR_6) {
    FUNC_8(VAR_3->dev,
         "Set affinity failed, IRQ = %d\n",
         VAR_9->vector);
    break;
   }
  }
 }
 return VAR_6;
}
