
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int base_addr; int* dev_addr; int irq; } ;
struct TYPE_2__ {int close; int copy_from_card; int copy_to_card; int reset; int intmask; int status; int command; int owner; } ;
struct arcnet_local {int setup; int card_flags; int setup2; int config; int timeout; int backplane; int card_name; TYPE_1__ hw; } ;


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
 int FUNC_0 (int ,struct net_device*,char*,...) ;
 int FUNC_1 (int,int) ;
 int VAR_12 ;
 int FUNC_2 (int,int,int ) ;
 int * VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct arcnet_local*,int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (int) ;
 struct arcnet_local* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ,int ,int,char*,struct net_device*) ;

int FUNC_9(struct net_device *VAR_21, int VAR_22)
{
 struct arcnet_local *VAR_23;
 int VAR_24 = VAR_21->base_addr;



 VAR_23 = FUNC_6(VAR_21);

 VAR_23->hw.owner = VAR_11;
 VAR_23->hw.command = VAR_15;
 VAR_23->hw.status = VAR_20;
 VAR_23->hw.intmask = VAR_19;
 VAR_23->hw.reset = VAR_18;
 VAR_23->hw.copy_to_card = VAR_17;
 VAR_23->hw.copy_from_card = VAR_16;
 VAR_23->hw.close = VAR_14;


 if (!VAR_21->dev_addr[0])
  VAR_21->dev_addr[0] = FUNC_1(VAR_24, 8);

 FUNC_3(VAR_23, VAR_24, VAR_9);
 FUNC_2(VAR_23->setup, VAR_24, VAR_3);

 if (VAR_23->card_flags & VAR_0) {
  FUNC_3(VAR_23, VAR_24, VAR_10);
  FUNC_2(VAR_23->setup2, VAR_24, VAR_3);


  FUNC_5(1);
  FUNC_2(VAR_7, VAR_24, VAR_1);
 }

 VAR_23->config = (VAR_23->timeout << 3) | (VAR_23->backplane << 2) | VAR_8;

 FUNC_2(VAR_23->config, VAR_24, VAR_2);
 FUNC_2(VAR_21->dev_addr[0], VAR_24, VAR_3);


 if (FUNC_8(VAR_21->irq, VAR_12, VAR_22,
   "arcnet (COM20020)", VAR_21)) {
  FUNC_0(VAR_4, VAR_21, "Can't get IRQ %d!\n", VAR_21->irq);
  return -VAR_6;
 }

 FUNC_0(VAR_4, VAR_21, "%s: station %02Xh found at %03lXh, IRQ %d.\n",
     VAR_23->card_name, VAR_21->dev_addr[0], VAR_21->base_addr, VAR_21->irq);

 if (VAR_23->backplane)
  FUNC_0(VAR_4, VAR_21, "Using backplane mode.\n");

 if (VAR_23->timeout != 3)
  FUNC_0(VAR_4, VAR_21, "Using extended timeout value of %d\n",
      VAR_23->timeout);

 FUNC_0(VAR_4, VAR_21, "Using CKP %d - data rate %s\n",
     VAR_23->setup >> 1,
     VAR_13[3 -
         ((VAR_23->setup2 & 0xF0) >> 4) +
         ((VAR_23->setup & 0x0F) >> 1)]);




 if (FUNC_7(VAR_21)) {
  FUNC_4(VAR_21->irq, VAR_21);
  return -VAR_5;
 }
 return 0;
}
