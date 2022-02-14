
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct napi_struct {int dummy; } ;
struct cpsw_common {int tx_irq_disabled; int * irqs_table; TYPE_2__* wr_regs; TYPE_1__* txv; } ;
struct TYPE_4__ {int tx_en; } ;
struct TYPE_3__ {int ch; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct napi_struct*) ;
 struct cpsw_common* FUNC_3 (struct napi_struct*) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct napi_struct *VAR_0, int VAR_1)
{
 struct cpsw_common *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->txv[0].ch, VAR_1);
 if (VAR_3 < VAR_1) {
  FUNC_2(VAR_0);
  FUNC_4(0xff, &VAR_2->wr_regs->tx_en);
  if (VAR_2->tx_irq_disabled) {
   VAR_2->tx_irq_disabled = 0;
   FUNC_1(VAR_2->irqs_table[1]);
  }
 }

 return VAR_3;
}
