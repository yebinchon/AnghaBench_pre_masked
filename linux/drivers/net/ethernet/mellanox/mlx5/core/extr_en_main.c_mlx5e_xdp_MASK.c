
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue_id; int umem; } ;
struct netdev_bpf {int command; TYPE_1__ xsk; int prog_id; int prog; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct netdev_bpf *VAR_2)
{
 switch (VAR_2->command) {
 case 129:
  return FUNC_1(VAR_1, VAR_2->prog);
 case 130:
  VAR_2->prog_id = FUNC_0(VAR_1);
  return 0;
 case 128:
  return FUNC_2(VAR_1, VAR_2->xsk.umem,
         VAR_2->xsk.queue_id);
 default:
  return -VAR_0;
 }
}
