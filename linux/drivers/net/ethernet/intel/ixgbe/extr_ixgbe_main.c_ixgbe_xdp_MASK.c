
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int queue_id; int umem; } ;
struct netdev_bpf {int command; TYPE_3__ xsk; int prog_id; int prog; } ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {TYPE_2__* xdp_prog; } ;
struct TYPE_5__ {TYPE_1__* aux; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct ixgbe_adapter*,int ,int ) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct netdev_bpf *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_2(VAR_1);

 switch (VAR_2->command) {
 case 129:
  return FUNC_0(VAR_1, VAR_2->prog);
 case 130:
  VAR_2->prog_id = VAR_3->xdp_prog ?
   VAR_3->xdp_prog->aux->id : 0;
  return 0;
 case 128:
  return FUNC_1(VAR_3, VAR_2->xsk.umem,
         VAR_2->xsk.queue_id);

 default:
  return -VAR_0;
 }
}
