
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tun_struct {int numqueues; int * tfiles; } ;
struct TYPE_3__ {TYPE_2__* sk; } ;
struct tun_file {TYPE_1__ socket; } ;
struct notifier_block {int dummy; } ;
struct net_device {int * rtnl_link_ops; } ;
struct TYPE_4__ {int (* sk_write_space ) (TYPE_2__*) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (void*) ;
 struct tun_struct* FUNC_1 (struct net_device*) ;
 struct tun_file* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_4 (struct tun_struct*) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_3,
       unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_0(VAR_5);
 struct tun_struct *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;

 if (VAR_6->rtnl_link_ops != &VAR_2)
  return VAR_1;

 switch (VAR_4) {
 case 129:
  if (FUNC_4(VAR_7))
   return VAR_0;
  break;
 case 128:
  for (VAR_8 = 0; VAR_8 < VAR_7->numqueues; VAR_8++) {
   struct tun_file *VAR_9;

   VAR_9 = FUNC_2(VAR_7->tfiles[VAR_8]);
   VAR_9->socket.sk->sk_write_space(VAR_9->socket.sk);
  }
  break;
 default:
  break;
 }

 return VAR_1;
}
