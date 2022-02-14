
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {int btxpower_trackingInit; scalar_t__ OFDM_index; scalar_t__ CCK_index; scalar_t__* ThermalMeter; scalar_t__ CurrentChannelBW; int bcck_in_ch14; scalar_t__ txpower_count; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ current_network; } ;


 scalar_t__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct net_device*,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_4 (struct net_device*,int ,int,int) ;
 int FUNC_5 (struct net_device*,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_12)
{

 struct r8192_priv *VAR_13 = FUNC_2(VAR_12);
 u32 VAR_14, VAR_15;
 u8 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0, VAR_22 = 0;

 if (!VAR_13->btxpower_trackingInit) {

  VAR_14 = FUNC_3(VAR_12, VAR_11, VAR_9);
  for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++) {
   if (VAR_14 == VAR_4[VAR_21]) {
    VAR_13->OFDM_index = (u8)VAR_21;
    FUNC_0(VAR_2, "Initial reg0x%x = 0x%x, OFDM_index=0x%x\n",
     VAR_11, VAR_14, VAR_13->OFDM_index);
   }
  }


  VAR_15 = FUNC_3(VAR_12, VAR_10, VAR_8);
  for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++) {
   if (VAR_15 == (u32)VAR_0[VAR_21][0]) {
    VAR_13->CCK_index = (u8) VAR_21;
    FUNC_0(VAR_2, "Initial reg0x%x = 0x%x, CCK_index=0x%x\n",
     VAR_10, VAR_15, VAR_13->CCK_index);
    break;
   }
  }
  VAR_13->btxpower_trackingInit = 1;

  return;
 }







 VAR_14 = FUNC_4(VAR_12, VAR_6, 0x12, 0x078);
 FUNC_0(VAR_2, "Readback ThermalMeterA = %d\n", VAR_14);
 if (VAR_14 < 3 || VAR_14 > 13)
  return;
 if (VAR_14 >= 12)
  VAR_14 = 12;
 FUNC_0(VAR_2, "Valid ThermalMeterA = %d\n", VAR_14);
 VAR_13->ThermalMeter[0] = 9;
 VAR_13->ThermalMeter[1] = 9;


 if (VAR_13->ThermalMeter[0] >= (u8)VAR_14) {
  VAR_16 = VAR_18 = 6+(VAR_13->ThermalMeter[0]-(u8)VAR_14);
  VAR_19 = VAR_18 - 6;
  if (VAR_16 >= VAR_5)
   VAR_16 = VAR_5-1;
  if (VAR_18 >= VAR_1)
   VAR_18 = VAR_1-1;
  if (VAR_19 >= VAR_1)
   VAR_19 = VAR_1-1;
 } else {
  VAR_20 = (u8)VAR_14 - VAR_13->ThermalMeter[0];

  if (VAR_20 >= 6) {

   VAR_16 = 0;
   VAR_18 = 0;
  } else {

   VAR_16 = 6 - VAR_20;
   VAR_18 = 6 - VAR_20;
  }
  VAR_19 = 0;
 }



 if (VAR_13->CurrentChannelBW != VAR_3)
  VAR_17 = VAR_19;
 else
  VAR_17 = VAR_18;

 if (VAR_13->ieee80211->current_network.channel == 14 && !VAR_13->bcck_in_ch14) {
  VAR_13->bcck_in_ch14 = 1;
  VAR_22 = 1;
 } else if (VAR_13->ieee80211->current_network.channel != 14 && VAR_13->bcck_in_ch14) {
  VAR_13->bcck_in_ch14 = 0;
  VAR_22 = 1;
 }

 if (VAR_13->CCK_index != VAR_17) {
  VAR_13->CCK_index = VAR_17;
  VAR_22 = 1;
 }

 if (VAR_22) {

  FUNC_1(VAR_12, VAR_13->bcck_in_ch14);
 }
 if (VAR_13->OFDM_index != VAR_16) {
  VAR_13->OFDM_index = VAR_16;
  FUNC_5(VAR_12, VAR_11, VAR_9, VAR_4[VAR_13->OFDM_index]);
  FUNC_0(VAR_2, "Update OFDMSwing[%d] = 0x%x\n",
   VAR_13->OFDM_index, VAR_4[VAR_13->OFDM_index]);
 }
 VAR_13->txpower_count = 0;
}
