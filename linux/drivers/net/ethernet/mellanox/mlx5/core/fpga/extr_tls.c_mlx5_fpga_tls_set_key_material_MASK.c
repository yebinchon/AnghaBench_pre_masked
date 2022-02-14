
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tls_crypto_info {int cipher_type; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (void*,struct tls_crypto_info*,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, u32 VAR_3,
       struct tls_crypto_info *VAR_4)
{
 __be64 VAR_5;

 switch (VAR_4->cipher_type) {
 case 128:
  if (!(VAR_3 & VAR_1))
   return -VAR_0;
  FUNC_0(VAR_2, VAR_4, &VAR_5);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
