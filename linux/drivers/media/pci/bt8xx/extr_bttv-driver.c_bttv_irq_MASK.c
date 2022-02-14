
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int nr; } ;
struct bttv {int i2c_done; int irq_me; int irq_total; TYPE_1__ c; int mute; int audio_input; scalar_t__ opt_automute; int i2c_queue; scalar_t__ remote; int field_count; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct bttv*,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (struct bttv*) ;
 int FUNC_4 (struct bttv*) ;
 int FUNC_5 (struct bttv*) ;
 int FUNC_6 (struct bttv*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct bttv*) ;
 int FUNC_9 (int,int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int ,int,int ,int,int) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,int ,...) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_20, void *VAR_21)
{
 u32 VAR_22,VAR_23;
 u32 VAR_24;
 int VAR_25;
 struct bttv *VAR_26;
 int VAR_27 = 0;

 VAR_26=(struct bttv *)VAR_21;

 VAR_25=0;
 while (1) {

  VAR_22=FUNC_2(VAR_13);
  VAR_23=VAR_22&FUNC_2(VAR_9);
  if (!VAR_23)
   break;
  VAR_27 = 1;
  FUNC_9(VAR_22,VAR_13);


  VAR_24=FUNC_2(VAR_0);

  if (VAR_19) {
   FUNC_11("%d: irq loop=%d fc=%d riscs=%x, riscc=%08x, ",
     VAR_26->c.nr, VAR_25, VAR_26->field_count,
     VAR_22>>28, FUNC_2(VAR_16));
   FUNC_7(VAR_22,VAR_23);
   if (VAR_22 & VAR_7)
    FUNC_10("   HLOC => %s",
     VAR_24 & VAR_1
     ? "yes" : "no");
   if (VAR_22 & VAR_14)
    FUNC_10("   PRES => %s",
     VAR_24 & VAR_3
     ? "yes" : "no");
   if (VAR_22 & VAR_5)
    FUNC_10("   NUML => %s",
     VAR_24 & VAR_2
     ? "625" : "525");
   FUNC_10("\n");
  }

  if (VAR_23&VAR_15)
   VAR_26->field_count++;

  if ((VAR_23 & VAR_6) && VAR_26->remote) {
   FUNC_3(VAR_26);
  }

  if (VAR_23 & VAR_8) {
   VAR_26->i2c_done = VAR_22;
   FUNC_14(&VAR_26->i2c_queue);
  }

  if ((VAR_23 & VAR_11) && (VAR_22 & (4<<28)))
   FUNC_4(VAR_26);

  if ((VAR_23 & VAR_11) && (VAR_22 & (2<<28)))
   FUNC_6(VAR_26);

  if ((VAR_23 & VAR_11) && (VAR_22 & (1<<28)))
   FUNC_5(VAR_26);

  if ((VAR_23 & VAR_7) && VAR_26->opt_automute)

   FUNC_1(VAR_26, VAR_26->audio_input, VAR_26->mute);

  if (VAR_23 & (VAR_12|VAR_10)) {
   FUNC_13("%d: %s%s @ %08x,",
    VAR_26->c.nr,
    (VAR_23 & VAR_12) ? "SCERR" : "",
    (VAR_23 & VAR_10) ? "OCERR" : "",
    FUNC_2(VAR_16));
   FUNC_7(VAR_22,VAR_23);
   FUNC_10("\n");
   if (VAR_17)
    FUNC_8(VAR_26);
  }
  if (VAR_18 && VAR_23 & VAR_4) {
   FUNC_13("%d: FDSR @ %08x\n",
    VAR_26->c.nr, FUNC_2(VAR_16));
   if (VAR_17)
    FUNC_8(VAR_26);
  }

  VAR_25++;
  if (VAR_25 > 4) {

   if (VAR_25 > 8 || !(VAR_23 & VAR_6)) {
    FUNC_9(0, VAR_9);

    FUNC_12("%d: IRQ lockup, cleared int mask [",
           VAR_26->c.nr);
   } else {
    FUNC_12("%d: IRQ lockup, clearing GPINT from int mask [",
           VAR_26->c.nr);

    FUNC_9(FUNC_2(VAR_9) & (-1 ^ VAR_6),
      VAR_9);
   }

   FUNC_7(VAR_22,VAR_23);

   FUNC_10("]\n");
  }
 }
 VAR_26->irq_total++;
 if (VAR_27)
  VAR_26->irq_me++;
 return FUNC_0(VAR_27);
}
