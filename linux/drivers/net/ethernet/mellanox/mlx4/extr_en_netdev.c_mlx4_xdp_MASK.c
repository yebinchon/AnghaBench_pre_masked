
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_bpf {int command; int prog_id; int prog; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct netdev_bpf *VAR_2)
{
 switch (VAR_2->command) {
 case 128:
  return FUNC_1(VAR_1, VAR_2->prog);
 case 129:
  VAR_2->prog_id = FUNC_0(VAR_1);
  return 0;
 default:
  return -VAR_0;
 }
}
