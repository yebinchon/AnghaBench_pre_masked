
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_frame_errors; int rx_crc_errors; int rx_missed_errors; } ;
struct net_device {long base_addr; TYPE_1__ stats; } ;
struct ei_device {int irqlock; int page_lock; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_7 (struct net_device*,char*,char const*,int,int) ;
 struct ei_device* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,char*,int) ;
 int FUNC_10 (struct ei_device*,int ,struct net_device*,char*,int) ;
 scalar_t__ FUNC_11 (struct ei_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct ei_device*,int ,struct net_device*,char*) ;
 int FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_17(int VAR_15, void *VAR_16)
{
 struct net_device *VAR_17 = VAR_16;
 long VAR_18;
 int VAR_19, VAR_20 = 0, VAR_21;
 struct ei_device *VAR_22;
     int VAR_23 = 0;
 unsigned long VAR_24;

 VAR_18 = VAR_17->base_addr;
 VAR_22 = FUNC_8(VAR_17);





 FUNC_15(&VAR_22->page_lock, VAR_24);

 if (VAR_22->irqlock) {

  const char *VAR_25;

  if (VAR_22->irqlock)
   VAR_25 = "Interrupted while interrupts are masked!";
  else
   VAR_25 = "Reentering the interrupt handler!";
  FUNC_7(VAR_17, "%s, isr=%#2x imr=%#2x\n",
       VAR_25,
       FUNC_6(VAR_18 + VAR_4),
       FUNC_6(VAR_18 + VAR_3));

  FUNC_16(&VAR_22->page_lock, VAR_24);
  return VAR_12;
 }

 FUNC_10(VAR_22, VAR_14, VAR_17, "interrupt(isr=%#2.2x)\n",
    FUNC_6(VAR_18 + VAR_4));

 FUNC_14(0x00, VAR_18 + VAR_4);
 VAR_22->irqlock = 1;


 while ((VAR_19 = FUNC_6(VAR_18 + VAR_4)) != 0 &&
        ++VAR_20 < VAR_13)
 {
  if (!FUNC_12(VAR_17) || (VAR_19 == 0xff)) {
   FUNC_13(VAR_22, VAR_14, VAR_17,
       "interrupt from stopped card\n");
   FUNC_14(VAR_19, VAR_18 + VAR_4);
   VAR_19 = 0;
   break;
  }
  VAR_23 = 1;


  FUNC_14(VAR_19, VAR_18 + VAR_4);
  for (VAR_21 = 0; VAR_21 < 10; VAR_21++) {
   if (!(FUNC_5(VAR_18 + VAR_4) & VAR_19))
    break;
   FUNC_14(0, VAR_18 + VAR_4);
   FUNC_14(VAR_19, VAR_18 + VAR_4);
  }
  if (VAR_19 & VAR_7)
   FUNC_2(VAR_17);
  else if (VAR_19 & (VAR_8+VAR_9))
  {

   FUNC_1(VAR_17);
  }

  if (VAR_19 & VAR_10)
   FUNC_4(VAR_17);
  else if (VAR_19 & VAR_11)
   FUNC_3(VAR_17);

  if (VAR_19 & VAR_6)
  {
   VAR_17->stats.rx_frame_errors += FUNC_6(VAR_18 + VAR_0);
   VAR_17->stats.rx_crc_errors += FUNC_6(VAR_18 + VAR_1);
   VAR_17->stats.rx_missed_errors+= FUNC_6(VAR_18 + VAR_2);
  }
 }

 if (VAR_19 && (FUNC_11(VAR_22)))
 {
  VAR_23 = 1;
  if (VAR_20 >= VAR_13)
  {

   if (VAR_19 != 0xFF)
    FUNC_9(VAR_17,
         "Too much work at interrupt, status %#2.2x\n",
         VAR_19);
   FUNC_14(VAR_5, VAR_18 + VAR_4);
  } else {
   FUNC_9(VAR_17, "unknown interrupt %#2x\n",
        VAR_19);
   FUNC_14(0xff, VAR_18 + VAR_4);
  }
 }


 VAR_22->irqlock = 0;
 FUNC_14(VAR_5, VAR_18 + VAR_3);

 FUNC_16(&VAR_22->page_lock, VAR_24);
 return FUNC_0(VAR_23);
}
