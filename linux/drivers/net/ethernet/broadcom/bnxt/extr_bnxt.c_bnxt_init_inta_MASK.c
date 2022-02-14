
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnxt_irq {int dummy; } ;
struct bnxt {int total_irqs; int rx_nr_rings; int tx_nr_rings; int cp_nr_rings; TYPE_1__* pdev; TYPE_2__* irq_tbl; int flags; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_3)
{
 VAR_3->irq_tbl = FUNC_0(1, sizeof(struct bnxt_irq), VAR_2);
 if (!VAR_3->irq_tbl)
  return -VAR_1;

 VAR_3->total_irqs = 1;
 VAR_3->rx_nr_rings = 1;
 VAR_3->tx_nr_rings = 1;
 VAR_3->cp_nr_rings = 1;
 VAR_3->flags |= VAR_0;
 VAR_3->irq_tbl[0].vector = VAR_3->pdev->irq;
 return 0;
}
