
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {int * qps; TYPE_2__* indir_qp; } ;
struct mlx4_en_priv {int flags; int rx_ring_num; TYPE_4__* mdev; TYPE_3__ rss_map; scalar_t__ validate_loopback; int ctrl_flags; } ;
typedef int netdev_features_t ;
struct TYPE_6__ {int flags2; } ;
struct TYPE_10__ {TYPE_1__ caps; } ;
struct TYPE_9__ {int state_lock; TYPE_5__* dev; } ;
struct TYPE_7__ {scalar_t__ qpn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_en_priv*,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mlx4_en_priv* FUNC_6 (struct net_device*) ;

void FUNC_7(struct net_device *VAR_5,
       netdev_features_t VAR_6)
{
 struct mlx4_en_priv *VAR_7 = FUNC_6(VAR_5);

 if (VAR_6 & VAR_4)
  VAR_7->ctrl_flags |= FUNC_0(VAR_3);
 else
  VAR_7->ctrl_flags &= FUNC_0(~VAR_3);

 VAR_7->flags &= ~(VAR_2|
   VAR_1);




 if (FUNC_2(VAR_7->mdev->dev) &&
     !(VAR_6 & VAR_4) && !VAR_7->validate_loopback)
  VAR_7->flags |= VAR_2;




 if (FUNC_2(VAR_7->mdev->dev) || VAR_7->validate_loopback)
  VAR_7->flags |= VAR_1;

 FUNC_4(&VAR_7->mdev->state_lock);
 if ((VAR_7->mdev->dev->caps.flags2 &
      VAR_0) &&
     VAR_7->rss_map.indir_qp && VAR_7->rss_map.indir_qp->qpn) {
  int VAR_8;
  int VAR_9 = 0;
  int VAR_10 = !!(VAR_6 & VAR_4);

  for (VAR_8 = 0; VAR_8 < VAR_7->rx_ring_num; VAR_8++) {
   int VAR_11;

   VAR_11 = FUNC_1(VAR_7,
            &VAR_7->rss_map.qps[VAR_8],
            VAR_10);
   if (!VAR_9)
    VAR_9 = VAR_11;
  }
  if (VAR_9)
   FUNC_3(VAR_7->mdev, "failed to change mcast loopback\n");
 }
 FUNC_5(&VAR_7->mdev->state_lock);
}
