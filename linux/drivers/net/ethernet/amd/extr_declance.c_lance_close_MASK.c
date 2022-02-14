
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ irq; } ;
struct lance_regs {int rdp; int rap; } ;
struct lance_private {scalar_t__ dma_irq; int multicast_timer; struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,struct net_device*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int) ;
 struct lance_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
 struct lance_private *VAR_6 = FUNC_6(VAR_5);
 volatile struct lance_regs *VAR_7 = VAR_6->ll;

 FUNC_7(VAR_5);
 FUNC_0(&VAR_6->multicast_timer);


 FUNC_10(&VAR_7->rap, VAR_3);
 FUNC_10(&VAR_7->rdp, VAR_2);

 if (VAR_6->dma_irq >= 0) {
  unsigned long VAR_8;

  FUNC_8(&VAR_4, VAR_8);

  FUNC_2();

  FUNC_5(VAR_0,
        FUNC_4(VAR_0) & ~VAR_1);

  FUNC_1();
  FUNC_9(&VAR_4, VAR_8);

  FUNC_3(VAR_6->dma_irq, VAR_5);
 }
 FUNC_3(VAR_5->irq, VAR_5);
 return 0;
}
