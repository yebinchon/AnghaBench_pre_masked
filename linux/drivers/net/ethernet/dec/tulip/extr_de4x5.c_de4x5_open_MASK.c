
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int irq; int base_addr; } ;
struct de4x5_private {int rxRingSize; int interrupt; int state; int adapter_name; int lock; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_0 (struct net_device*,int,int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_17 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_18 ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 struct de4x5_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct net_device*,int ) ;

__attribute__((used)) static int
FUNC_14(struct net_device *VAR_19)
{
    struct de4x5_private *VAR_20 = FUNC_8(VAR_19);
    u_long VAR_21 = VAR_19->base_addr;
    int VAR_22, VAR_23 = 0;
    s32 VAR_24;


    for (VAR_22=0; VAR_22<VAR_20->rxRingSize; VAR_22++) {
 if (FUNC_0(VAR_19, VAR_22, 0) == ((void*)0)) {
     FUNC_2(VAR_19);
     return -VAR_10;
 }
    }




    FUNC_13(VAR_19, VAR_16);




    VAR_23 = FUNC_4(VAR_19);
    FUNC_12(&VAR_20->lock);
    VAR_20->state = VAR_12;
    FUNC_1(VAR_19);

    if (FUNC_11(VAR_19->irq, VAR_18, VAR_11,
                                       VAR_20->adapter_name, VAR_19)) {
 FUNC_10("de4x5_open(): Requested IRQ%d is busy - attempting FAST/SHARE...", VAR_19->irq);
 if (FUNC_11(VAR_19->irq, VAR_18, VAR_11,
                                VAR_20->adapter_name, VAR_19)) {
     FUNC_10("\n              Cannot get IRQ- reconfigure your hardware.\n");
     FUNC_6(VAR_19);
     FUNC_2(VAR_19);
     FUNC_3(VAR_19);
     FUNC_13(VAR_19, VAR_13);
     VAR_20->state = VAR_0;
     return -VAR_10;
 } else {
     FUNC_10("\n              Succeeded, but you should reconfigure your hardware to avoid this.\n");
     FUNC_10("WARNING: there may be IRQ related problems in heavily loaded systems.\n");
 }
    }

    VAR_20->interrupt = VAR_15;
    FUNC_9(VAR_19);

    VAR_14;

    FUNC_5(VAR_19);

    if (VAR_17 & VAR_9) {
 FUNC_10("\tsts:  0x%08x\n", FUNC_7(VAR_8));
 FUNC_10("\tbmr:  0x%08x\n", FUNC_7(VAR_1));
 FUNC_10("\timr:  0x%08x\n", FUNC_7(VAR_2));
 FUNC_10("\tomr:  0x%08x\n", FUNC_7(VAR_3));
 FUNC_10("\tsisr: 0x%08x\n", FUNC_7(VAR_6));
 FUNC_10("\tsicr: 0x%08x\n", FUNC_7(VAR_4));
 FUNC_10("\tstrr: 0x%08x\n", FUNC_7(VAR_7));
 FUNC_10("\tsigr: 0x%08x\n", FUNC_7(VAR_5));
    }

    return VAR_23;
}
