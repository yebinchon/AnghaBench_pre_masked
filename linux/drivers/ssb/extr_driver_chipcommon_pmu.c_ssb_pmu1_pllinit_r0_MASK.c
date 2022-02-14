
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
struct pmu1_plltab_entry {int freq; int xf; scalar_t__ ndiv_frac; scalar_t__ ndiv_int; scalar_t__ p2div; scalar_t__ p1div; } ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_3 (struct ssb_chipcommon*,int ) ;
 int FUNC_4 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int,int) ;
 struct pmu1_plltab_entry* FUNC_7 (int) ;
 int FUNC_8 (struct ssb_chipcommon*,int ) ;
 int FUNC_9 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ssb_chipcommon *VAR_28,
    u32 VAR_29)
{
 struct ssb_bus *VAR_30 = VAR_28->dev->bus;
 const struct pmu1_plltab_entry *VAR_31 = ((void*)0);
 u32 VAR_32 = 0;
 u32 VAR_33, VAR_34, VAR_35;
 unsigned int VAR_36;

 if (VAR_30->chip_id == 0x4312) {


  VAR_28->pmu.crystalfreq = 20000;
  return;
 }

 if (VAR_29)
  VAR_31 = FUNC_7(VAR_29);
 if (!VAR_31)
  VAR_31 = FUNC_7(VAR_9);
 FUNC_0(!VAR_31);
 VAR_29 = VAR_31->freq;
 VAR_28->pmu.crystalfreq = VAR_31->freq;


 VAR_35 = FUNC_3(VAR_28, VAR_2);
 if (((VAR_35 & VAR_5) >> VAR_6) == VAR_31->xf) {

  return;
 }

 FUNC_6(VAR_28->dev->dev, "Programming PLL to %u.%03u MHz\n",
   VAR_29 / 1000, VAR_29 % 1000);


 switch (VAR_30->chip_id) {
 case 0x4325:
  FUNC_2(VAR_28, VAR_8,
         ~((1 << VAR_26) |
    (1 << VAR_27)));
  FUNC_2(VAR_28, VAR_7,
         ~((1 << VAR_26) |
    (1 << VAR_27)));

  VAR_32 = 0x222222;
  break;
 default:
  FUNC_1(1);
 }
 for (VAR_36 = 1500; VAR_36; VAR_36--) {
  VAR_33 = FUNC_3(VAR_28, VAR_0);
  if (!(VAR_33 & VAR_1))
   break;
  FUNC_10(10);
 }
 VAR_33 = FUNC_3(VAR_28, VAR_0);
 if (VAR_33 & VAR_1)
  FUNC_5(VAR_28->dev->dev, "Failed to turn the PLL off!\n");


 VAR_34 = FUNC_8(VAR_28, VAR_10);
 VAR_34 &= ~(VAR_11 | VAR_13);
 VAR_34 |= ((u32)VAR_31->p1div << VAR_12) & VAR_11;
 VAR_34 |= ((u32)VAR_31->p2div << VAR_14) & VAR_13;
 FUNC_9(VAR_28, VAR_10, VAR_34);


 VAR_34 = FUNC_8(VAR_28, VAR_15);
 VAR_34 &= ~(VAR_16 | VAR_18);
 VAR_34 |= ((u32)VAR_31->ndiv_int << VAR_17) & VAR_16;
 VAR_34 |= (1 << VAR_19) & VAR_18;
 FUNC_9(VAR_28, VAR_15, VAR_34);


 VAR_34 = FUNC_8(VAR_28, VAR_20);
 VAR_34 &= ~VAR_21;
 VAR_34 |= ((u32)VAR_31->ndiv_frac << VAR_22) & VAR_21;
 FUNC_9(VAR_28, VAR_20, VAR_34);


 if (VAR_32) {
  VAR_34 = FUNC_8(VAR_28, VAR_23);
  VAR_34 &= ~VAR_24;
  VAR_34 |= (VAR_32 << VAR_25) & VAR_24;
  FUNC_9(VAR_28, VAR_23, VAR_34);
 }


 VAR_35 = FUNC_3(VAR_28, VAR_2);
 VAR_35 &= ~(VAR_3 | VAR_5);
 VAR_35 |= ((((u32)VAR_31->freq + 127) / 128 - 1) << VAR_4)
   & VAR_3;
 VAR_35 |= ((u32)VAR_31->xf << VAR_6) & VAR_5;
 FUNC_4(VAR_28, VAR_2, VAR_35);
}
