
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_frame_errors; int rx_crc_errors; int rx_missed_errors; } ;
struct net_device {unsigned long base_addr; TYPE_1__ stats; } ;
struct ei_device {int page_lock; scalar_t__ irqlock; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int VAR_18 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_19 ;
 int FUNC_7 (struct net_device*,char*,int,int) ;
 struct ei_device* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*,...) ;
 int FUNC_10 (struct ei_device*,int ,struct net_device*,char*,int) ;
 scalar_t__ FUNC_11 (struct ei_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_20, void *VAR_21)
{
 struct net_device *VAR_22 = VAR_21;
 unsigned long VAR_23 = VAR_22->base_addr;
 int VAR_24, VAR_25 = 0;
 struct ei_device *VAR_26 = FUNC_8(VAR_22);





 FUNC_13(&VAR_26->page_lock);

 if (VAR_26->irqlock) {




  FUNC_7(VAR_22, "Interrupted while interrupts are masked! isr=%#2x imr=%#2x\n",
      FUNC_1(VAR_23 + VAR_8),
      FUNC_1(VAR_23 + VAR_7));
  FUNC_14(&VAR_26->page_lock);
  return VAR_17;
 }


 FUNC_2(VAR_1+VAR_2, VAR_23 + VAR_0);
 FUNC_10(VAR_26, VAR_19, VAR_22, "interrupt(isr=%#2.2x)\n",
    FUNC_1(VAR_23 + VAR_8));


 while ((VAR_24 = FUNC_1(VAR_23 + VAR_8)) != 0 &&
        ++VAR_25 < VAR_18) {
  if (!FUNC_12(VAR_22)) {
   FUNC_9(VAR_22, "interrupt from stopped card\n");

   FUNC_2(VAR_24, VAR_23 + VAR_8);
   VAR_24 = 0;
   break;
  }
  if (VAR_24 & VAR_11)
   FUNC_4(VAR_22);
  else if (VAR_24 & (VAR_13+VAR_14)) {

   FUNC_3(VAR_22);
  }

  if (VAR_24 & VAR_15)
   FUNC_6(VAR_22);
  else if (VAR_24 & VAR_16)
   FUNC_5(VAR_22);

  if (VAR_24 & VAR_10) {
   VAR_22->stats.rx_frame_errors += FUNC_1(VAR_23 + VAR_4);
   VAR_22->stats.rx_crc_errors += FUNC_1(VAR_23 + VAR_5);
   VAR_22->stats.rx_missed_errors += FUNC_1(VAR_23 + VAR_6);
   FUNC_2(VAR_10, VAR_23 + VAR_8);
  }


  if (VAR_24 & VAR_12)
   FUNC_2(VAR_12, VAR_23 + VAR_8);

  FUNC_2(VAR_1+VAR_2+VAR_3, VAR_23 + VAR_0);
 }

 if (VAR_24 && (FUNC_11(VAR_26))) {
  FUNC_2(VAR_1+VAR_2+VAR_3, VAR_23 + VAR_0);
  if (VAR_25 >= VAR_18) {

   if (VAR_24 != 0xFF)
    FUNC_9(VAR_22, "Too much work at interrupt, status %#2.2x\n",
         VAR_24);
   FUNC_2(VAR_9, VAR_23 + VAR_8);
  } else {
   FUNC_9(VAR_22, "unknown interrupt %#2x\n", VAR_24);
   FUNC_2(0xff, VAR_23 + VAR_8);
  }
 }
 FUNC_14(&VAR_26->page_lock);
 return FUNC_0(VAR_25 > 0);
}
