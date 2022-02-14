
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_eth_io_rx_cdesc_base {int status; int hash; } ;
struct ena_com_rx_ctx {int l3_proto; int l4_proto; int l3_csum_err; int l4_csum_err; int l4_csum_checked; int frag; int hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int,int,int,int,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct ena_com_rx_ctx *VAR_11,
     struct ena_eth_io_rx_cdesc_base *VAR_12)
{
 VAR_11->l3_proto = VAR_12->status &
  VAR_4;
 VAR_11->l4_proto =
  (VAR_12->status & VAR_9) >>
  VAR_10;
 VAR_11->l3_csum_err =
  !!((VAR_12->status & VAR_2) >>
  VAR_3);
 VAR_11->l4_csum_err =
  !!((VAR_12->status & VAR_7) >>
  VAR_8);
 VAR_11->l4_csum_checked =
  !!((VAR_12->status & VAR_5) >>
  VAR_6);
 VAR_11->hash = VAR_12->hash;
 VAR_11->frag =
  (VAR_12->status & VAR_0) >>
  VAR_1;

 FUNC_0("ena_rx_ctx->l3_proto %d ena_rx_ctx->l4_proto %d\nena_rx_ctx->l3_csum_err %d ena_rx_ctx->l4_csum_err %d\nhash frag %d frag: %d cdesc_status: %x\n",
   VAR_11->l3_proto, VAR_11->l4_proto,
   VAR_11->l3_csum_err, VAR_11->l4_csum_err,
   VAR_11->hash, VAR_11->frag, VAR_12->status);
}
