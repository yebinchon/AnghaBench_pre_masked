
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ cb; int * data; } ;
struct rtw_rx_pkt_stat {int drv_info_sz; int shift; int pkt_len; int vif; scalar_t__ is_c2h; } ;
struct TYPE_4__ {int wp; int len; int rp; } ;
struct rtw_pci_rx_ring {TYPE_2__ r; struct sk_buff** buf; } ;
struct rtw_pci {struct rtw_pci_rx_ring* rx_rings; } ;
struct rtw_dev {int hw; int dev; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {int rx_pkt_desc_sz; int rx_buf_desc_sz; TYPE_1__* ops; } ;
struct ieee80211_rx_status {int dummy; } ;
typedef int rx_status ;
typedef int dma_addr_t ;
struct TYPE_3__ {int (* query_rx_desc ) (struct rtw_dev*,int *,struct rtw_rx_pkt_stat*,struct ieee80211_rx_status*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int,char*) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int FUNC_4 (scalar_t__,struct ieee80211_rx_status*,int) ;
 int FUNC_5 (struct rtw_dev*,int,struct sk_buff*) ;
 int FUNC_6 (struct rtw_dev*,struct rtw_pci_rx_ring*,int) ;
 int FUNC_7 (struct rtw_dev*,int ,struct rtw_pci_rx_ring*,int,int) ;
 int FUNC_8 (struct rtw_dev*,int ) ;
 int FUNC_9 (struct rtw_dev*,int ,struct sk_buff*) ;
 int FUNC_10 (struct rtw_dev*,int ,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,int *,int) ;
 int FUNC_13 (struct rtw_dev*,int *,struct rtw_rx_pkt_stat*,struct ieee80211_rx_status*) ;

__attribute__((used)) static void FUNC_14(struct rtw_dev *VAR_4, struct rtw_pci *VAR_5,
      u8 VAR_6)
{
 struct rtw_chip_info *VAR_7 = VAR_4->chip;
 struct rtw_pci_rx_ring *VAR_8;
 struct rtw_rx_pkt_stat VAR_9;
 struct ieee80211_rx_status VAR_10;
 struct sk_buff *VAR_11, *VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18 = VAR_7->rx_pkt_desc_sz;
 u32 VAR_19 = VAR_7->rx_buf_desc_sz;
 u32 VAR_20;
 u8 *VAR_21;
 dma_addr_t VAR_22;

 VAR_8 = &VAR_5->rx_rings[VAR_3];

 VAR_15 = FUNC_8(VAR_4, VAR_1);
 VAR_13 = VAR_15 >> 16;
 VAR_13 &= 0xfff;
 if (VAR_13 >= VAR_8->r.wp)
  VAR_16 = VAR_13 - VAR_8->r.wp;
 else
  VAR_16 = VAR_8->r.len - (VAR_8->r.wp - VAR_13);

 VAR_14 = VAR_8->r.rp;
 while (VAR_16--) {
  FUNC_6(VAR_4, VAR_8, VAR_14);
  VAR_11 = VAR_8->buf[VAR_14];
  VAR_22 = *((dma_addr_t *)VAR_11->cb);
  FUNC_2(VAR_4->dev, VAR_22, VAR_2,
     VAR_0);
  VAR_21 = VAR_11->data;
  VAR_7->ops->query_rx_desc(VAR_4, VAR_21, &VAR_9, &VAR_10);


  VAR_17 = VAR_18 + VAR_9.drv_info_sz +
        VAR_9.shift;




  VAR_20 = VAR_9.pkt_len + VAR_17;
  VAR_12 = FUNC_1(VAR_20);
  if (FUNC_0(!VAR_12, "rx routine starvation\n"))
   goto next_rp;


  FUNC_12(VAR_12, VAR_11->data, VAR_20);

  if (VAR_9.is_c2h) {
   FUNC_5(VAR_4, VAR_17, VAR_12);
  } else {

   FUNC_11(VAR_12, VAR_17);

   FUNC_9(VAR_4, VAR_9.vif, VAR_12);
   FUNC_4(VAR_12->cb, &VAR_10, sizeof(VAR_10));
   FUNC_3(VAR_4->hw, VAR_12);
  }

next_rp:

  FUNC_7(VAR_4, VAR_22, VAR_8, VAR_14,
         VAR_19);


  if (++VAR_14 >= VAR_8->r.len)
   VAR_14 = 0;
 }

 VAR_8->r.rp = VAR_14;
 VAR_8->r.wp = VAR_13;
 FUNC_10(VAR_4, VAR_1, VAR_8->r.rp);
}
