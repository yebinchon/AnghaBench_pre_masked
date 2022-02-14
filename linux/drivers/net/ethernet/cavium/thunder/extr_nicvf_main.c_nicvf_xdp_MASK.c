
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nicvf {TYPE_2__* xdp_prog; int pdev; } ;
struct netdev_bpf {int command; int prog_id; int prog; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* aux; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct nicvf* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nicvf*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct netdev_bpf *VAR_3)
{
 struct nicvf *VAR_4 = FUNC_0(VAR_2);





 if (FUNC_2(VAR_4->pdev))
  return -VAR_1;

 switch (VAR_3->command) {
 case 128:
  return FUNC_1(VAR_4, VAR_3->prog);
 case 129:
  VAR_3->prog_id = VAR_4->xdp_prog ? VAR_4->xdp_prog->aux->id : 0;
  return 0;
 default:
  return -VAR_0;
 }
}
