
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8xxxu_priv {int* cck_tx_power_index_A; int* ht40_1s_tx_power_index_A; int tx_paths; int* cck_tx_power_index_B; int* ht40_1s_tx_power_index_B; TYPE_3__* ht20_tx_power_diff; TYPE_2__* ht40_tx_power_diff; TYPE_1__* ofdm_tx_power_diff; } ;
struct TYPE_6__ {scalar_t__ b; scalar_t__ a; } ;
struct TYPE_5__ {scalar_t__ b; scalar_t__ a; } ;
struct TYPE_4__ {scalar_t__ b; scalar_t__ a; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct rtl8xxxu_priv *VAR_15, int VAR_16, bool VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20;
 u8 VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25;

 VAR_25 = 0;
 VAR_24 = FUNC_0(VAR_16);

 VAR_21 = VAR_15->cck_tx_power_index_A[VAR_24];

 VAR_18 = FUNC_1(VAR_15, VAR_0);
 VAR_18 &= 0xffff00ff;
 VAR_18 |= (VAR_21 << 8);
 FUNC_2(VAR_15, VAR_0, VAR_18);

 VAR_18 = FUNC_1(VAR_15, VAR_7);
 VAR_18 &= 0xff;
 VAR_18 |= ((VAR_21 << 8) | (VAR_21 << 16) | (VAR_21 << 24));
 FUNC_2(VAR_15, VAR_7, VAR_18);

 VAR_22 = VAR_15->ht40_1s_tx_power_index_A[VAR_24];
 VAR_22 += VAR_15->ofdm_tx_power_diff[VAR_25].a;
 VAR_19 = VAR_22 | VAR_22 << 8 | VAR_22 << 16 | VAR_22 << 24;

 FUNC_2(VAR_15, VAR_5, VAR_19);
 FUNC_2(VAR_15, VAR_6, VAR_19);

 VAR_23 = VAR_15->ht40_1s_tx_power_index_A[VAR_24];
 if (VAR_17)
  VAR_23 += VAR_15->ht40_tx_power_diff[VAR_25++].a;
 else
  VAR_23 += VAR_15->ht20_tx_power_diff[VAR_25++].a;
 VAR_20 = VAR_23 | VAR_23 << 8 | VAR_23 << 16 | VAR_23 << 24;

 FUNC_2(VAR_15, VAR_1, VAR_20);
 FUNC_2(VAR_15, VAR_2, VAR_20);
 FUNC_2(VAR_15, VAR_3, VAR_20);
 FUNC_2(VAR_15, VAR_4, VAR_20);

 if (VAR_15->tx_paths > 1) {
  VAR_21 = VAR_15->cck_tx_power_index_B[VAR_24];

  VAR_18 = FUNC_1(VAR_15, VAR_8);
  VAR_18 &= 0xff;
  VAR_18 |= ((VAR_21 << 8) | (VAR_21 << 16) | (VAR_21 << 24));
  FUNC_2(VAR_15, VAR_8, VAR_18);

  VAR_18 = FUNC_1(VAR_15, VAR_7);
  VAR_18 &= 0xffffff00;
  VAR_18 |= VAR_21;
  FUNC_2(VAR_15, VAR_7, VAR_18);

  VAR_22 = VAR_15->ht40_1s_tx_power_index_B[VAR_24];
  VAR_22 += VAR_15->ofdm_tx_power_diff[VAR_25].b;
  VAR_19 = VAR_22 | VAR_22 << 8 |
   VAR_22 << 16 | VAR_22 << 24;

  FUNC_2(VAR_15, VAR_13, VAR_19);
  FUNC_2(VAR_15, VAR_14, VAR_19);

  VAR_23 = VAR_15->ht40_1s_tx_power_index_B[VAR_24];
  if (VAR_17)
   VAR_23 += VAR_15->ht40_tx_power_diff[VAR_25++].b;
  else
   VAR_23 += VAR_15->ht20_tx_power_diff[VAR_25++].b;
  VAR_20 = VAR_23 | VAR_23 << 8 | VAR_23 << 16 | VAR_23 << 24;

  FUNC_2(VAR_15, VAR_9, VAR_20);
  FUNC_2(VAR_15, VAR_10, VAR_20);
  FUNC_2(VAR_15, VAR_11, VAR_20);
  FUNC_2(VAR_15, VAR_12, VAR_20);
 }
}
