
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tx_sync_info {int sync_len; int nr_frags; int * frags; int rcd_sn; } ;
struct tls_record_info {int * frags; } ;
struct tls_offload_context_tx {int lock; } ;
struct mlx5e_ktls_offload_context_tx {struct tls_offload_context_tx* tx_ctx; } ;
typedef int skb_frag_t ;
typedef enum mlx5e_ktls_sync_retval { ____Placeholder_mlx5e_ktls_sync_retval } mlx5e_ktls_sync_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct tls_record_info* FUNC_6 (struct tls_offload_context_tx*,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (struct tls_record_info*) ;
 scalar_t__ FUNC_8 (struct tls_record_info*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static enum mlx5e_ktls_sync_retval
FUNC_10(struct mlx5e_ktls_offload_context_tx *VAR_3,
   u32 VAR_4, struct tx_sync_info *VAR_5)
{
 struct tls_offload_context_tx *VAR_6 = VAR_3->tx_ctx;
 enum mlx5e_ktls_sync_retval VAR_7 = VAR_0;
 struct tls_record_info *VAR_8;
 int VAR_9, VAR_10 = 0;
 unsigned long VAR_11;

 FUNC_4(&VAR_6->lock, VAR_11);
 VAR_8 = FUNC_6(VAR_6, VAR_4, &VAR_5->rcd_sn);

 if (FUNC_9(!VAR_8)) {
  VAR_7 = VAR_1;
  goto out;
 }

 if (FUNC_9(VAR_4 < FUNC_8(VAR_8))) {
  VAR_7 = FUNC_7(VAR_8) ?
   VAR_2 : VAR_1;
  goto out;
 }

 VAR_5->sync_len = VAR_4 - FUNC_8(VAR_8);
 VAR_9 = VAR_5->sync_len;
 while (VAR_9 > 0) {
  skb_frag_t *VAR_12 = &VAR_8->frags[VAR_10];

  FUNC_0(FUNC_1(VAR_12));
  VAR_9 -= FUNC_2(VAR_12);
  VAR_5->frags[VAR_10++] = *VAR_12;
 }

 if (VAR_9 < 0)
  FUNC_3(&VAR_5->frags[VAR_10 - 1], VAR_9);
 VAR_5->nr_frags = VAR_10;
out:
 FUNC_5(&VAR_6->lock, VAR_11);
 return VAR_7;
}
