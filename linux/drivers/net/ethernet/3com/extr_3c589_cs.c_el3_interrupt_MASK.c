
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {unsigned int base_addr; } ;
struct el3_private {int lock; int last_irq; } ;
typedef int irqreturn_t ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (unsigned int) ;
 int VAR_16 ;
 int FUNC_4 (struct net_device*,char*,...) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 struct el3_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,char*,int) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct net_device*,int ) ;
 int FUNC_16 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_17(int VAR_17, void *VAR_18)
{
 struct net_device *VAR_19 = (struct net_device *) VAR_18;
 struct el3_private *VAR_20 = FUNC_6(VAR_19);
 unsigned int VAR_21;
 __u16 VAR_22;
 int VAR_23 = 0, VAR_24 = 1;

 if (!FUNC_8(VAR_19))
  return VAR_4;

 VAR_21 = VAR_19->base_addr;

 FUNC_4(VAR_19, "interrupt, status %4.4x.\n", FUNC_3(VAR_21 + VAR_3));

 FUNC_13(&VAR_20->lock);
 while ((VAR_22 = FUNC_3(VAR_21 + VAR_3)) &
 (VAR_5 | VAR_7 | VAR_11)) {
  if ((VAR_22 & 0xe000) != 0x2000) {
   FUNC_4(VAR_19, "interrupt from dead card\n");
   VAR_24 = 0;
   break;
  }
  if (VAR_22 & VAR_7)
   FUNC_2(VAR_19);
  if (VAR_22 & VAR_12) {
   FUNC_4(VAR_19, "    TX room bit was handled.\n");

   FUNC_10(VAR_0 | VAR_12, VAR_21 + VAR_2);
   FUNC_9(VAR_19);
  }
  if (VAR_22 & VAR_13)
   FUNC_11(VAR_19);
  if (VAR_22 & (VAR_1 | VAR_8 | VAR_11)) {

   if (VAR_22 & VAR_11)
    FUNC_16(VAR_19);
   if (VAR_22 & VAR_8) {

    FUNC_2(VAR_19);
    FUNC_10(VAR_0 | VAR_8, VAR_21 + VAR_2);
   }
   if (VAR_22 & VAR_1) {
    u16 VAR_25;
    FUNC_0(4);
    VAR_25 = FUNC_3(VAR_21 + 4);
    FUNC_0(1);
    FUNC_7(VAR_19, "adapter failure, FIFO diagnostic register %04x.\n",
       VAR_25);
    if (VAR_25 & 0x0400) {

     FUNC_15(VAR_19, VAR_15);
     FUNC_10(VAR_14, VAR_21 + VAR_2);
    }
    if (VAR_25 & 0x2000) {

     FUNC_15(VAR_19, VAR_10);
     FUNC_12(VAR_19);
     FUNC_10(VAR_9, VAR_21 + VAR_2);
    }
    FUNC_10(VAR_0 | VAR_1, VAR_21 + VAR_2);
   }
  }
  if (++VAR_23 > 10) {
   FUNC_5(VAR_19, "infinite loop in interrupt, status %4.4x.\n",
     VAR_22);

   FUNC_10(VAR_0 | 0xFF, VAR_21 + VAR_2);
   break;
  }

  FUNC_10(VAR_0 | VAR_6 | VAR_5, VAR_21 + VAR_2);
 }
 VAR_20->last_irq = VAR_16;
 FUNC_14(&VAR_20->lock);
 FUNC_4(VAR_19, "exiting interrupt, status %4.4x.\n",
   FUNC_3(VAR_21 + VAR_3));
 return FUNC_1(VAR_24);
}
