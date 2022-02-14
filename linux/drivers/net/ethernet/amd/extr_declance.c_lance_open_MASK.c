
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {scalar_t__ irq; int name; scalar_t__ mem_start; } ;
struct lance_regs {int rdp; int rap; } ;
struct lance_private {scalar_t__ dma_irq; int type; struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int * VAR_6 ;
 int FUNC_1 (scalar_t__,struct net_device*) ;
 int FUNC_2 (struct lance_private*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,int) ;
 int VAR_8 ;
 int FUNC_5 (struct net_device*) ;
 int VAR_9 ;
 scalar_t__* FUNC_6 (int volatile*,int ,int ) ;
 int FUNC_7 (struct lance_private*) ;
 int VAR_10 ;
 struct lance_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int ,char*,struct net_device*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_11)
{
 volatile u16 *VAR_12 = (volatile u16 *)VAR_11->mem_start;
 struct lance_private *VAR_13 = FUNC_8(VAR_11);
 volatile struct lance_regs *VAR_14 = VAR_13->ll;
 int VAR_15 = 0;


 FUNC_14(&VAR_14->rap, VAR_5);
 FUNC_14(&VAR_14->rdp, VAR_4);







 *FUNC_6(VAR_12, VAR_10, VAR_13->type) = 0;
 *FUNC_6(VAR_12, VAR_6[0], VAR_13->type) = 0;
 *FUNC_6(VAR_12, VAR_6[1], VAR_13->type) = 0;
 *FUNC_6(VAR_12, VAR_6[2], VAR_13->type) = 0;
 *FUNC_6(VAR_12, VAR_6[3], VAR_13->type) = 0;

 FUNC_5(VAR_11);
 FUNC_7(VAR_13);

 FUNC_9(VAR_11);


 if (FUNC_11(VAR_11->irq, VAR_9, 0, "lance", VAR_11)) {
  FUNC_10("%s: Can't get IRQ %d\n", VAR_11->name, VAR_11->irq);
  return -VAR_0;
 }
 if (VAR_13->dma_irq >= 0) {
  unsigned long VAR_16;

  if (FUNC_11(VAR_13->dma_irq, VAR_8, VAR_3,
    "lance error", VAR_11)) {
   FUNC_1(VAR_11->irq, VAR_11);
   FUNC_10("%s: Can't get DMA IRQ %d\n", VAR_11->name,
    VAR_13->dma_irq);
   return -VAR_0;
  }

  FUNC_12(&VAR_7, VAR_16);

  FUNC_0();

  FUNC_4(VAR_1,
        FUNC_3(VAR_1) | VAR_2);

  FUNC_0();
  FUNC_13(&VAR_7, VAR_16);
 }

 VAR_15 = FUNC_2(VAR_13);
 return VAR_15;
}
