
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct b43legacy_rxhdr_fw3 {scalar_t__ frame_len; } ;
struct b43legacy_hwtxstatus {scalar_t__ cookie; } ;
struct b43legacy_dmaring {int rx_buffersize; int tx; } ;
struct b43legacy_dmadesc_meta {int dmaaddr; struct sk_buff* skb; } ;
struct b43legacy_dmadesc32 {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct b43legacy_dmaring*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct b43legacy_dmaring*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct b43legacy_dmaring*,struct b43legacy_dmadesc32*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct b43legacy_dmaring *VAR_3,
          struct b43legacy_dmadesc32 *VAR_4,
          struct b43legacy_dmadesc_meta *VAR_5,
          gfp_t VAR_6)
{
 struct b43legacy_rxhdr_fw3 *VAR_7;
 struct b43legacy_hwtxstatus *VAR_8;
 dma_addr_t VAR_9;
 struct sk_buff *VAR_10;

 FUNC_0(VAR_3->tx);

 VAR_10 = FUNC_1(VAR_3->rx_buffersize, VAR_6);
 if (FUNC_6(!VAR_10))
  return -VAR_1;
 VAR_9 = FUNC_4(VAR_3, VAR_10->data,
     VAR_3->rx_buffersize, 0);
 if (FUNC_2(VAR_3, VAR_9, VAR_3->rx_buffersize, 0)) {

  VAR_6 |= VAR_2;

  FUNC_3(VAR_10);

  VAR_10 = FUNC_1(VAR_3->rx_buffersize, VAR_6);
  if (FUNC_6(!VAR_10))
   return -VAR_1;
  VAR_9 = FUNC_4(VAR_3, VAR_10->data,
      VAR_3->rx_buffersize, 0);
 }

 if (FUNC_2(VAR_3, VAR_9, VAR_3->rx_buffersize, 0)) {
  FUNC_3(VAR_10);
  return -VAR_0;
 }

 VAR_5->skb = VAR_10;
 VAR_5->dmaaddr = VAR_9;
 FUNC_5(VAR_3, VAR_4, VAR_9, VAR_3->rx_buffersize, 0, 0, 0);

 VAR_7 = (struct b43legacy_rxhdr_fw3 *)(VAR_10->data);
 VAR_7->frame_len = 0;
 VAR_8 = (struct b43legacy_hwtxstatus *)(VAR_10->data);
 VAR_8->cookie = 0;

 return 0;
}
