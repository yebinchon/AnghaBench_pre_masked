
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {int users; } ;
struct mlx4_wqe_data_seg {int byte_count; int addr; } ;
struct mlx4_en_tx_ring {int buf_size; struct mlx4_wqe_data_seg* buf; struct mlx4_en_tx_info* tx_info; } ;
struct mlx4_en_tx_info {int data_offset; int nr_maps; int nr_txbb; int map0_byte_count; int map0_dma; scalar_t__ linear; int inl; struct sk_buff* skb; } ;
struct mlx4_en_tx_desc {int byte_count; int addr; } ;
struct mlx4_en_priv {int ddev; int mdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,struct skb_shared_hwtstamps*,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 scalar_t__ FUNC_9 (int ) ;

u32 FUNC_10(struct mlx4_en_priv *VAR_2,
    struct mlx4_en_tx_ring *VAR_3,
    int VAR_4, u64 VAR_5,
    int VAR_6)
{
 struct mlx4_en_tx_info *VAR_7 = &VAR_3->tx_info[VAR_4];
 struct mlx4_en_tx_desc *VAR_8 = VAR_3->buf + (VAR_4 << VAR_0);
 struct mlx4_wqe_data_seg *VAR_9 = (void *) VAR_8 + VAR_7->data_offset;
 void *VAR_10 = VAR_3->buf + VAR_3->buf_size;
 struct sk_buff *VAR_11 = VAR_7->skb;
 int VAR_12 = VAR_7->nr_maps;
 int VAR_13;




 FUNC_7(&VAR_11->users);

 if (FUNC_9(VAR_5)) {
  struct skb_shared_hwtstamps VAR_14;

  FUNC_5(VAR_2->mdev, &VAR_14, VAR_5);
  FUNC_8(VAR_11, &VAR_14);
 }

 if (!VAR_7->inl) {
  if (VAR_7->linear)
   FUNC_3(VAR_2->ddev,
      VAR_7->map0_dma,
      VAR_7->map0_byte_count,
      VAR_1);
  else
   FUNC_2(VAR_2->ddev,
           VAR_7->map0_dma,
           VAR_7->map0_byte_count,
           VAR_1);

  if (FUNC_4((void *)VAR_8 +
      (VAR_7->nr_txbb << VAR_0) <= VAR_10)) {
   for (VAR_13 = 1; VAR_13 < VAR_12; VAR_13++) {
    VAR_9++;
    FUNC_2(VAR_2->ddev,
     (dma_addr_t)FUNC_1(VAR_9->addr),
     FUNC_0(VAR_9->byte_count),
     VAR_1);
   }
  } else {
   if ((void *)VAR_9 >= VAR_10)
    VAR_9 = VAR_3->buf + ((void *)VAR_9 - VAR_10);

   for (VAR_13 = 1; VAR_13 < VAR_12; VAR_13++) {
    VAR_9++;

    if ((void *) VAR_9 >= VAR_10)
     VAR_9 = VAR_3->buf;
    FUNC_2(VAR_2->ddev,
     (dma_addr_t)FUNC_1(VAR_9->addr),
     FUNC_0(VAR_9->byte_count),
     VAR_1);
   }
  }
 }
 FUNC_6(VAR_11, VAR_6);

 return VAR_7->nr_txbb;
}
