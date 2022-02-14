
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_2__ {void (* txpwrrecalc ) (struct brcms_phy*) ;} ;
struct brcms_phy {int mcs40_po; int mcs20_po; size_t* tx_user_target; size_t* txpwr_limit; int txpwr_percent; size_t* txpwr_env_limit; size_t* tx_power_offset; size_t tx_power_max; size_t tx_power_min; size_t tx_power_max_rate_ind; size_t* tx_power_target; TYPE_1__ pi_fptr; int hwpwrctrl; scalar_t__ user_txpwr_at_rfport; scalar_t__ tx_srom_max_2g; scalar_t__* tx_srom_max_rate_2g; int radio_chanspec; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct brcms_phy*) ;
 scalar_t__ FUNC_5 (struct brcms_phy*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (size_t,size_t) ;
 int FUNC_8 (size_t*,int ,int) ;
 size_t FUNC_9 (size_t,size_t) ;
 void FUNC_10 (struct brcms_phy*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct brcms_phy_pub*,int ,size_t*,size_t*,size_t) ;
 int FUNC_13 (struct brcms_phy*,int) ;
 scalar_t__ FUNC_14 (struct brcms_phy*,int ,int,size_t) ;

void FUNC_15(struct brcms_phy *VAR_6)
{
 u8 VAR_7, VAR_8, VAR_9, VAR_10;
 uint VAR_11;
 u8 VAR_12[VAR_3];
 u8 VAR_13 = 0;
 u8 VAR_14 = 255;
 u8 VAR_15 = 0;
 u8 VAR_16;
 u8 VAR_17 = 0;
 u16 VAR_18;
 u32 VAR_19 = FUNC_0(VAR_6->radio_chanspec);
 void (*VAR_20)(struct brcms_phy *) = ((void*)0);

 VAR_18 = VAR_6->radio_chanspec;
 if (FUNC_2(VAR_18) == VAR_4)
  VAR_11 = FUNC_1(VAR_18);
 else if (FUNC_2(VAR_18) == VAR_5)
  VAR_11 = FUNC_11(FUNC_1(VAR_18));
 else
  VAR_11 = FUNC_6(FUNC_1(VAR_18));

 VAR_10 = 0;
 if (FUNC_4(VAR_6)) {
  u32 VAR_21, VAR_22;

  if (FUNC_3(VAR_6->radio_chanspec)) {
   VAR_21 = VAR_6->mcs40_po;
   for (VAR_22 = VAR_0;
        VAR_22 <= VAR_2; VAR_22++) {
    VAR_6->tx_srom_max_rate_2g[VAR_22 - 8] =
     VAR_6->tx_srom_max_2g -
     ((VAR_21 & 0xf) * 2);
    VAR_21 >>= 4;
   }
  } else {
   VAR_21 = VAR_6->mcs20_po;
   for (VAR_22 = VAR_0;
        VAR_22 <= VAR_2; VAR_22++) {
    VAR_6->tx_srom_max_rate_2g[VAR_22 - 8] =
     VAR_6->tx_srom_max_2g -
     ((VAR_21 & 0xf) * 2);
    VAR_21 >>= 4;
   }
  }
 }

 VAR_16 = ((FUNC_5(VAR_6)) ? (VAR_3) :
   ((FUNC_4(VAR_6)) ?
    (VAR_2 + 1) : (VAR_1 + 1)));

 FUNC_13(VAR_6, VAR_19);

 for (VAR_9 = VAR_17; VAR_9 < VAR_16; VAR_9++) {

  VAR_12[VAR_9] = VAR_6->tx_user_target[VAR_9];

  if (VAR_6->user_txpwr_at_rfport)
   VAR_12[VAR_9] +=
    FUNC_14(VAR_6,
         VAR_11,
         VAR_19,
         VAR_9);

  FUNC_12((struct brcms_phy_pub *) VAR_6,
       VAR_11,
       &VAR_8, &VAR_7, VAR_9);

  VAR_7 = FUNC_9(VAR_7, VAR_6->txpwr_limit[VAR_9]);

  VAR_7 = (VAR_7 > VAR_10) ? (VAR_7 - VAR_10) : 0;

  VAR_7 = (VAR_7 > 6) ? (VAR_7 - 6) : 0;

  VAR_7 = FUNC_9(VAR_7, VAR_12[VAR_9]);

  if (VAR_6->txpwr_percent <= 100)
   VAR_7 = (VAR_7 * VAR_6->txpwr_percent) / 100;

  VAR_12[VAR_9] = FUNC_7(VAR_7, VAR_8);

  VAR_12[VAR_9] =
   FUNC_9(VAR_12[VAR_9], VAR_6->txpwr_env_limit[VAR_9]);

  if (VAR_12[VAR_9] > VAR_13)
   VAR_15 = VAR_9;

  VAR_13 = FUNC_7(VAR_13, VAR_12[VAR_9]);
  VAR_14 = FUNC_9(VAR_14, VAR_12[VAR_9]);
 }

 FUNC_8(VAR_6->tx_power_offset, 0, sizeof(VAR_6->tx_power_offset));
 VAR_6->tx_power_max = VAR_13;
 VAR_6->tx_power_min = VAR_14;
 VAR_6->tx_power_max_rate_ind = VAR_15;
 for (VAR_9 = 0; VAR_9 < VAR_16; VAR_9++) {

  VAR_6->tx_power_target[VAR_9] = VAR_12[VAR_9];

  if (!VAR_6->hwpwrctrl || FUNC_5(VAR_6))
   VAR_6->tx_power_offset[VAR_9] =
    VAR_6->tx_power_max - VAR_6->tx_power_target[VAR_9];
  else
   VAR_6->tx_power_offset[VAR_9] =
    VAR_6->tx_power_target[VAR_9] - VAR_6->tx_power_min;
 }

 VAR_20 = VAR_6->pi_fptr.txpwrrecalc;
 if (VAR_20)
  (*VAR_20)(VAR_6);
}
