
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iov_base; scalar_t__ iov_len; } ;
struct svc_cacherep {scalar_t__ c_type; scalar_t__ c_state; int c_lru; int c_node; TYPE_1__ c_replvec; } ;
struct nfsd_net {int drc_mem_usage; int drc_slab; int num_drc_entries; } ;
struct nfsd_drc_bucket {int rb_head; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct svc_cacherep*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(struct nfsd_drc_bucket *VAR_2, struct svc_cacherep *VAR_3,
    struct nfsd_net *VAR_4)
{
 if (VAR_3->c_type == VAR_0 && VAR_3->c_replvec.iov_base) {
  VAR_4->drc_mem_usage -= VAR_3->c_replvec.iov_len;
  FUNC_1(VAR_3->c_replvec.iov_base);
 }
 if (VAR_3->c_state != VAR_1) {
  FUNC_4(&VAR_3->c_node, &VAR_2->rb_head);
  FUNC_3(&VAR_3->c_lru);
  FUNC_0(&VAR_4->num_drc_entries);
  VAR_4->drc_mem_usage -= sizeof(*VAR_3);
 }
 FUNC_2(VAR_4->drc_slab, VAR_3);
}
