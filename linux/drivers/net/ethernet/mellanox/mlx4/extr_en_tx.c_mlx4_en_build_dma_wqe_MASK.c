
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct skb_shared_info {int nr_frags; int * frags; } ;
struct sk_buff {scalar_t__ data; } ;
struct mlx4_wqe_data_seg {void* byte_count; void* addr; void* lkey; } ;
struct mlx4_en_tx_info {scalar_t__ map0_byte_count; int map0_dma; scalar_t__ linear; } ;
struct mlx4_en_priv {struct device* ddev; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct device*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct mlx4_en_priv*,char*) ;
 int FUNC_9 (struct device*,int const*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_12(struct mlx4_en_priv *VAR_2,
      struct skb_shared_info *VAR_3,
      struct mlx4_wqe_data_seg *VAR_4,
      struct sk_buff *VAR_5,
      int VAR_6,
      __be32 VAR_7,
      struct mlx4_en_tx_info *VAR_8)
{
 struct device *VAR_9 = VAR_2->ddev;
 dma_addr_t VAR_10 = 0;
 u32 VAR_11 = 0;
 int VAR_12;


 for (VAR_12 = VAR_3->nr_frags - 1; VAR_12 >= 0; VAR_12--) {
  const skb_frag_t *VAR_13 = &VAR_3->frags[VAR_12];
  VAR_11 = FUNC_10(VAR_13);
  VAR_10 = FUNC_9(VAR_9, VAR_13,
           0, VAR_11,
           VAR_0);
  if (FUNC_5(VAR_9, VAR_10))
   goto tx_drop_unmap;

  VAR_4->addr = FUNC_3(VAR_10);
  VAR_4->lkey = VAR_7;
  FUNC_7();
  VAR_4->byte_count = FUNC_2(VAR_11);
  --VAR_4;
 }


 if (VAR_8->linear) {
  VAR_11 = FUNC_11(VAR_5) - VAR_6;

  VAR_10 = FUNC_4(VAR_9, VAR_5->data +
         VAR_6, VAR_11,
         VAR_1);
  if (FUNC_5(VAR_9, VAR_10))
   goto tx_drop_unmap;

  VAR_4->addr = FUNC_3(VAR_10);
  VAR_4->lkey = VAR_7;
  FUNC_7();
  VAR_4->byte_count = FUNC_2(VAR_11);
 }

 VAR_8->map0_dma = VAR_10;
 VAR_8->map0_byte_count = VAR_11;

 return 1;

tx_drop_unmap:
 FUNC_8(VAR_2, "DMA mapping error\n");

 while (++VAR_12 < VAR_3->nr_frags) {
  ++VAR_4;
  FUNC_6(VAR_9, (dma_addr_t)FUNC_1(VAR_4->addr),
          FUNC_0(VAR_4->byte_count),
          VAR_1);
 }

 return 0;
}
