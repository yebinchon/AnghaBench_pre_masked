
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crystalfreq; } ;
struct ssb_chipcommon {TYPE_2__* dev; TYPE_1__ pmu; } ;
struct ssb_bus {int chip_id; } ;
struct pmu0_plltab_entry {int freq; int xf; scalar_t__ wb_frac; scalar_t__ wb_int; } ;
struct TYPE_4__ {int dev; struct ssb_bus* bus; } ;


 int FUNC_0 (int) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_3 (struct ssb_chipcommon*,int ) ;
 int FUNC_4 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int,int) ;
 struct pmu0_plltab_entry* FUNC_7 (int) ;
 int FUNC_8 (struct ssb_chipcommon*,int ) ;
 int FUNC_9 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ssb_chipcommon *VAR_24,
    u32 VAR_25)
{
 struct ssb_bus *VAR_26 = VAR_24->dev->bus;
 const struct pmu0_plltab_entry *VAR_27 = ((void*)0);
 u32 VAR_28, VAR_29, VAR_30;
 unsigned int VAR_31;

 if (VAR_25)
  VAR_27 = FUNC_7(VAR_25);
 if (!VAR_27)
  VAR_27 = FUNC_7(VAR_9);
 FUNC_0(!VAR_27);
 VAR_25 = VAR_27->freq;
 VAR_24->pmu.crystalfreq = VAR_27->freq;


 VAR_28 = FUNC_3(VAR_24, VAR_2);
 if (((VAR_28 & VAR_5) >> VAR_6) == VAR_27->xf) {

  return;
 }

 FUNC_6(VAR_24->dev->dev, "Programming PLL to %u.%03u MHz\n",
   VAR_25 / 1000, VAR_25 % 1000);


 switch (VAR_26->chip_id) {
 case 0x4328:
  FUNC_2(VAR_24, VAR_8,
         ~(1 << VAR_22));
  FUNC_2(VAR_24, VAR_7,
         ~(1 << VAR_22));
  break;
 case 0x5354:
  FUNC_2(VAR_24, VAR_8,
         ~(1 << VAR_23));
  FUNC_2(VAR_24, VAR_7,
         ~(1 << VAR_23));
  break;
 default:
  FUNC_1(1);
 }
 for (VAR_31 = 1500; VAR_31; VAR_31--) {
  VAR_29 = FUNC_3(VAR_24, VAR_0);
  if (!(VAR_29 & VAR_1))
   break;
  FUNC_10(10);
 }
 VAR_29 = FUNC_3(VAR_24, VAR_0);
 if (VAR_29 & VAR_1)
  FUNC_5(VAR_24->dev->dev, "Failed to turn the PLL off!\n");


 VAR_30 = FUNC_8(VAR_24, VAR_10);
 if (VAR_25 >= VAR_11)
  VAR_30 |= VAR_12;
 else
  VAR_30 &= ~VAR_12;
 FUNC_9(VAR_24, VAR_10, VAR_30);


 VAR_30 = FUNC_8(VAR_24, VAR_13);
 VAR_30 &= ~VAR_14;
 VAR_30 &= ~(VAR_17 | VAR_15);
 VAR_30 |= ((u32)VAR_27->wb_int << VAR_18) & VAR_17;
 VAR_30 |= ((u32)VAR_27->wb_frac << VAR_16) & VAR_15;
 if (VAR_27->wb_frac == 0)
  VAR_30 |= VAR_14;
 FUNC_9(VAR_24, VAR_13, VAR_30);


 VAR_30 = FUNC_8(VAR_24, VAR_19);
 VAR_30 &= ~VAR_20;
 VAR_30 |= (((u32)VAR_27->wb_int >> 4) << VAR_21) & VAR_20;
 FUNC_9(VAR_24, VAR_19, VAR_30);


 VAR_28 = FUNC_3(VAR_24, VAR_2);
 VAR_28 &= ~VAR_3;
 VAR_28 |= (((VAR_25 + 127) / 128 - 1) << VAR_4)
   & VAR_3;
 VAR_28 &= ~VAR_5;
 VAR_28 |= ((u32)VAR_27->xf << VAR_6) & VAR_5;
 FUNC_4(VAR_24, VAR_2, VAR_28);
}
