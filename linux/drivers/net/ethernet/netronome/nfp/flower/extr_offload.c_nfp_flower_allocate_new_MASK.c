
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dev; } ;
struct TYPE_3__ {int key_len; int mask_len; scalar_t__ flags; } ;
struct nfp_fl_payload {int in_hw; struct nfp_fl_payload* unmasked_data; struct nfp_fl_payload* mask_data; TYPE_2__ pre_tun_rule; int linked_flows; TYPE_1__ meta; scalar_t__ nfp_tun_ipv4_addr; void* action_data; } ;
struct nfp_fl_key_ls {int key_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct nfp_fl_payload*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static struct nfp_fl_payload *
FUNC_3(struct nfp_fl_key_ls *VAR_2)
{
 struct nfp_fl_payload *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->meta.key_len = VAR_2->key_size;
 VAR_3->unmasked_data = FUNC_2(VAR_2->key_size, VAR_0);
 if (!VAR_3->unmasked_data)
  goto err_free_flow;

 VAR_3->meta.mask_len = VAR_2->key_size;
 VAR_3->mask_data = FUNC_2(VAR_2->key_size, VAR_0);
 if (!VAR_3->mask_data)
  goto err_free_unmasked;

 VAR_3->action_data = FUNC_2(VAR_1, VAR_0);
 if (!VAR_3->action_data)
  goto err_free_mask;

 VAR_3->nfp_tun_ipv4_addr = 0;
 VAR_3->meta.flags = 0;
 FUNC_0(&VAR_3->linked_flows);
 VAR_3->in_hw = 0;
 VAR_3->pre_tun_rule.dev = ((void*)0);

 return VAR_3;

err_free_mask:
 FUNC_1(VAR_3->mask_data);
err_free_unmasked:
 FUNC_1(VAR_3->unmasked_data);
err_free_flow:
 FUNC_1(VAR_3);
 return ((void*)0);
}
