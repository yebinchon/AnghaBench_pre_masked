
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; TYPE_2__* mdev; } ;
struct mlx4_congestion_control_mb_prio_802_1_qau_statistics {int rppp_created_rps; int rppp_rp_centiseconds; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
struct ieee_qcn_stats {int * rppp_created_rps; int * rppp_rp_centiseconds; } ;
struct TYPE_6__ {int flags2; } ;
struct TYPE_8__ {TYPE_1__ caps; } ;
struct TYPE_7__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mlx4_cmd_mailbox* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,struct mlx4_cmd_mailbox*) ;
 struct mlx4_en_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_9,
       struct ieee_qcn_stats *VAR_10)
{
 struct mlx4_en_priv *VAR_11 = FUNC_6(VAR_9);
 struct mlx4_congestion_control_mb_prio_802_1_qau_statistics *VAR_12;
 struct mlx4_cmd_mailbox *VAR_13 = ((void*)0);
 u64 VAR_14 = 0;
 u32 VAR_15 = 0;
 int VAR_16, VAR_17;

 if (!(VAR_11->mdev->dev->caps.flags2 & VAR_8))
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_11->mdev->dev);
 if (FUNC_0(VAR_13))
  return -VAR_0;

 VAR_12 =
 (struct mlx4_congestion_control_mb_prio_802_1_qau_statistics *)
 VAR_13->buf;

 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
  VAR_15 = VAR_11->port | ((1 << VAR_16) << 8) |
    (VAR_7 << 16);
  VAR_17 = FUNC_4(VAR_11->mdev->dev, VAR_14,
       VAR_13->dma, VAR_15,
       VAR_6,
       VAR_3,
       VAR_5,
       VAR_4);
  if (VAR_17) {
   FUNC_5(VAR_11->mdev->dev, VAR_13);
   return VAR_17;
  }
  VAR_10->rppp_rp_centiseconds[VAR_16] =
   FUNC_2(VAR_12->rppp_rp_centiseconds);
  VAR_10->rppp_created_rps[VAR_16] =
   FUNC_1(VAR_12->rppp_created_rps);
 }
 FUNC_5(VAR_11->mdev->dev, VAR_13);
 return 0;
}
