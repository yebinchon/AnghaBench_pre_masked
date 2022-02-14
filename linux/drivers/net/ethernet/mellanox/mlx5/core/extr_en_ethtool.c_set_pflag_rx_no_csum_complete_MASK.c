
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ xdp_prog; } ;
struct mlx5e_channels {int num; struct mlx5e_channel** c; TYPE_1__ params; } ;
struct mlx5e_priv {struct mlx5e_channels channels; int state; } ;
struct TYPE_4__ {int state; } ;
struct mlx5e_channel {TYPE_2__ rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, bool VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_2(VAR_2);
 struct mlx5e_channels *VAR_5 = &VAR_4->channels;
 struct mlx5e_channel *VAR_6;
 int VAR_7;

 if (!FUNC_3(VAR_1, &VAR_4->state) ||
     VAR_4->channels.params.xdp_prog)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_5->num; VAR_7++) {
  VAR_6 = VAR_5->c[VAR_7];
  if (VAR_3)
   FUNC_1(VAR_0, &VAR_6->rq.state);
  else
   FUNC_0(VAR_0, &VAR_6->rq.state);
 }

 return 0;
}
