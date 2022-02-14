
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {scalar_t__ len_lw; } ;
struct TYPE_6__ {TYPE_2__ head; } ;
struct nfp_flower_pedit_acts {TYPE_3__ set_tport; TYPE_3__ set_ip6_src; TYPE_3__ set_ip6_dst; TYPE_3__ set_ip6_tc_hl_fl; TYPE_3__ set_ip_addr; TYPE_3__ set_ip_ttl_tos; TYPE_3__ set_eth; } ;
struct flow_rule {int dummy; } ;
struct flow_match_basic {TYPE_1__* key; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_4__ {int ip_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct flow_rule* FUNC_0 (struct flow_cls_offload*) ;
 int FUNC_1 (struct flow_rule*,struct flow_match_basic*) ;
 scalar_t__ FUNC_2 (struct flow_rule*,int ) ;
 int FUNC_3 (char*,TYPE_3__*,size_t) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct flow_cls_offload *VAR_2, char *VAR_3,
       int *VAR_4, struct nfp_flower_pedit_acts *VAR_5,
       u32 *VAR_6)
{
 struct flow_rule *VAR_7 = FUNC_0(VAR_2);
 size_t VAR_8 = 0;
 u8 VAR_9 = 0;

 if (FUNC_2(VAR_7, VAR_0)) {
  struct flow_match_basic VAR_10;

  FUNC_1(VAR_7, &VAR_10);
  VAR_9 = VAR_10.key->ip_proto;
 }

 if (VAR_5->set_eth.head.len_lw) {
  VAR_8 = sizeof(VAR_5->set_eth);
  FUNC_3(VAR_3, &VAR_5->set_eth, VAR_8);
  *VAR_4 += VAR_8;
 }

 if (VAR_5->set_ip_ttl_tos.head.len_lw) {
  VAR_3 += VAR_8;
  VAR_8 = sizeof(VAR_5->set_ip_ttl_tos);
  FUNC_3(VAR_3, &VAR_5->set_ip_ttl_tos, VAR_8);
  *VAR_4 += VAR_8;


  *VAR_6 |= VAR_1 |
    FUNC_4(VAR_9);
 }

 if (VAR_5->set_ip_addr.head.len_lw) {
  VAR_3 += VAR_8;
  VAR_8 = sizeof(VAR_5->set_ip_addr);
  FUNC_3(VAR_3, &VAR_5->set_ip_addr, VAR_8);
  *VAR_4 += VAR_8;


  *VAR_6 |= VAR_1 |
    FUNC_4(VAR_9);
 }

 if (VAR_5->set_ip6_tc_hl_fl.head.len_lw) {
  VAR_3 += VAR_8;
  VAR_8 = sizeof(VAR_5->set_ip6_tc_hl_fl);
  FUNC_3(VAR_3, &VAR_5->set_ip6_tc_hl_fl, VAR_8);
  *VAR_4 += VAR_8;


  *VAR_6 |= FUNC_4(VAR_9);
 }

 if (VAR_5->set_ip6_dst.head.len_lw &&
     VAR_5->set_ip6_src.head.len_lw) {



  VAR_3 += VAR_8;
  VAR_8 = sizeof(VAR_5->set_ip6_src);
  FUNC_3(VAR_3, &VAR_5->set_ip6_src, VAR_8);
  *VAR_4 += VAR_8;

  VAR_8 = sizeof(VAR_5->set_ip6_dst);
  FUNC_3(&VAR_3[sizeof(VAR_5->set_ip6_src)],
         &VAR_5->set_ip6_dst, VAR_8);
  *VAR_4 += VAR_8;


  *VAR_6 |= FUNC_4(VAR_9);
 } else if (VAR_5->set_ip6_dst.head.len_lw) {
  VAR_3 += VAR_8;
  VAR_8 = sizeof(VAR_5->set_ip6_dst);
  FUNC_3(VAR_3, &VAR_5->set_ip6_dst, VAR_8);
  *VAR_4 += VAR_8;


  *VAR_6 |= FUNC_4(VAR_9);
 } else if (VAR_5->set_ip6_src.head.len_lw) {
  VAR_3 += VAR_8;
  VAR_8 = sizeof(VAR_5->set_ip6_src);
  FUNC_3(VAR_3, &VAR_5->set_ip6_src, VAR_8);
  *VAR_4 += VAR_8;


  *VAR_6 |= FUNC_4(VAR_9);
 }
 if (VAR_5->set_tport.head.len_lw) {
  VAR_3 += VAR_8;
  VAR_8 = sizeof(VAR_5->set_tport);
  FUNC_3(VAR_3, &VAR_5->set_tport, VAR_8);
  *VAR_4 += VAR_8;


  *VAR_6 |= FUNC_4(VAR_9);
 }

 return 0;
}
