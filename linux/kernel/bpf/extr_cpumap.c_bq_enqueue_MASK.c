
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_frame {int dummy; } ;
struct TYPE_4__ {int prev; } ;
struct xdp_bulk_queue {scalar_t__ count; TYPE_2__ flush_node; struct xdp_frame** q; } ;
struct list_head {int dummy; } ;
struct bpf_cpu_map_entry {int bulkq; TYPE_1__* cmap; } ;
struct TYPE_3__ {int flush_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xdp_bulk_queue*,int) ;
 int FUNC_1 (TYPE_2__*,struct list_head*) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct bpf_cpu_map_entry *VAR_1, struct xdp_frame *VAR_2)
{
 struct list_head *VAR_3 = FUNC_2(VAR_1->cmap->flush_list);
 struct xdp_bulk_queue *VAR_4 = FUNC_2(VAR_1->bulkq);

 if (FUNC_3(VAR_4->count == VAR_0))
  FUNC_0(VAR_4, 1);
 VAR_4->q[VAR_4->count++] = VAR_2;

 if (!VAR_4->flush_node.prev)
  FUNC_1(&VAR_4->flush_node, VAR_3);

 return 0;
}
