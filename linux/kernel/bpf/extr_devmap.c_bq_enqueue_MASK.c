
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_frame {int dummy; } ;
struct TYPE_4__ {int prev; } ;
struct xdp_bulk_queue {scalar_t__ count; TYPE_2__ flush_node; struct xdp_frame** q; struct net_device* dev_rx; } ;
struct net_device {int dummy; } ;
struct list_head {int dummy; } ;
struct bpf_dtab_netdev {int bulkq; TYPE_1__* dtab; } ;
struct TYPE_3__ {int flush_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xdp_bulk_queue*,int ,int) ;
 int FUNC_1 (TYPE_2__*,struct list_head*) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct bpf_dtab_netdev *VAR_1, struct xdp_frame *VAR_2,
        struct net_device *VAR_3)

{
 struct list_head *VAR_4 = FUNC_2(VAR_1->dtab->flush_list);
 struct xdp_bulk_queue *VAR_5 = FUNC_2(VAR_1->bulkq);

 if (FUNC_3(VAR_5->count == VAR_0))
  FUNC_0(VAR_5, 0, 1);





 if (!VAR_5->dev_rx)
  VAR_5->dev_rx = VAR_3;

 VAR_5->q[VAR_5->count++] = VAR_2;

 if (!VAR_5->flush_node.prev)
  FUNC_1(&VAR_5->flush_node, VAR_4);

 return 0;
}
