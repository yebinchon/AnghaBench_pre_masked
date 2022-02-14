
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct mlx4_en_priv {int watchdog_task; int port; scalar_t__* tx_ring_num; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int workqueue; int device_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,...) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct mlx4_en_priv* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3, int VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_7(VAR_3);
 struct mlx4_en_dev *VAR_6 = VAR_5->mdev;
 int VAR_7 = 0;

 FUNC_0(VAR_0, VAR_5, "Change MTU called - current:%d new:%d\n",
   VAR_3->mtu, VAR_4);

 if (VAR_5->tx_ring_num[VAR_2] &&
     !FUNC_2(VAR_3, VAR_4))
  return -VAR_1;

 VAR_3->mtu = VAR_4;

 if (FUNC_8(VAR_3)) {
  FUNC_5(&VAR_6->state_lock);
  if (!VAR_6->device_up) {


   FUNC_0(VAR_0, VAR_5, "Change MTU called with card down!?\n");
  } else {
   FUNC_4(VAR_3, 1);
   VAR_7 = FUNC_3(VAR_3);
   if (VAR_7) {
    FUNC_1(VAR_5, "Failed restarting port:%d\n",
      VAR_5->port);
    FUNC_9(VAR_6->workqueue, &VAR_5->watchdog_task);
   }
  }
  FUNC_6(&VAR_6->state_lock);
 }
 return 0;
}
