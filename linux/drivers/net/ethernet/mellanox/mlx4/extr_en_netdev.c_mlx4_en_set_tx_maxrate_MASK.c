
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_update_qp_params {int rate_val; scalar_t__ rate_unit; } ;
struct mlx4_en_tx_ring {int qpn; } ;
struct mlx4_en_priv {TYPE_2__* mdev; struct mlx4_en_tx_ring*** tx_ring; } ;
struct TYPE_4__ {int flags2; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;
struct TYPE_5__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int ,struct mlx4_update_qp_params*) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6, int VAR_7, u32 VAR_8)
{
 struct mlx4_en_priv *VAR_9 = FUNC_1(VAR_6);
 struct mlx4_en_tx_ring *VAR_10 = VAR_9->tx_ring[VAR_5][VAR_7];
 struct mlx4_update_qp_params VAR_11;
 int VAR_12;

 if (!(VAR_9->mdev->dev->caps.flags2 & VAR_1))
  return -VAR_0;


 if (VAR_8 >> 12) {
  VAR_11.rate_unit = VAR_2;
  VAR_11.rate_val = VAR_8 / 1000;
 } else if (VAR_8) {
  VAR_11.rate_unit = VAR_3;
  VAR_11.rate_val = VAR_8;
 } else {
  VAR_11.rate_unit = 0;
  VAR_11.rate_val = 0;
 }

 VAR_12 = FUNC_0(VAR_9->mdev->dev, VAR_10->qpn, VAR_4,
        &VAR_11);
 return VAR_12;
}
