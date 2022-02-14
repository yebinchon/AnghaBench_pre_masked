
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int ktls_tx; } ;
struct nfp_net {int ktls_tx_conn_cnt; int ktls_rx_conn_cnt; TYPE_1__ dp; } ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_net*,int ,int) ;

__attribute__((used)) static bool
FUNC_1(struct nfp_net *VAR_3, int VAR_4,
          enum tls_offload_ctx_dir VAR_5)
{
 u8 VAR_6;
 int VAR_7;

 if (VAR_5 == VAR_2) {
  VAR_6 = VAR_1;
  VAR_3->ktls_tx_conn_cnt += VAR_4;
  VAR_7 = VAR_3->ktls_tx_conn_cnt;
  VAR_3->dp.ktls_tx = !!VAR_3->ktls_tx_conn_cnt;
 } else {
  VAR_6 = VAR_0;
  VAR_3->ktls_rx_conn_cnt += VAR_4;
  VAR_7 = VAR_3->ktls_rx_conn_cnt;
 }


 if (VAR_7 > 1)
  return 0;

 FUNC_0(VAR_3, VAR_6, VAR_7);
 return 1;
}
