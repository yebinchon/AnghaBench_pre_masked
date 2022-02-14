
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct xdp_bulk_queue {int count; struct xdp_frame** q; int flush_node; int * dev_rx; struct bpf_dtab_netdev* obj; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct bpf_dtab_netdev {int idx; TYPE_2__* dtab; struct net_device* dev; } ;
struct TYPE_4__ {int map; } ;
struct TYPE_3__ {int (* ndo_xdp_xmit ) (struct net_device*,int,struct xdp_frame**,int ) ;} ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct xdp_frame*) ;
 int FUNC_3 (struct net_device*,int,struct xdp_frame**,int ) ;
 int FUNC_4 (int *,int ,int,int,int *,struct net_device*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct xdp_frame*) ;
 int FUNC_7 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_8(struct xdp_bulk_queue *VAR_0, u32 VAR_1,
         bool VAR_2)
{
 struct bpf_dtab_netdev *VAR_3 = VAR_0->obj;
 struct net_device *VAR_4 = VAR_3->dev;
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 int VAR_8;

 if (FUNC_5(!VAR_0->count))
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_0->count; VAR_8++) {
  struct xdp_frame *VAR_9 = VAR_0->q[VAR_8];

  FUNC_2(VAR_9);
 }

 VAR_5 = VAR_4->netdev_ops->ndo_xdp_xmit(VAR_4, VAR_0->count, VAR_0->q, VAR_1);
 if (VAR_5 < 0) {
  VAR_7 = VAR_5;
  VAR_5 = 0;
  goto error;
 }
 VAR_6 = VAR_0->count - VAR_5;
out:
 VAR_0->count = 0;

 FUNC_4(&VAR_3->dtab->map, VAR_3->idx,
         VAR_5, VAR_6, VAR_0->dev_rx, VAR_4, VAR_7);
 VAR_0->dev_rx = ((void*)0);
 FUNC_0(&VAR_0->flush_node);
 return 0;
error:



 for (VAR_8 = 0; VAR_8 < VAR_0->count; VAR_8++) {
  struct xdp_frame *VAR_10 = VAR_0->q[VAR_8];


  if (FUNC_1(VAR_2))
   FUNC_7(VAR_10);
  else
   FUNC_6(VAR_10);
  VAR_6++;
 }
 goto out;
}
