
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_eint {int irq; int domain; TYPE_1__* hw; TYPE_2__* dev; void* dual_edge; void* cur_mask; void* wake_mask; int * regs; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {int ports; int ap_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_2__*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,struct mtk_eint*) ;
 int FUNC_4 (int,int *,int ) ;
 int FUNC_5 (int,struct mtk_eint*) ;
 int FUNC_6 (struct mtk_eint*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_7(struct mtk_eint *VAR_7)
{
 int VAR_8;


 if (!VAR_7->regs)
  VAR_7->regs = &VAR_6;

 VAR_7->wake_mask = FUNC_0(VAR_7->dev, VAR_7->hw->ports,
           sizeof(*VAR_7->wake_mask), VAR_1);
 if (!VAR_7->wake_mask)
  return -VAR_0;

 VAR_7->cur_mask = FUNC_0(VAR_7->dev, VAR_7->hw->ports,
          sizeof(*VAR_7->cur_mask), VAR_1);
 if (!VAR_7->cur_mask)
  return -VAR_0;

 VAR_7->dual_edge = FUNC_0(VAR_7->dev, VAR_7->hw->ap_num,
           sizeof(int), VAR_1);
 if (!VAR_7->dual_edge)
  return -VAR_0;

 VAR_7->domain = FUNC_2(VAR_7->dev->of_node,
          VAR_7->hw->ap_num,
          &VAR_3, ((void*)0));
 if (!VAR_7->domain)
  return -VAR_0;

 FUNC_6(VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_7->hw->ap_num; VAR_8++) {
  int VAR_9 = FUNC_1(VAR_7->domain, VAR_8);

  FUNC_4(VAR_9, &VAR_4,
      VAR_2);
  FUNC_5(VAR_9, VAR_7);
 }

 FUNC_3(VAR_7->irq, VAR_5,
      VAR_7);

 return 0;
}
