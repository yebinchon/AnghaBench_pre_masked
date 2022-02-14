
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_pci {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl8192_tx_ring {int entries; int cur_tx_wp; int cur_tx_rp; } ;
struct ieee80211_hw {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_4__ {TYPE_1__* mod_params; } ;
struct TYPE_3__ {int dma64; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int) ;
 struct rtl_pci* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int ) ;

void FUNC_16(struct ieee80211_hw *VAR_3, u8 *VAR_4, bool VAR_5,
        u8 VAR_6, u8 *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_5(VAR_3);
 u8 VAR_9 = *VAR_7;
 bool VAR_10 = VAR_8->cfg->mod_params->dma64;
 __le32 *VAR_11 = (__le32 *)VAR_4;

 if (VAR_5) {
  switch (VAR_6) {
  case 128:
   FUNC_15(VAR_11, *(u32 *)VAR_7);
   break;
  case 131:{
   struct rtl_pci *VAR_12 = FUNC_3(FUNC_4(VAR_3));
   struct rtl8192_tx_ring *VAR_13 = &VAR_12->tx_ring[VAR_9];
   u16 VAR_14 = VAR_13->entries;

   if (VAR_9 == VAR_0) {
    VAR_13->cur_tx_wp = 0;
    VAR_13->cur_tx_rp = 0;
    FUNC_14(VAR_11, 1);
    return;
   }


   VAR_13->cur_tx_wp = ((VAR_13->cur_tx_wp + 1) % VAR_14);

   FUNC_6(VAR_8,
           FUNC_2(VAR_9),
           VAR_13->cur_tx_wp);
  }
  break;
  }
 } else {
  switch (VAR_6) {
  case 129:
   FUNC_9(VAR_11, 0);
   FUNC_8(VAR_11, 0);
   FUNC_10(VAR_11, 0);

   FUNC_7(VAR_11,
             VAR_1 +
             VAR_2);

   FUNC_12(VAR_11, (*(dma_addr_t *)VAR_7) &
         FUNC_0(32));
   FUNC_11(VAR_11,
          ((u64)(*(dma_addr_t *)VAR_7)
          >> 32),
          VAR_10);
   break;
  case 130:
   FUNC_13(VAR_11, 1);
   break;
  default:
   FUNC_1(1,
      "rtl8192ee: ERR rxdesc :%d not processed\n",
      VAR_6);
   break;
  }
 }
}
