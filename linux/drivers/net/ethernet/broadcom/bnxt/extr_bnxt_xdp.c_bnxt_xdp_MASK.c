
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_bpf {int command; int prog_id; int prog; } ;
struct net_device {int dummy; } ;
struct bnxt {TYPE_2__* xdp_prog; } ;
struct TYPE_4__ {TYPE_1__* aux; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;


 int FUNC_0 (struct bnxt*,int ) ;
 struct bnxt* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_1, struct netdev_bpf *VAR_2)
{
 struct bnxt *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 switch (VAR_2->command) {
 case 128:
  VAR_4 = FUNC_0(VAR_3, VAR_2->prog);
  break;
 case 129:
  VAR_2->prog_id = VAR_3->xdp_prog ? VAR_3->xdp_prog->aux->id : 0;
  VAR_4 = 0;
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }
 return VAR_4;
}
