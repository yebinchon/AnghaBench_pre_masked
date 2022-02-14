
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ce_attr {scalar_t__ dest_nentries; scalar_t__ src_nentries; int recv_cb; int send_cb; int src_sz_max; int flags; } ;
struct ath10k_ce_pipe {int id; int * dest_ring; TYPE_1__* ops; int * src_ring; int recv_cb; int send_cb; int src_sz_max; int attr_flags; int ctrl_addr; struct ath10k* ar; } ;
struct ath10k_ce {struct ath10k_ce_pipe* ce_states; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int * (* ce_alloc_dst_ring ) (struct ath10k*,int,struct ce_attr const*) ;int * (* ce_alloc_src_ring ) (struct ath10k*,int,struct ce_attr const*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ath10k*,int) ;
 struct ath10k_ce* FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*,struct ath10k_ce_pipe*) ;
 int FUNC_6 (struct ath10k*,char*,int,int) ;
 int * FUNC_7 (struct ath10k*,int,struct ce_attr const*) ;
 int * FUNC_8 (struct ath10k*,int,struct ce_attr const*) ;

int FUNC_9(struct ath10k *VAR_4, int VAR_5,
    const struct ce_attr *VAR_6)
{
 struct ath10k_ce *VAR_7 = FUNC_4(VAR_4);
 struct ath10k_ce_pipe *VAR_8 = &VAR_7->ce_states[VAR_5];
 int VAR_9;

 FUNC_5(VAR_4, VAR_8);





 FUNC_0(2 * VAR_2 >
       (VAR_0 - 1));
 FUNC_0(2 * VAR_1 >
       (VAR_0 - 1));
 FUNC_0(2 * VAR_3 >
       (VAR_0 - 1));

 VAR_8->ar = VAR_4;
 VAR_8->id = VAR_5;
 VAR_8->ctrl_addr = FUNC_3(VAR_4, VAR_5);
 VAR_8->attr_flags = VAR_6->flags;
 VAR_8->src_sz_max = VAR_6->src_sz_max;

 if (VAR_6->src_nentries)
  VAR_8->send_cb = VAR_6->send_cb;

 if (VAR_6->dest_nentries)
  VAR_8->recv_cb = VAR_6->recv_cb;

 if (VAR_6->src_nentries) {
  VAR_8->src_ring =
   VAR_8->ops->ce_alloc_src_ring(VAR_4, VAR_5, VAR_6);
  if (FUNC_1(VAR_8->src_ring)) {
   VAR_9 = FUNC_2(VAR_8->src_ring);
   FUNC_6(VAR_4, "failed to alloc CE src ring %d: %d\n",
       VAR_5, VAR_9);
   VAR_8->src_ring = ((void*)0);
   return VAR_9;
  }
 }

 if (VAR_6->dest_nentries) {
  VAR_8->dest_ring = VAR_8->ops->ce_alloc_dst_ring(VAR_4,
         VAR_5,
         VAR_6);
  if (FUNC_1(VAR_8->dest_ring)) {
   VAR_9 = FUNC_2(VAR_8->dest_ring);
   FUNC_6(VAR_4, "failed to alloc CE dest ring %d: %d\n",
       VAR_5, VAR_9);
   VAR_8->dest_ring = ((void*)0);
   return VAR_9;
  }
 }

 return 0;
}
