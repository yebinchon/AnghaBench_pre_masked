
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ irq; } ;
struct ace_private {int regs; int trace_buf; int skb; int info_dma; scalar_t__ info; int pdev; } ;
struct ace_info {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__,struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ace_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct ace_private *VAR_1;

 VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_0);

 if (VAR_1->info)
  FUNC_5(VAR_1->pdev, sizeof(struct ace_info),
        VAR_1->info, VAR_1->info_dma);
 FUNC_3(VAR_1->skb);
 FUNC_3(VAR_1->trace_buf);

 if (VAR_0->irq)
  FUNC_1(VAR_0->irq, VAR_0);

 FUNC_2(VAR_1->regs);
}
