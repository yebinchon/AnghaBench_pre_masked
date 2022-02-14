
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_flower_indr_block_cb_priv {int netdev; int app; } ;
struct TYPE_2__ {scalar_t__ chain_index; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int FUNC_0 (int ,int ,void*) ;

__attribute__((used)) static int FUNC_1(enum tc_setup_type VAR_1,
       void *VAR_2, void *VAR_3)
{
 struct nfp_flower_indr_block_cb_priv *VAR_4 = VAR_3;
 struct flow_cls_offload *VAR_5 = VAR_2;

 if (VAR_5->common.chain_index)
  return -VAR_0;

 switch (VAR_1) {
 case 128:
  return FUNC_0(VAR_4->app, VAR_4->netdev,
            VAR_2);
 default:
  return -VAR_0;
 }
}
