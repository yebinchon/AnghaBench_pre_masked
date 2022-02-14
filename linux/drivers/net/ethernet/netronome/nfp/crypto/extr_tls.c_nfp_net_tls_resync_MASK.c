
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct nfp_net_tls_offload_ctx {int next_seq; int * fw_handle; } ;
struct nfp_net {int dummy; } ;
struct nfp_crypto_req_update {int rec_no; int tcp_seq; int handle; int resv; int opcode; scalar_t__ ep_id; } ;
struct nfp_crypto_reply_simple {int dummy; } ;
struct net_device {int dummy; } ;
typedef int gfp_t ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct nfp_net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nfp_net*,struct sk_buff*,int ,int) ;
 struct sk_buff* FUNC_5 (struct nfp_net*,int,int ) ;
 int FUNC_6 (struct nfp_net*,struct sk_buff*,char*,int ) ;
 int FUNC_7 (int) ;
 struct nfp_net_tls_offload_ctx* FUNC_8 (struct sock*,int) ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_5, struct sock *VAR_6, u32 VAR_7,
     u8 *VAR_8, enum tls_offload_ctx_dir VAR_9)
{
 struct nfp_net *VAR_10 = FUNC_3(VAR_5);
 struct nfp_net_tls_offload_ctx *VAR_11;
 struct nfp_crypto_req_update *VAR_12;
 struct sk_buff *VAR_13;
 gfp_t VAR_14;
 int VAR_15;

 VAR_14 = VAR_9 == VAR_4 ? VAR_2 : VAR_1;
 VAR_13 = FUNC_5(VAR_10, sizeof(*VAR_12), VAR_14);
 if (!VAR_13)
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_6, VAR_9);
 VAR_12 = (void *)VAR_13->data;
 VAR_12->ep_id = 0;
 VAR_12->opcode = FUNC_7(VAR_9);
 FUNC_2(VAR_12->resv, 0, sizeof(VAR_12->resv));
 FUNC_1(VAR_12->handle, VAR_11->fw_handle, sizeof(VAR_11->fw_handle));
 VAR_12->tcp_seq = FUNC_0(VAR_7);
 FUNC_1(VAR_12->rec_no, VAR_8, sizeof(VAR_12->rec_no));

 if (VAR_9 == VAR_4) {
  VAR_15 = FUNC_6(VAR_10, VAR_13, "sync",
           VAR_3);
  if (VAR_15)
   return VAR_15;
  VAR_11->next_seq = VAR_7;
 } else {
  FUNC_4(VAR_10, VAR_13, VAR_3,
      sizeof(struct nfp_crypto_reply_simple));
 }

 return 0;
}
