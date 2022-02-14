
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct tls12_crypto_info_aes_gcm_128 {char* rec_seq; } ;
struct mlx5e_txqsq {int dummy; } ;
struct mlx5e_ktls_offload_context_tx {struct tls12_crypto_info_aes_gcm_128 crypto_info; } ;
typedef int __be64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (struct mlx5e_txqsq*,struct mlx5e_ktls_offload_context_tx*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct mlx5e_txqsq *VAR_0,
        struct mlx5e_ktls_offload_context_tx *VAR_1,
        u64 VAR_2)
{
 struct tls12_crypto_info_aes_gcm_128 *VAR_3 = &VAR_1->crypto_info;
 __be64 VAR_4 = FUNC_0(VAR_2);
 bool VAR_5;
 u16 VAR_6;
 char *VAR_7;

 VAR_7 = VAR_3->rec_seq;
 VAR_6 = sizeof(VAR_3->rec_seq);

 VAR_5 = !FUNC_1(VAR_7, &VAR_4, VAR_6);
 if (!VAR_5)
  FUNC_2(VAR_7, &VAR_4, VAR_6);

 FUNC_3(VAR_0, VAR_1, VAR_5, 1);
}
