
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_compare_arg {struct nfp_fl_flow_table_cmp_arg* key; } ;
struct nfp_fl_payload {scalar_t__ ingress_dev; scalar_t__ tc_flower_cookie; } ;
struct nfp_fl_flow_table_cmp_arg {scalar_t__ netdev; scalar_t__ cookie; } ;



__attribute__((used)) static int FUNC_0(struct rhashtable_compare_arg *VAR_0,
       const void *VAR_1)
{
 const struct nfp_fl_flow_table_cmp_arg *VAR_2 = VAR_0->key;
 const struct nfp_fl_payload *VAR_3 = VAR_1;

 if (VAR_3->ingress_dev == VAR_2->netdev)
  return VAR_3->tc_flower_cookie != VAR_2->cookie;

 return 1;
}
