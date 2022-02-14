
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netsec_priv {TYPE_2__* xdp_prog; } ;
struct netdev_bpf {int command; int prog_id; int extack; int prog; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* aux; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;


 struct netsec_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct netsec_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct netdev_bpf *VAR_2)
{
 struct netsec_priv *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2->command) {
 case 128:
  return FUNC_1(VAR_3, VAR_2->prog, VAR_2->extack);
 case 129:
  VAR_2->prog_id = VAR_3->xdp_prog ? VAR_3->xdp_prog->aux->id : 0;
  return 0;
 default:
  return -VAR_0;
 }
}
