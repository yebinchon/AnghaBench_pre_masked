
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tx_packets; int tx_errors; } ;
struct net_device {unsigned int base_addr; TYPE_1__ stats; } ;
struct TYPE_6__ {unsigned char xmtrc; int mpco; int rntpco; int rcvcco; int cerr; int babl; int jab; int rtry; int lcar; int defer; int one; int more; int lcol; int uflo; int xmtsv; int exdef; } ;
struct TYPE_7__ {TYPE_2__ mace_stats; int tx_free_frames; scalar_t__ tx_irq_disabled; } ;
typedef TYPE_3__ mace_private ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
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
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 scalar_t__ VAR_28 ;
 unsigned char VAR_29 ;
 unsigned char VAR_30 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,char*,char const*,void*,void*) ;
 TYPE_3__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (char*,int,...) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_31, void *VAR_32)
{
  struct net_device *VAR_33 = (struct net_device *) VAR_32;
  mace_private *VAR_34 = FUNC_4(VAR_33);
  unsigned int VAR_35;
  int VAR_36;
  int VAR_37 = VAR_17;

  if (VAR_33 == ((void*)0)) {
    FUNC_8("mace_interrupt(): irq 0x%X for unknown device.\n",
   VAR_31);
    return VAR_3;
  }

  VAR_35 = VAR_33->base_addr;

  if (VAR_34->tx_irq_disabled) {
    const char *VAR_38;
    if (VAR_34->tx_irq_disabled)
      VAR_38 = "Interrupt with tx_irq_disabled";
    else
      VAR_38 = "Re-entering the interrupt handler";
    FUNC_3(VAR_33, "%s [isr=%02X, imr=%02X]\n",
    VAR_38,
    FUNC_0(VAR_35 + VAR_0 + VAR_8),
    FUNC_0(VAR_35 + VAR_0 + VAR_6));

    return VAR_3;
  }

  if (!FUNC_5(VAR_33)) {
    FUNC_2(VAR_33, "interrupt from dead card\n");
    return VAR_3;
  }

  do {

    VAR_36 = FUNC_0(VAR_35 + VAR_0 + VAR_8);
    if (!(VAR_36 & ~VAR_7) && VAR_37 == VAR_17)
      return VAR_3;

    FUNC_8("mace_interrupt: irq 0x%X status 0x%X.\n", VAR_31, VAR_36);

    if (VAR_36 & VAR_14) {
      FUNC_1(VAR_33, VAR_18);
    }

    if (VAR_36 & VAR_16) {
      unsigned char VAR_39;
      unsigned char VAR_40;
      unsigned char VAR_41;

      VAR_39 = FUNC_0(VAR_35 + VAR_0 + VAR_4);
      if ((VAR_39 & VAR_5)==0) {
 VAR_33->stats.tx_errors++;
 FUNC_7(0xFF, VAR_35 + VAR_1);
      }


      VAR_40 = FUNC_0(VAR_35 + VAR_0 + VAR_28);
      if (VAR_40 & VAR_29) VAR_34->mace_stats.exdef++;
      VAR_34->mace_stats.xmtrc += (VAR_40 & VAR_30);

      if (
        (VAR_41 = FUNC_0(VAR_35 + VAR_0 + VAR_19)) &
        VAR_27
      ) {
 VAR_34->mace_stats.xmtsv++;

 if (VAR_41 & ~VAR_27) {
   if (VAR_41 & VAR_26) {


     VAR_34->mace_stats.uflo++;
   }
   if (VAR_41 & VAR_22) {

     VAR_34->mace_stats.lcol++;
   }
   if (VAR_41 & VAR_23) {

     VAR_34->mace_stats.more++;
   }
   if (VAR_41 & VAR_24) {

     VAR_34->mace_stats.one++;
   }
   if (VAR_41 & VAR_20) {

     VAR_34->mace_stats.defer++;
   }
   if (VAR_41 & VAR_21) {

     VAR_34->mace_stats.lcar++;
   }
   if (VAR_41 & VAR_25) {

     VAR_34->mace_stats.rtry++;
   }
        }

      }

      VAR_33->stats.tx_packets++;
      VAR_34->tx_free_frames++;
      FUNC_6(VAR_33);
    }

    if (VAR_36 & ~VAR_7 & ~VAR_14 & ~VAR_16) {
      if (VAR_36 & VAR_11) {

        VAR_34->mace_stats.jab++;
      }
      if (VAR_36 & VAR_9) {

        VAR_34->mace_stats.babl++;
      }
      if (VAR_36 & VAR_10) {



        VAR_34->mace_stats.cerr++;
      }
      if (VAR_36 & VAR_13) {

        VAR_34->mace_stats.rcvcco++;
      }
      if (VAR_36 & VAR_15) {

        VAR_34->mace_stats.rntpco++;
      }
      if (VAR_36 & VAR_12) {

        VAR_34->mace_stats.mpco++;
      }
    }

  } while ((VAR_36 & ~VAR_7) && (--VAR_37));

  return VAR_2;
}
