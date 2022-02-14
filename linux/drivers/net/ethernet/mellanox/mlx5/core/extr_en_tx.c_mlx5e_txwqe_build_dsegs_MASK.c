
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct mlx5e_txqsq {int mkey_be; int pdev; } ;
struct mlx5_wqe_data_seg {void* byte_count; int lkey; void* addr; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlx5e_txqsq*,int ,int,int ) ;
 int FUNC_5 (struct mlx5e_txqsq*,int) ;
 int FUNC_6 (int ,int *,int ,int,int ) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static inline int
FUNC_10(struct mlx5e_txqsq *VAR_4, struct sk_buff *VAR_5,
   unsigned char *VAR_6, u16 VAR_7,
   struct mlx5_wqe_data_seg *VAR_8)
{
 dma_addr_t VAR_9 = 0;
 u8 VAR_10 = 0;
 int VAR_11;

 if (VAR_7) {
  VAR_9 = FUNC_2(VAR_4->pdev, VAR_6, VAR_7,
       VAR_0);
  if (FUNC_9(FUNC_3(VAR_4->pdev, VAR_9)))
   goto dma_unmap_wqe_err;

  VAR_8->addr = FUNC_1(VAR_9);
  VAR_8->lkey = VAR_4->mkey_be;
  VAR_8->byte_count = FUNC_0(VAR_7);

  FUNC_4(VAR_4, VAR_9, VAR_7, VAR_3);
  VAR_10++;
  VAR_8++;
 }

 for (VAR_11 = 0; VAR_11 < FUNC_8(VAR_5)->nr_frags; VAR_11++) {
  skb_frag_t *VAR_12 = &FUNC_8(VAR_5)->frags[VAR_11];
  int VAR_13 = FUNC_7(VAR_12);

  VAR_9 = FUNC_6(VAR_4->pdev, VAR_12, 0, VAR_13,
         VAR_0);
  if (FUNC_9(FUNC_3(VAR_4->pdev, VAR_9)))
   goto dma_unmap_wqe_err;

  VAR_8->addr = FUNC_1(VAR_9);
  VAR_8->lkey = VAR_4->mkey_be;
  VAR_8->byte_count = FUNC_0(VAR_13);

  FUNC_4(VAR_4, VAR_9, VAR_13, VAR_2);
  VAR_10++;
  VAR_8++;
 }

 return VAR_10;

dma_unmap_wqe_err:
 FUNC_5(VAR_4, VAR_10);
 return -VAR_1;
}
