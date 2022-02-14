
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct ena_com_tx_meta {int l3_hdr_offset; int l3_hdr_len; scalar_t__ mss; scalar_t__ l4_hdr_len; } ;
struct ena_com_tx_ctx {int l4_csum_enable; int tso_enable; int l4_csum_partial; int df; int l3_csum_enable; int meta_valid; int l4_proto; int l3_proto; struct ena_com_tx_meta ena_meta; } ;
struct TYPE_8__ {int version; int frag_off; scalar_t__ protocol; } ;
struct TYPE_7__ {scalar_t__ nexthdr; } ;
struct TYPE_6__ {scalar_t__ gso_size; } ;
struct TYPE_5__ {scalar_t__ doff; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct ena_com_tx_ctx *VAR_7, struct sk_buff *VAR_8)
{
 u32 VAR_9 = FUNC_5(VAR_8)->gso_size;
 struct ena_com_tx_meta *VAR_10 = &VAR_7->ena_meta;
 u8 VAR_11 = 0;

 if ((VAR_8->ip_summed == VAR_0) || VAR_9) {
  VAR_7->l4_csum_enable = 1;
  if (VAR_9) {
   VAR_7->tso_enable = 1;
   VAR_10->l4_hdr_len = FUNC_6(VAR_8)->doff;
   VAR_7->l4_csum_partial = 0;
  } else {
   VAR_7->tso_enable = 0;
   VAR_10->l4_hdr_len = 0;
   VAR_7->l4_csum_partial = 1;
  }

  switch (FUNC_1(VAR_8)->version) {
  case 128:
   VAR_7->l3_proto = VAR_1;
   if (FUNC_1(VAR_8)->frag_off & FUNC_0(VAR_6))
    VAR_7->df = 1;
   if (VAR_9)
    VAR_7->l3_csum_enable = 1;
   VAR_11 = FUNC_1(VAR_8)->protocol;
   break;
  case 6:
   VAR_7->l3_proto = VAR_2;
   VAR_11 = FUNC_2(VAR_8)->nexthdr;
   break;
  default:
   break;
  }

  if (VAR_11 == VAR_5)
   VAR_7->l4_proto = VAR_3;
  else
   VAR_7->l4_proto = VAR_4;

  VAR_10->mss = VAR_9;
  VAR_10->l3_hdr_len = FUNC_3(VAR_8);
  VAR_10->l3_hdr_offset = FUNC_4(VAR_8);
  VAR_7->meta_valid = 1;

 } else {
  VAR_7->meta_valid = 0;
 }
}
