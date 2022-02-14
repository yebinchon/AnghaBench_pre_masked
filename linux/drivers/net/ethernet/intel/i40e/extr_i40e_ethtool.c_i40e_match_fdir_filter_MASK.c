
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_fdir_filter {scalar_t__ dst_ip; scalar_t__ src_ip; scalar_t__ dst_port; scalar_t__ src_port; scalar_t__ flow_type; scalar_t__ ip4_proto; } ;



__attribute__((used)) static bool FUNC_0(struct i40e_fdir_filter *VAR_0,
       struct i40e_fdir_filter *VAR_1)
{

 if (VAR_0->dst_ip != VAR_1->dst_ip ||
     VAR_0->src_ip != VAR_1->src_ip ||
     VAR_0->dst_port != VAR_1->dst_port ||
     VAR_0->src_port != VAR_1->src_port ||
     VAR_0->flow_type != VAR_1->flow_type ||
     VAR_0->ip4_proto != VAR_1->ip4_proto)
  return 0;

 return 1;
}
