
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8xxxu_priv {int* cck_tx_power_index_B; int* ht40_1s_tx_power_index_B; TYPE_3__* ht20_tx_power_diff; TYPE_2__* ht40_tx_power_diff; TYPE_1__* ofdm_tx_power_diff; } ;
struct TYPE_6__ {scalar_t__ b; } ;
struct TYPE_5__ {scalar_t__ b; } ;
struct TYPE_4__ {scalar_t__ b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct rtl8xxxu_priv *VAR_6, int VAR_7, bool VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 u8 VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_16 = 0;
 VAR_15 = FUNC_0(VAR_7);

 VAR_12 = VAR_6->cck_tx_power_index_B[VAR_15];
 VAR_9 = FUNC_1(VAR_6, VAR_0);
 VAR_9 &= 0xffff00ff;
 VAR_9 |= (VAR_12 << 8);
 FUNC_2(VAR_6, VAR_0, VAR_9);

 VAR_9 = FUNC_1(VAR_6, VAR_5);
 VAR_9 &= 0xff;
 VAR_9 |= ((VAR_12 << 8) | (VAR_12 << 16) | (VAR_12 << 24));
 FUNC_2(VAR_6, VAR_5, VAR_9);

 VAR_13 = VAR_6->ht40_1s_tx_power_index_B[VAR_15];
 VAR_13 += VAR_6->ofdm_tx_power_diff[VAR_16].b;
 VAR_10 = VAR_13 | VAR_13 << 8 | VAR_13 << 16 | VAR_13 << 24;

 FUNC_2(VAR_6, VAR_3, VAR_10);
 FUNC_2(VAR_6, VAR_4, VAR_10);

 VAR_14 = VAR_6->ht40_1s_tx_power_index_B[VAR_15];
 if (VAR_8)
  VAR_14 += VAR_6->ht40_tx_power_diff[VAR_16++].b;
 else
  VAR_14 += VAR_6->ht20_tx_power_diff[VAR_16++].b;
 VAR_11 = VAR_14 | VAR_14 << 8 | VAR_14 << 16 | VAR_14 << 24;

 FUNC_2(VAR_6, VAR_1, VAR_11);
 FUNC_2(VAR_6, VAR_2, VAR_11);
}
