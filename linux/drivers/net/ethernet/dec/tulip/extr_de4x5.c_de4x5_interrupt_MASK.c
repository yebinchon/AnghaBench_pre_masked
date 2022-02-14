
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int name; int irq; int base_addr; } ;
struct TYPE_2__ {scalar_t__ lock; int queue; } ;
struct de4x5_private {int irq_mask; int lock; scalar_t__ interrupt; TYPE_1__ cache; scalar_t__ tx_enable; } ;
typedef int s32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 struct de4x5_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (char*,int ,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,void*) ;

__attribute__((used)) static irqreturn_t
FUNC_16(int VAR_15, void *VAR_16)
{
    struct net_device *VAR_17 = VAR_16;
    struct de4x5_private *VAR_18;
    s32 VAR_19, VAR_20, VAR_21, VAR_22;
    u_long VAR_23;
    unsigned int VAR_24 = 0;

    VAR_18 = FUNC_7(VAR_17);
    FUNC_12(&VAR_18->lock);
    VAR_23 = VAR_17->base_addr;

    VAR_1;

    if (FUNC_15(VAR_5, (void*) &VAR_18->interrupt))
 FUNC_10("%s: Re-entering the interrupt handler.\n", VAR_17->name);

    FUNC_14(VAR_17->irq);

    for (VAR_22=0; VAR_22<8; VAR_22++) {
 VAR_21 = FUNC_6(VAR_0);
 FUNC_9(VAR_21, VAR_0);

 if (!(VAR_21 & VAR_18->irq_mask)) break;
 VAR_24 = 1;

 if (VAR_21 & (VAR_8 | VAR_9))
   FUNC_3(VAR_17);

 if (VAR_21 & (VAR_11 | VAR_12))
   FUNC_4(VAR_17);

 if (VAR_21 & VAR_7) {
     VAR_18->irq_mask &= ~VAR_3;
 }

 if (VAR_21 & VAR_13) {
     FUNC_5(VAR_17);
 }

 if (VAR_21 & VAR_10) {
     VAR_6;
     FUNC_10("%s: Fatal bus error occurred, sts=%#8x, device stopped.\n",
     VAR_17->name, VAR_21);
     FUNC_13(&VAR_18->lock);
     return VAR_4;
 }
    }


    if (!FUNC_15(0, (void *)&VAR_18->cache.lock)) {
 while (!FUNC_11(&VAR_18->cache.queue) && !FUNC_8(VAR_17) && VAR_18->tx_enable) {
     FUNC_2(FUNC_1(VAR_17), VAR_17);
 }
 VAR_18->cache.lock = 0;
    }

    VAR_18->interrupt = VAR_14;
    VAR_2;
    FUNC_13(&VAR_18->lock);

    return FUNC_0(VAR_24);
}
