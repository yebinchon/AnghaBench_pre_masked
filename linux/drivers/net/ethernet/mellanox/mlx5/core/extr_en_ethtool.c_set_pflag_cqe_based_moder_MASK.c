
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct TYPE_7__ {scalar_t__ cq_period_mode; } ;
struct TYPE_6__ {scalar_t__ cq_period_mode; } ;
struct TYPE_9__ {TYPE_2__ tx_cq_moderation; TYPE_1__ rx_cq_moderation; } ;
struct TYPE_8__ {TYPE_4__ params; } ;
struct mlx5e_priv {TYPE_3__ channels; int state; struct mlx5_core_dev* mdev; } ;
struct mlx5e_channels {TYPE_4__ params; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5e_channels*,int *) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5, bool VAR_6,
         bool VAR_7)
{
 struct mlx5e_priv *VAR_8 = FUNC_4(VAR_5);
 struct mlx5_core_dev *VAR_9 = VAR_8->mdev;
 struct mlx5e_channels VAR_10 = {};
 bool VAR_11;
 u8 VAR_12, VAR_13;

 VAR_12 = VAR_6 ?
  VAR_2 :
  VAR_3;
 VAR_13 = VAR_7 ?
  VAR_8->channels.params.rx_cq_moderation.cq_period_mode :
  VAR_8->channels.params.tx_cq_moderation.cq_period_mode;
 VAR_11 = VAR_12 != VAR_13;

 if (VAR_12 == VAR_2 &&
     !FUNC_0(VAR_9, VAR_4))
  return -VAR_0;

 if (!VAR_11)
  return 0;

 VAR_10.params = VAR_8->channels.params;
 if (VAR_7)
  FUNC_2(&VAR_10.params, VAR_12);
 else
  FUNC_3(&VAR_10.params, VAR_12);

 if (!FUNC_5(VAR_1, &VAR_8->state)) {
  VAR_8->channels.params = VAR_10.params;
  return 0;
 }

 return FUNC_1(VAR_8, &VAR_10, ((void*)0));
}
