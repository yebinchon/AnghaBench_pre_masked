
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_desc_info {int alloc; } ;
struct ksz_hw {struct ksz_desc_info rx_desc_info; } ;
struct ksz_dma_buf {int len; int dma; scalar_t__ skb; } ;
struct ksz_desc {int dummy; } ;
struct dev_info {int pdev; int mtu; struct ksz_hw hw; } ;


 struct ksz_dma_buf* FUNC_0 (struct ksz_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dev_info*,struct ksz_dma_buf*,int ) ;
 int FUNC_3 (struct ksz_desc_info*,struct ksz_desc**) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct ksz_desc*) ;
 int FUNC_6 (struct ksz_desc*,int ) ;
 int FUNC_7 (struct ksz_desc*,int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct dev_info *VAR_2)
{
 int VAR_3;
 struct ksz_desc *VAR_4;
 struct ksz_dma_buf *VAR_5;
 struct ksz_hw *VAR_6 = &VAR_2->hw;
 struct ksz_desc_info *VAR_7 = &VAR_6->rx_desc_info;

 for (VAR_3 = 0; VAR_3 < VAR_6->rx_desc_info.alloc; VAR_3++) {
  FUNC_3(VAR_7, &VAR_4);

  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5->skb && VAR_5->len != VAR_2->mtu)
   FUNC_2(VAR_2, VAR_5, VAR_1);
  VAR_5->len = VAR_2->mtu;
  if (!VAR_5->skb)
   VAR_5->skb = FUNC_1(VAR_5->len, VAR_0);
  if (VAR_5->skb && !VAR_5->dma)
   VAR_5->dma = FUNC_4(
    VAR_2->pdev,
    FUNC_8(VAR_5->skb),
    VAR_5->len,
    VAR_1);


  FUNC_6(VAR_4, VAR_5->dma);
  FUNC_7(VAR_4, VAR_5->len);
  FUNC_5(VAR_4);
 }
}
