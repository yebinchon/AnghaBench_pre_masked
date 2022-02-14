
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_spi {int nregions; int pr_num; scalar_t__ swseq_erase; int dev; scalar_t__ swseq_reg; scalar_t__ base; scalar_t__ pregs; TYPE_1__* info; scalar_t__ sregs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (int ,char*,...) ;
 char FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct intel_spi *VAR_22)
{
 u32 VAR_23;
 int VAR_24;

 FUNC_3(VAR_22->dev, "BFPREG=0x%08x\n", FUNC_4(VAR_22->base + VAR_0));

 VAR_23 = FUNC_4(VAR_22->base + VAR_8);
 FUNC_3(VAR_22->dev, "HSFSTS_CTL=0x%08x\n", VAR_23);
 if (VAR_23 & VAR_9)
  FUNC_3(VAR_22->dev, "-> Locked\n");

 FUNC_3(VAR_22->dev, "FADDR=0x%08x\n", FUNC_4(VAR_22->base + VAR_3));
 FUNC_3(VAR_22->dev, "DLOCK=0x%08x\n", FUNC_4(VAR_22->base + VAR_2));

 for (VAR_24 = 0; VAR_24 < 16; VAR_24++)
  FUNC_3(VAR_22->dev, "FDATA(%d)=0x%08x\n",
   VAR_24, FUNC_4(VAR_22->base + FUNC_0(VAR_24)));

 FUNC_3(VAR_22->dev, "FRACC=0x%08x\n", FUNC_4(VAR_22->base + VAR_4));

 for (VAR_24 = 0; VAR_24 < VAR_22->nregions; VAR_24++)
  FUNC_3(VAR_22->dev, "FREG(%d)=0x%08x\n", VAR_24,
   FUNC_4(VAR_22->base + FUNC_1(VAR_24)));
 for (VAR_24 = 0; VAR_24 < VAR_22->pr_num; VAR_24++)
  FUNC_3(VAR_22->dev, "PR(%d)=0x%08x\n", VAR_24,
   FUNC_4(VAR_22->pregs + FUNC_2(VAR_24)));

 VAR_23 = FUNC_4(VAR_22->sregs + VAR_20);
 FUNC_3(VAR_22->dev, "SSFSTS_CTL=0x%08x\n", VAR_23);
 FUNC_3(VAR_22->dev, "PREOP_OPTYPE=0x%08x\n",
  FUNC_4(VAR_22->sregs + VAR_14));
 FUNC_3(VAR_22->dev, "OPMENU0=0x%08x\n", FUNC_4(VAR_22->sregs + VAR_12));
 FUNC_3(VAR_22->dev, "OPMENU1=0x%08x\n", FUNC_4(VAR_22->sregs + VAR_13));

 if (VAR_22->info->type == VAR_10)
  FUNC_3(VAR_22->dev, "BCR=0x%08x\n", FUNC_4(VAR_22->base + VAR_1));

 FUNC_3(VAR_22->dev, "LVSCC=0x%08x\n", FUNC_4(VAR_22->base + VAR_11));
 FUNC_3(VAR_22->dev, "UVSCC=0x%08x\n", FUNC_4(VAR_22->base + VAR_21));

 FUNC_3(VAR_22->dev, "Protected regions:\n");
 for (VAR_24 = 0; VAR_24 < VAR_22->pr_num; VAR_24++) {
  u32 VAR_25, VAR_26;

  VAR_23 = FUNC_4(VAR_22->pregs + FUNC_2(VAR_24));
  if (!(VAR_23 & (VAR_19 | VAR_18)))
   continue;

  VAR_26 = (VAR_23 & VAR_16) >> VAR_17;
  VAR_25 = VAR_23 & VAR_15;

  FUNC_3(VAR_22->dev, " %02d base: 0x%08x limit: 0x%08x [%c%c]\n",
    VAR_24, VAR_25 << 12, (VAR_26 << 12) | 0xfff,
    VAR_23 & VAR_19 ? 'W' : '.',
    VAR_23 & VAR_18 ? 'R' : '.');
 }

 FUNC_3(VAR_22->dev, "Flash regions:\n");
 for (VAR_24 = 0; VAR_24 < VAR_22->nregions; VAR_24++) {
  u32 VAR_27, VAR_28, VAR_29;

  VAR_27 = FUNC_4(VAR_22->base + FUNC_1(VAR_24));
  VAR_28 = VAR_27 & VAR_5;
  VAR_29 = (VAR_27 & VAR_6) >> VAR_7;

  if (VAR_28 >= VAR_29 || (VAR_24 > 0 && VAR_29 == 0))
   FUNC_3(VAR_22->dev, " %02d disabled\n", VAR_24);
  else
   FUNC_3(VAR_22->dev, " %02d base: 0x%08x limit: 0x%08x\n",
     VAR_24, VAR_28 << 12, (VAR_29 << 12) | 0xfff);
 }

 FUNC_3(VAR_22->dev, "Using %cW sequencer for register access\n",
  VAR_22->swseq_reg ? 'S' : 'H');
 FUNC_3(VAR_22->dev, "Using %cW sequencer for erase operation\n",
  VAR_22->swseq_erase ? 'S' : 'H');
}
