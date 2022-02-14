
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ena_adapter {TYPE_1__* irq_tbl; int pdev; } ;
struct TYPE_2__ {int affinity_hint_mask; int cpu; int vector; struct ena_adapter* data; int handler; int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,size_t) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,char*) ;

__attribute__((used)) static void FUNC_5(struct ena_adapter *VAR_4)
{
 u32 VAR_5;

 FUNC_4(VAR_4->irq_tbl[VAR_1].name,
   VAR_0, "ena-mgmnt@pci:%s",
   FUNC_3(VAR_4->pdev));
 VAR_4->irq_tbl[VAR_1].handler =
  VAR_3;
 VAR_4->irq_tbl[VAR_1].data = VAR_4;
 VAR_4->irq_tbl[VAR_1].vector =
  FUNC_2(VAR_4->pdev, VAR_1);
 VAR_5 = FUNC_0(VAR_2);
 VAR_4->irq_tbl[VAR_1].cpu = VAR_5;
 FUNC_1(VAR_5,
   &VAR_4->irq_tbl[VAR_1].affinity_hint_mask);
}
