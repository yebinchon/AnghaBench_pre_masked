
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdevsim {int bpf_map_accept; int xdp_hw; int xdp; } ;
struct netdev_bpf {int command; int offmap; } ;
struct net_device {int dummy; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int VAR_1 ;




 struct netdevsim* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netdevsim*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct netdevsim*,struct netdev_bpf*) ;
 int FUNC_5 (struct netdevsim*,struct netdev_bpf*) ;
 int FUNC_6 (struct netdevsim*,struct netdev_bpf*,int *) ;
 int FUNC_7 (int *,struct netdev_bpf*) ;

int FUNC_8(struct net_device *VAR_2, struct netdev_bpf *VAR_3)
{
 struct netdevsim *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 FUNC_0();

 switch (VAR_3->command) {
 case 131:
  return FUNC_7(&VAR_4->xdp, VAR_3);
 case 130:
  return FUNC_7(&VAR_4->xdp_hw, VAR_3);
 case 129:
  VAR_5 = FUNC_4(VAR_4, VAR_3);
  if (VAR_5)
   return VAR_5;

  return FUNC_6(VAR_4, VAR_3, &VAR_4->xdp);
 case 128:
  VAR_5 = FUNC_5(VAR_4, VAR_3);
  if (VAR_5)
   return VAR_5;

  return FUNC_6(VAR_4, VAR_3, &VAR_4->xdp_hw);
 case 133:
  if (!VAR_4->bpf_map_accept)
   return -VAR_1;

  return FUNC_2(VAR_4, VAR_3->offmap);
 case 132:
  FUNC_3(VAR_3->offmap);
  return 0;
 default:
  return -VAR_0;
 }
}
