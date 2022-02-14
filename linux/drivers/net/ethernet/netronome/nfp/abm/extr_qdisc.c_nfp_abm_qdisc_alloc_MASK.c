
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct nfp_qdisc {int type; unsigned int num_children; struct nfp_qdisc* children; void* handle; void* parent_handle; struct net_device* netdev; } ;
struct nfp_port {int tc_offload_cnt; } ;
struct nfp_abm_link {TYPE_2__* abm; int qdiscs; } ;
struct net_device {int dummy; } ;
typedef enum nfp_qdisc_type { ____Placeholder_nfp_qdisc_type } nfp_qdisc_type ;
struct TYPE_4__ {TYPE_1__* app; } ;
struct TYPE_3__ {int cpp; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 struct nfp_qdisc* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct nfp_qdisc*) ;
 struct nfp_qdisc* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 struct nfp_port* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,int ,struct nfp_qdisc*) ;

__attribute__((used)) static struct nfp_qdisc *
FUNC_7(struct net_device *VAR_1, struct nfp_abm_link *VAR_2,
      enum nfp_qdisc_type VAR_3, u32 VAR_4, u32 VAR_5,
      unsigned int VAR_6)
{
 struct nfp_port *VAR_7 = FUNC_5(VAR_1);
 struct nfp_qdisc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 if (VAR_6) {
  VAR_8->children = FUNC_1(VAR_6, sizeof(void *), VAR_0);
  if (!VAR_8->children)
   goto err_free_qdisc;
 }

 VAR_8->netdev = VAR_1;
 VAR_8->type = VAR_3;
 VAR_8->parent_handle = VAR_4;
 VAR_8->handle = VAR_5;
 VAR_8->num_children = VAR_6;

 VAR_9 = FUNC_6(&VAR_2->qdiscs, FUNC_0(VAR_8->handle), VAR_8);
 if (VAR_9) {
  FUNC_4(VAR_2->abm->app->cpp,
   "Qdisc insertion into radix tree failed: %d\n", VAR_9);
  goto err_free_child_tbl;
 }

 VAR_7->tc_offload_cnt++;
 return VAR_8;

err_free_child_tbl:
 FUNC_2(VAR_8->children);
err_free_qdisc:
 FUNC_2(VAR_8);
 return ((void*)0);
}
