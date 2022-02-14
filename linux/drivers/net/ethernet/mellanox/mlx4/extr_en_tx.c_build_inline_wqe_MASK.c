
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int * frags; scalar_t__ nr_frags; } ;
struct sk_buff {int len; } ;
struct mlx4_wqe_inline_seg {void* byte_count; } ;
struct mlx4_en_tx_desc {struct mlx4_wqe_inline_seg inl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (struct sk_buff const*,struct mlx4_wqe_inline_seg*,int) ;
 int FUNC_6 (struct sk_buff const*,int,struct mlx4_wqe_inline_seg*,unsigned int) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_9(struct mlx4_en_tx_desc *VAR_3,
        const struct sk_buff *VAR_4,
        const struct skb_shared_info *VAR_5,
        void *VAR_6)
{
 struct mlx4_wqe_inline_seg *VAR_7 = &VAR_3->inl;
 int VAR_8 = VAR_2 - VAR_0 - sizeof(*VAR_7);
 unsigned int VAR_9 = FUNC_8(VAR_4);

 if (VAR_4->len <= VAR_8) {
  if (FUNC_2(VAR_4->len >= VAR_1)) {
   VAR_7->byte_count = FUNC_0(1 << 31 | VAR_4->len);
  } else {
   VAR_7->byte_count = FUNC_0(1 << 31 | VAR_1);
   FUNC_4(((void *)(VAR_7 + 1)) + VAR_4->len, 0,
          VAR_1 - VAR_4->len);
  }
  FUNC_5(VAR_4, VAR_7 + 1, VAR_9);
  if (VAR_5->nr_frags)
   FUNC_3(((void *)(VAR_7 + 1)) + VAR_9, VAR_6,
          FUNC_7(&VAR_5->frags[0]));

 } else {
  VAR_7->byte_count = FUNC_0(1 << 31 | VAR_8);
  if (VAR_9 <= VAR_8) {
   FUNC_5(VAR_4, VAR_7 + 1, VAR_9);
   if (VAR_9 < VAR_8) {
    FUNC_3(((void *)(VAR_7 + 1)) + VAR_9,
           VAR_6, VAR_8 - VAR_9);
    VAR_6 += VAR_8 - VAR_9;
   }
   VAR_7 = (void *) (VAR_7 + 1) + VAR_8;
   FUNC_3(((void *)(VAR_7 + 1)), VAR_6, VAR_4->len - VAR_8);
  } else {
   FUNC_5(VAR_4, VAR_7 + 1, VAR_8);
   VAR_7 = (void *) (VAR_7 + 1) + VAR_8;
   FUNC_6(VAR_4, VAR_8, VAR_7 + 1,
        VAR_9 - VAR_8);
   if (VAR_5->nr_frags)
    FUNC_3(((void *)(VAR_7 + 1)) + VAR_9 - VAR_8,
           VAR_6,
           FUNC_7(&VAR_5->frags[0]));
  }

  FUNC_1();
  VAR_7->byte_count = FUNC_0(1 << 31 | (VAR_4->len - VAR_8));
 }
}
