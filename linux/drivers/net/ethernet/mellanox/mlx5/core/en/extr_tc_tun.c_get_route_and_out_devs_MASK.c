
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5e_priv {int netdev; TYPE_2__* mdev; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_3__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct mlx5_eswitch*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct mlx5e_priv*,struct net_device*) ;
 struct net_device* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 struct net_device* FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct mlx5e_priv *VAR_2,
      struct net_device *VAR_3,
      struct net_device **VAR_4,
      struct net_device **VAR_5)
{
 struct net_device *VAR_6, *VAR_7, *VAR_8;
 struct mlx5_eswitch *VAR_9 = VAR_2->mdev->priv.eswitch;
 bool VAR_10;

 VAR_8 = FUNC_2(VAR_3) ? FUNC_14(VAR_3) : VAR_3;
 VAR_6 = FUNC_3(VAR_9, VAR_1);

 FUNC_12();
 VAR_7 = FUNC_8(VAR_6);




 if (VAR_7)
  FUNC_0(VAR_7);
 FUNC_13();

 VAR_10 = (VAR_7 &&
     FUNC_11(VAR_7) &&
     VAR_8 == VAR_7 &&
     FUNC_4(VAR_2->mdev));
 if (VAR_7)
  FUNC_1(VAR_7);




 *VAR_4 = VAR_3;
 if (!FUNC_9(VAR_2->netdev, VAR_8) ||
     VAR_10 || FUNC_2(*VAR_4))
  *VAR_5 = VAR_6;
 else if (FUNC_5(VAR_3) &&
   FUNC_7(VAR_2, VAR_3))
  *VAR_5 = *VAR_4;
 else
  return -VAR_0;

 if (!(FUNC_5(*VAR_5) &&
       FUNC_6(FUNC_10(*VAR_5))))
  return -VAR_0;

 return 0;
}
