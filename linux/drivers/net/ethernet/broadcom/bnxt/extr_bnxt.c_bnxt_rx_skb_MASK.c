
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct bnxt_rx_ring_info {int rx_prod; } ;
struct bnxt {int rx_offset; int rx_dir; int rx_buf_use_size; TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct bnxt_rx_ring_info*,int ,int ) ;
 int FUNC_1 (struct bnxt_rx_ring_info*,int ,void*) ;
 struct sk_buff* FUNC_2 (void*,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct bnxt *VAR_2,
       struct bnxt_rx_ring_info *VAR_3, u16 VAR_4,
       void *VAR_5, u8 *VAR_6,
       dma_addr_t VAR_7,
       unsigned int VAR_8)
{
 u16 VAR_9 = VAR_3->rx_prod;
 struct sk_buff *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_9, VAR_1);
 if (FUNC_7(VAR_11)) {
  FUNC_1(VAR_3, VAR_4, VAR_5);
  return ((void*)0);
 }

 VAR_10 = FUNC_2(VAR_5, 0);
 FUNC_3(&VAR_2->pdev->dev, VAR_7, VAR_2->rx_buf_use_size,
          VAR_2->rx_dir, VAR_0);
 if (!VAR_10) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 FUNC_6(VAR_10, VAR_2->rx_offset);
 FUNC_5(VAR_10, VAR_8 & 0xffff);
 return VAR_10;
}
