
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct xdp_umem {int dummy; } ;
struct TYPE_4__ {int xdp_prog; } ;
struct TYPE_3__ {struct mlx5e_channel** c; TYPE_2__ params; } ;
struct mlx5e_priv {int xsk; TYPE_1__ channels; int state; } ;
struct mlx5e_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_channel*) ;
 int FUNC_1 (struct mlx5e_channel*) ;
 struct xdp_umem* FUNC_2 (TYPE_2__*,int *,size_t) ;
 int FUNC_3 (struct mlx5e_priv*,size_t) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (struct mlx5e_priv*,struct xdp_umem*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct mlx5e_priv *VAR_2, u16 VAR_3)
{
 struct xdp_umem *VAR_4 = FUNC_2(&VAR_2->channels.params,
         &VAR_2->xsk, VAR_3);
 struct mlx5e_channel *VAR_5;

 if (FUNC_7(!VAR_4))
  return -VAR_0;

 if (!FUNC_6(VAR_1, &VAR_2->state))
  goto remove_umem;


 if (!VAR_2->channels.params.xdp_prog)
  goto remove_umem;

 VAR_5 = VAR_2->channels.c[VAR_3];
 FUNC_3(VAR_2, VAR_3);
 FUNC_1(VAR_5);
 FUNC_0(VAR_5);

remove_umem:
 FUNC_4(&VAR_2->xsk, VAR_3);
 FUNC_5(VAR_2, VAR_4);

 return 0;
}
