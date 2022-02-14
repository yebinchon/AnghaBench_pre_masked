
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct bpf_prog* xdp_prog; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
struct mlx5e_priv {int state_lock; TYPE_2__ channels; } ;
struct bpf_prog {TYPE_3__* aux; } ;
struct TYPE_6__ {int id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_0)
{
 struct mlx5e_priv *VAR_1 = FUNC_2(VAR_0);
 const struct bpf_prog *VAR_2;
 u32 VAR_3 = 0;

 FUNC_0(&VAR_1->state_lock);
 VAR_2 = VAR_1->channels.params.xdp_prog;
 if (VAR_2)
  VAR_3 = VAR_2->aux->id;
 FUNC_1(&VAR_1->state_lock);

 return VAR_3;
}
