
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int crypto_ops; } ;
struct nfp_net {TYPE_1__ tlv_caps; } ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

__attribute__((used)) static bool
FUNC_1(struct nfp_net *VAR_3, u16 VAR_4,
    enum tls_offload_ctx_dir VAR_5)
{
 u8 VAR_6;

 switch (VAR_4) {
 case 128:
  if (VAR_5 == VAR_2)
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;
  break;
 default:
  return 0;
 }

 return VAR_3->tlv_caps.crypto_ops & FUNC_0(VAR_6);
}
