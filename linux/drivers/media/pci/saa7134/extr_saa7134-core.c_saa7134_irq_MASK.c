
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * priv_data; } ;
struct saa7134_dev {int has_remote; int name; TYPE_3__* remote; TYPE_2__* mops; TYPE_1__ dmasound; scalar_t__ insuspend; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int mask_keydown; int mask_keyup; } ;
struct TYPE_5__ {int (* irq_ts_done ) (struct saa7134_dev*,unsigned long) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int VAR_16 ;


 scalar_t__ FUNC_1 (struct saa7134_dev*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct saa7134_dev*,int,unsigned long,unsigned long) ;
 int FUNC_5 (struct saa7134_dev*) ;
 int FUNC_6 (struct saa7134_dev*,unsigned long) ;
 int FUNC_7 (struct saa7134_dev*,unsigned long) ;
 int FUNC_8 (struct saa7134_dev*,unsigned long) ;
 int FUNC_9 (struct saa7134_dev*) ;
 int FUNC_10 (int ,int ) ;
 unsigned long FUNC_11 (int ) ;
 int FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (struct saa7134_dev*,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_18, void *VAR_19)
{
 struct saa7134_dev *VAR_20 = (struct saa7134_dev*) VAR_19;
 unsigned long VAR_21,VAR_22;
 int VAR_23, VAR_24 = 0;

 if (VAR_20->insuspend)
  goto out;

 for (VAR_23 = 0; VAR_23 < 10; VAR_23++) {
  VAR_21 = FUNC_11(VAR_7);
  VAR_22 = FUNC_11(VAR_16);




  if ((VAR_21 & VAR_10) &&
   (VAR_20->dmasound.priv_data != ((void*)0)) )
  {
   FUNC_2(2, "preserving DMA sound interrupt\n");
   VAR_21 &= ~VAR_10;
  }

  if (0 == VAR_21) {
   FUNC_2(2, "no (more) work\n");
   goto out;
  }

  VAR_24 = 1;
  FUNC_12(VAR_7,VAR_21);
  if (VAR_17)
   FUNC_4(VAR_20,VAR_23,VAR_21,VAR_22);


  if ((VAR_21 & VAR_15) ||
   (VAR_21 & VAR_13))
    FUNC_9(VAR_20);


  if ((VAR_21 & VAR_8) &&
      (VAR_22 & 0x60) == 0)
   FUNC_8(VAR_20,VAR_22);

  if ((VAR_21 & VAR_8) &&
      (VAR_22 & 0x40) == 0x40)
   FUNC_7(VAR_20,VAR_22);

  if ((VAR_21 & VAR_9) &&
      FUNC_1(VAR_20)) {
   if (VAR_20->mops->irq_ts_done != ((void*)0))
    VAR_20->mops->irq_ts_done(VAR_20, VAR_22);
   else
    FUNC_6(VAR_20, VAR_22);
  }

  if (VAR_21 & VAR_11) {
   switch (VAR_20->has_remote) {
    case 129:
     if (!VAR_20->remote)
      break;
     if (VAR_20->remote->mask_keydown & 0x10000) {
      FUNC_5(VAR_20);
     }
     break;

    case 128:
     break;

    default:
     break;
   }
  }

  if (VAR_21 & VAR_12) {
   switch (VAR_20->has_remote) {
    case 129:
     if (!VAR_20->remote)
      break;
     if ((VAR_20->remote->mask_keydown & 0x40000) ||
         (VAR_20->remote->mask_keyup & 0x40000)) {
      FUNC_5(VAR_20);
     }
     break;

    case 128:
     break;

    default:
     break;
   }
  }
 }

 if (10 == VAR_23) {
  FUNC_4(VAR_20,VAR_23,VAR_21,VAR_22);
  if (VAR_21 & VAR_14) {

   FUNC_3("%s/irq: looping -- clearing PE (parity error!) enable bit\n",
    VAR_20->name);
   FUNC_10(VAR_1,VAR_6);
  } else if (VAR_21 & VAR_11) {

   FUNC_3("%s/irq: looping -- clearing GPIO16 enable bit\n",
    VAR_20->name);
   FUNC_10(VAR_1, VAR_3);
   FUNC_10(VAR_1, VAR_2);
  } else if (VAR_21 & VAR_12) {

   FUNC_3("%s/irq: looping -- clearing GPIO18 enable bit\n",
    VAR_20->name);
   FUNC_10(VAR_1, VAR_5);
   FUNC_10(VAR_1, VAR_4);
  } else {

   FUNC_3("%s/irq: looping -- clearing all enable bits\n",
    VAR_20->name);
   FUNC_12(VAR_0,0);
   FUNC_12(VAR_1,0);
  }
 }

 out:
 return FUNC_0(VAR_24);
}
