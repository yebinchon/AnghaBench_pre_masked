
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cas {scalar_t__ lstate; scalar_t__ link_transition; int link_transition_jiffies_valid; int cas_flags; void* link_transition_jiffies; scalar_t__ regs; int dev; scalar_t__ opened; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct cas*) ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cas*,int ,int ,char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct cas *VAR_19)
{
 u32 VAR_20, VAR_21;
 int VAR_22 = 0;





 VAR_20 = FUNC_4(VAR_19->regs + VAR_10);
 if ((VAR_20 & VAR_6) == 0)
  VAR_20 = FUNC_4(VAR_19->regs + VAR_10);




 if ((VAR_20 & (VAR_5 |
       VAR_7)) ==
     (VAR_5 | VAR_7))
  FUNC_3(VAR_19, VAR_15, VAR_19->dev, "PCS RemoteFault\n");




 VAR_21 = FUNC_4(VAR_19->regs + VAR_12);
 if ((VAR_21 & VAR_8) != VAR_13) {
  VAR_20 &= ~VAR_6;
 } else if (VAR_21 & VAR_9) {
  VAR_20 |= VAR_6;
 }

 if (VAR_20 & VAR_6) {
  if (VAR_19->lstate != VAR_18) {
   if (VAR_19->opened) {
    VAR_19->lstate = VAR_18;
    VAR_19->link_transition = VAR_1;

    FUNC_0(VAR_19);
    FUNC_2(VAR_19->dev);
   }
  }
 } else if (VAR_19->lstate == VAR_18) {
  VAR_19->lstate = VAR_16;
  if (VAR_17 != 0 &&
      VAR_19->link_transition != VAR_3 &&
      !VAR_19->link_transition_jiffies_valid) {
   VAR_22 = 1;
   VAR_19->link_transition = VAR_3;
   VAR_19->link_transition_jiffies = VAR_14;
   VAR_19->link_transition_jiffies_valid = 1;
  } else {
   VAR_19->link_transition = VAR_2;
  }
  FUNC_1(VAR_19->dev);
  if (VAR_19->opened)
   FUNC_3(VAR_19, VAR_15, VAR_19->dev, "PCS link down\n");
  if ((VAR_19->cas_flags & VAR_0) == 0) {

   VAR_20 = FUNC_4(VAR_19->regs + VAR_11);
   if (VAR_20 == 0x03)
    return 1;
  }
 } else if (VAR_19->lstate == VAR_16) {
  if (VAR_17 != 0 &&
      VAR_19->link_transition != VAR_3 &&
      !VAR_19->link_transition_jiffies_valid) {





   VAR_22 = 1;
   VAR_19->link_transition = VAR_3;
   VAR_19->link_transition_jiffies = VAR_14;
   VAR_19->link_transition_jiffies_valid = 1;
  } else {
   VAR_19->link_transition = VAR_4;
  }
 }

 return VAR_22;
}
