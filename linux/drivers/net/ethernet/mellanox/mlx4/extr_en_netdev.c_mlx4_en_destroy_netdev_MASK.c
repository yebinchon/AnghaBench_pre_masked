
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {size_t port; int service_task; int stats_task; int res; scalar_t__ allocated; scalar_t__ registered; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int ** upper; int ** pndev; TYPE_2__* dev; int workqueue; } ;
struct TYPE_4__ {int flags2; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct mlx4_en_priv*,char*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct mlx4_en_priv*) ;
 int FUNC_6 (struct mlx4_en_priv*) ;
 int FUNC_7 (struct mlx4_en_dev*) ;
 int FUNC_8 (TYPE_2__*,int *,int ) ;
 int FUNC_9 (TYPE_2__*,size_t) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct mlx4_en_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;

void FUNC_14(struct net_device *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_12(VAR_3);
 struct mlx4_en_dev *VAR_5 = VAR_4->mdev;

 FUNC_2(VAR_0, VAR_4, "Destroying netdev on port:%d\n", VAR_4->port);


 if (VAR_4->registered) {
  FUNC_1(FUNC_9(VAR_5->dev,
             VAR_4->port));
  FUNC_13(VAR_3);
 }

 if (VAR_4->allocated)
  FUNC_8(VAR_5->dev, &VAR_4->res, VAR_2);

 FUNC_0(&VAR_4->stats_task);
 FUNC_0(&VAR_4->service_task);

 FUNC_3(VAR_5->workqueue);

 if (VAR_5->dev->caps.flags2 & VAR_1)
  FUNC_7(VAR_5);


 FUNC_10(&VAR_5->state_lock);
 VAR_5->pndev[VAR_4->port] = ((void*)0);
 VAR_5->upper[VAR_4->port] = ((void*)0);





 FUNC_6(VAR_4);
 FUNC_11(&VAR_5->state_lock);

 FUNC_4(VAR_3);
}
