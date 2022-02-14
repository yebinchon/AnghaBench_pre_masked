
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int rx_cqe_compress_def; } ;
struct TYPE_6__ {TYPE_2__ params; } ;
struct TYPE_4__ {scalar_t__ rx_filter; } ;
struct mlx5e_priv {TYPE_3__ channels; TYPE_1__ tstamp; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5e_priv*,int) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
         bool VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_3(VAR_4);
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;

 if (!FUNC_0(VAR_7, VAR_3))
  return -VAR_1;

 if (VAR_5 && VAR_6->tstamp.rx_filter != VAR_2) {
  FUNC_2(VAR_4, "Can't enable cqe compression while timestamping is enabled.\n");
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_5);
 VAR_6->channels.params.rx_cqe_compress_def = VAR_5;

 return 0;
}
