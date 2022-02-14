
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; int sk; } ;
struct nfp_net_tls_offload_ctx {scalar_t__ next_seq; int fw_handle; } ;
struct nfp_net_r_vector {int tx_sync; scalar_t__ hw_tls_tx; int tx_errors; int tls_tx_no_fallback; int tls_tx_fallback; } ;
struct nfp_net_dp {int ktls_tx; } ;
struct TYPE_4__ {scalar_t__ gso_segs; } ;
struct TYPE_3__ {int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct nfp_net_dp*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 struct nfp_net_tls_offload_ctx* FUNC_11 (int ,int ) ;
 struct sk_buff* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static struct sk_buff *
FUNC_19(struct nfp_net_dp *VAR_2, struct nfp_net_r_vector *VAR_3,
        struct sk_buff *VAR_4, u64 *VAR_5, int *VAR_6)
{
 return VAR_4;
}
