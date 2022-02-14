
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int queue_id; int umem; } ;
struct netdev_bpf {int command; TYPE_2__ xsk; int prog_id; int prog; } ;
struct net_device {int dummy; } ;
struct i40e_vsi {scalar_t__ type; TYPE_3__* xdp_prog; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct TYPE_6__ {TYPE_1__* aux; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (struct i40e_vsi*,int ) ;
 int FUNC_1 (struct i40e_vsi*,int ,int ) ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
      struct netdev_bpf *VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_2(VAR_2);
 struct i40e_vsi *VAR_5 = VAR_4->vsi;

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 switch (VAR_3->command) {
 case 129:
  return FUNC_0(VAR_5, VAR_3->prog);
 case 130:
  VAR_3->prog_id = VAR_5->xdp_prog ? VAR_5->xdp_prog->aux->id : 0;
  return 0;
 case 128:
  return FUNC_1(VAR_5, VAR_3->xsk.umem,
        VAR_3->xsk.queue_id);
 default:
  return -VAR_0;
 }
}
