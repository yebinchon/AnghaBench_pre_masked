
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cas {int lstate; int link_fcntl; int timer_ticks; int cas_flags; void* link_transition; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cas*,int ) ;
 int FUNC_1 (struct cas*,int ,int) ;
 int VAR_8 ;

 int VAR_9 ;


 int FUNC_2 (struct cas*,int ,int ,char*) ;

__attribute__((used)) static inline int FUNC_3(struct cas *VAR_10)
{
 u16 VAR_11;

 switch (VAR_10->lstate) {
 case 129:
  FUNC_2(VAR_10, VAR_8, VAR_10->dev, "Autoneg failed again, keeping forced mode\n");
  FUNC_1(VAR_10, VAR_7, VAR_10->link_fcntl);
  VAR_10->timer_ticks = 5;
  VAR_10->lstate = VAR_9;
  VAR_10->link_transition = VAR_6;
  break;

 case 130:
  VAR_11 = FUNC_0(VAR_10, VAR_7);




  VAR_11 &= ~(VAR_1 | VAR_0);
  VAR_11 |= VAR_2;
  VAR_11 |= (VAR_10->cas_flags & VAR_5) ?
   VAR_4 : VAR_3;
  FUNC_1(VAR_10, VAR_7, VAR_11);
  VAR_10->timer_ticks = 5;
  VAR_10->lstate = 128;
  VAR_10->link_transition = VAR_6;
  break;

 case 128:

  VAR_11 = FUNC_0(VAR_10, VAR_7);
  VAR_10->timer_ticks = 5;
  if (VAR_11 & VAR_4) {
   VAR_11 &= ~VAR_4;
   VAR_11 |= (VAR_3 | VAR_2);
   FUNC_1(VAR_10, VAR_7, VAR_11);
   break;
  }

  if (VAR_11 & VAR_3) {
   if (VAR_11 & VAR_2)
    VAR_11 &= ~VAR_2;
   else {
    VAR_11 &= ~VAR_3;
   }
   FUNC_1(VAR_10, VAR_7, VAR_11);
   break;
  }
 default:
  break;
 }
 return 0;
}
