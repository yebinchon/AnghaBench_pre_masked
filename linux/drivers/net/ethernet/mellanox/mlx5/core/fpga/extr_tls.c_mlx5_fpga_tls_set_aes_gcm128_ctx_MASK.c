
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_crypto_info {int dummy; } ;
struct tls12_crypto_info_aes_gcm_128 {int key; int salt; int rec_seq; } ;
typedef int __be64 ;


 scalar_t__ FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(void *VAR_9,
          struct tls_crypto_info *VAR_10,
          __be64 *VAR_11)
{
 struct tls12_crypto_info_aes_gcm_128 *VAR_12 =
     (struct tls12_crypto_info_aes_gcm_128 *)VAR_10;

 FUNC_2(FUNC_0(VAR_6, VAR_9, VAR_8), VAR_12->rec_seq,
        VAR_2);

 FUNC_2(FUNC_0(VAR_6, VAR_9, VAR_7),
        VAR_12->salt, VAR_3);
 FUNC_2(FUNC_0(VAR_6, VAR_9, VAR_5),
        VAR_12->key, VAR_1);


 FUNC_2(FUNC_0(VAR_6, VAR_9, VAR_5) +
     VAR_1,
        VAR_12->key, VAR_1);

 FUNC_1(VAR_6, VAR_9, VAR_4, VAR_0);
}
