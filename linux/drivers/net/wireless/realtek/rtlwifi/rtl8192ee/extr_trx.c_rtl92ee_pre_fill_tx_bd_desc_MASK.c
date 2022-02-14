
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct TYPE_8__ {scalar_t__ earlymode_enable; } ;
struct rtl_priv {TYPE_4__ rtlhal; TYPE_2__* cfg; } ;
struct rtl_pci {TYPE_3__* tx_ring; } ;
struct ieee80211_hw {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;
struct TYPE_7__ {int cur_tx_wp; scalar_t__ dma; } ;
struct TYPE_6__ {TYPE_1__* mod_params; } ;
struct TYPE_5__ {int dma64; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int,int,int) ;
 int FUNC_12 (int *,int,scalar_t__) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int,int) ;

void FUNC_15(struct ieee80211_hw *VAR_3,
     u8 *VAR_4, u8 *VAR_5, u8 VAR_6,
     struct sk_buff *VAR_7, dma_addr_t VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_3(VAR_3);
 struct rtl_pci *VAR_10 = FUNC_1(FUNC_2(VAR_3));
 u32 VAR_11 = VAR_7->len;
 u16 VAR_12 = 40;
 u32 VAR_13 = 0;
 u16 VAR_14;
 u32 VAR_15;
 u16 VAR_16;
 u8 VAR_17;
 u16 VAR_18 = 0x28;
 u16 VAR_19 = 0;
 u8 VAR_20 = 1 << (VAR_1 + 1);
 dma_addr_t VAR_21;
 bool VAR_22 = VAR_9->cfg->mod_params->dma64;
 __le32 *VAR_23 = (__le32 *)VAR_5;
 __le32 *VAR_24 = (__le32 *)VAR_4;

 VAR_14 = 2;
 VAR_16 = VAR_10->tx_ring[VAR_6].cur_tx_wp;

 VAR_15 = VAR_12+VAR_11;

 if (VAR_9->rtlhal.earlymode_enable) {
  if (VAR_6 < VAR_0) {
   VAR_19 = 8;
   VAR_15 += VAR_19;
  }
 }

 if (VAR_14 > 0) {
  VAR_13 = (VAR_11 + VAR_18 + VAR_19) /
    (VAR_14 * 128);

  if (VAR_13 * (VAR_14 * 128) < VAR_15)
   VAR_13 += 1;
 }


 VAR_21 = VAR_10->tx_ring[VAR_6].dma +
   (VAR_16 * VAR_2);


 FUNC_6(VAR_24, 0);
 FUNC_8(VAR_24, 0);
 FUNC_7(VAR_24, 0);

 for (VAR_17 = 1; VAR_17 < VAR_20; VAR_17++) {
  FUNC_14(VAR_24, VAR_17, 0);
  FUNC_13(VAR_24, VAR_17, 0);
  FUNC_12(VAR_24, VAR_17, 0);
  FUNC_11(VAR_24, VAR_17, 0, VAR_22);
 }


 FUNC_0(VAR_23, VAR_2);

 if (VAR_9->rtlhal.earlymode_enable) {
  if (VAR_6 < VAR_0) {

   FUNC_6(VAR_24, VAR_12 + 8);
  } else {
   FUNC_6(VAR_24, VAR_12);
  }
 } else {
  FUNC_6(VAR_24, VAR_12);
 }
 FUNC_8(VAR_24, VAR_13);
 FUNC_5(VAR_24, VAR_21);
 FUNC_4(VAR_24, ((u64)VAR_21 >> 32),
         VAR_22);

 FUNC_14(VAR_24, 1, VAR_11);

 FUNC_13(VAR_24, 1, 0);
 FUNC_12(VAR_24, 1, VAR_8);
 FUNC_11(VAR_24, 1,
            ((u64)VAR_8 >> 32), VAR_22);

 FUNC_9(VAR_23, (u16)(VAR_11));
 FUNC_10(VAR_23, (u16)(VAR_11));
}
