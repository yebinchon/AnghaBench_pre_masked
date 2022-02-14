
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {TYPE_2__* mmc; } ;
struct sdhci_am654_data {int dll_on; int otap_del_sel; int flags; int strb_sel; int trm_icp; int drv_strength; int base; } ;
struct TYPE_3__ {scalar_t__ timing; } ;
struct TYPE_4__ {TYPE_1__ ios; } ;


 unsigned int VAR_0 ;
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
 scalar_t__ VAR_11 ;
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int,int,int,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct sdhci_am654_data* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_28, unsigned int VAR_29)
{
 struct sdhci_pltfm_host *VAR_30 = FUNC_5(VAR_28);
 struct sdhci_am654_data *VAR_31 = FUNC_4(VAR_30);
 int VAR_32, VAR_33, VAR_34;
 u32 VAR_35, VAR_36;
 int VAR_37;

 if (VAR_31->dll_on) {
  FUNC_3(VAR_31->base, VAR_16, VAR_6, 0);

  VAR_31->dll_on = 0;
 }

 FUNC_6(VAR_28, VAR_29);

 if (VAR_29 > VAR_0) {

  VAR_35 = VAR_12 | VAR_14;
  VAR_36 = (1 << VAR_13) |
        (VAR_31->otap_del_sel << VAR_15);
  FUNC_3(VAR_31->base, VAR_17, VAR_35, VAR_36);

  if (VAR_28->mmc->ios.timing == VAR_11) {
   if (VAR_31->flags & VAR_25)
    VAR_35 = VAR_24;
   else
    VAR_35 = VAR_26;

   FUNC_3(VAR_31->base, VAR_17, VAR_35,
        VAR_31->strb_sel <<
        VAR_27);
  }

  if (VAR_31->flags & VAR_8) {
   switch (VAR_29) {
   case 200000000:
    VAR_32 = 0;
    VAR_33 = 0;
    break;
   case 100000000:
    VAR_32 = 0;
    VAR_33 = 1;
    break;
   default:
    VAR_32 = 1;
    VAR_33 = 0;
   }


   VAR_35 = VAR_22 | VAR_20;
   VAR_36 = (VAR_32 << VAR_23) | (VAR_33 << VAR_21);
   FUNC_3(VAR_31->base, VAR_18, VAR_35,
        VAR_36);
  } else {
   switch (VAR_29) {
   case 200000000:
    VAR_34 = 0x0;
    break;
   default:
    VAR_34 = 0x4;
   }

   FUNC_3(VAR_31->base, VAR_18,
        VAR_9,
        VAR_34 << VAR_10);
  }


  VAR_35 = VAR_2;
  VAR_36 = VAR_31->trm_icp << VAR_3;


  VAR_35 |= VAR_4;
  VAR_36 |= VAR_31->drv_strength << VAR_5;
  FUNC_3(VAR_31->base, VAR_16, VAR_35, VAR_36);

  FUNC_3(VAR_31->base, VAR_16, VAR_6,
       0x1 << VAR_7);




  VAR_37 = FUNC_2(VAR_31->base, VAR_19,
            VAR_36, VAR_36 & VAR_1, 1000,
            1000000);
  if (VAR_37) {
   FUNC_0(FUNC_1(VAR_28->mmc), "DLL failed to relock\n");
   return;
  }

  VAR_31->dll_on = 1;
 }
}
