
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_flower_geneve_options {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct flow_dissector_key_enc_opts {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static int
FUNC_1(struct flow_dissector_key_enc_opts *VAR_3,
     u32 *VAR_4, int *VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 if (VAR_3->len > VAR_2) {
  FUNC_0(VAR_6, "unsupported offload: geneve options exceed maximum length");
  return -VAR_0;
 }

 if (VAR_3->len > 0) {
  *VAR_4 |= VAR_1;
  *VAR_5 += sizeof(struct nfp_flower_geneve_options);
 }

 return 0;
}
