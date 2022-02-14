
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int dummy; } ;
struct nfp_net_tls_offload_ctx {int fw_handle; } ;
struct nfp_net {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;


 struct nfp_net_tls_offload_ctx* FUNC_0 (struct tls_context*,int) ;
 struct nfp_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nfp_net*,int) ;
 int FUNC_3 (struct nfp_net*,int ) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_0, struct tls_context *VAR_1,
  enum tls_offload_ctx_dir VAR_2)
{
 struct nfp_net *VAR_3 = FUNC_1(VAR_0);
 struct nfp_net_tls_offload_ctx *VAR_4;

 FUNC_2(VAR_3, VAR_2);

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 FUNC_3(VAR_3, VAR_4->fw_handle);
}
