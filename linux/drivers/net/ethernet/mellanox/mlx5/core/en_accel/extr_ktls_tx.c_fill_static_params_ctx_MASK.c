
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tls12_crypto_info_aes_gcm_128 {int dummy; } ;
struct mlx5e_ktls_offload_context_tx {int key_id; struct tls12_crypto_info_aes_gcm_128 crypto_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,void*,char*) ;
 int FUNC_1 (int ,void*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (char*,char*,int ) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_3(void *VAR_9, struct mlx5e_ktls_offload_context_tx *VAR_10)
{
 struct tls12_crypto_info_aes_gcm_128 *VAR_11 = &VAR_10->crypto_info;
 char *VAR_12, *VAR_13;
 u16 VAR_14, VAR_15;
 char *VAR_16, *VAR_17;
 u8 VAR_18;

 VAR_0;

 VAR_13 = FUNC_0(VAR_8, VAR_9, VAR_13);
 VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_7);

 FUNC_2(VAR_13, VAR_16, VAR_14);
 FUNC_2(VAR_12, VAR_17, VAR_15);

 VAR_18 = VAR_2;

 FUNC_1(VAR_8, VAR_9, VAR_18, VAR_18);
 FUNC_1(VAR_8, VAR_9, VAR_3, 1);
 FUNC_1(VAR_8, VAR_9, VAR_4, 2);
 FUNC_1(VAR_8, VAR_9, VAR_6,
   VAR_1);
 FUNC_1(VAR_8, VAR_9, VAR_5, VAR_10->key_id);
}
