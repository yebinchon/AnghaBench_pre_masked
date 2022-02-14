
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mlx5_vport_drop_stats {int tx_dropped; int rx_dropped; } ;
struct TYPE_6__ {scalar_t__ drop_counter; } ;
struct TYPE_5__ {scalar_t__ drop_counter; } ;
struct mlx5_vport {int vport; TYPE_3__ ingress; TYPE_2__ egress; int enabled; } ;
struct mlx5_eswitch {scalar_t__ mode; } ;
struct TYPE_4__ {struct mlx5_eswitch* eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mlx5_core_dev*,scalar_t__,int *,scalar_t__*) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int,scalar_t__*,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_3,
            struct mlx5_vport *VAR_4,
            struct mlx5_vport_drop_stats *VAR_5)
{
 struct mlx5_eswitch *VAR_6 = VAR_3->priv.eswitch;
 u64 VAR_7, VAR_8;
 u64 VAR_9 = 0;
 int VAR_10 = 0;

 if (!VAR_4->enabled || VAR_6->mode != VAR_0)
  return 0;

 if (VAR_4->egress.drop_counter)
  FUNC_1(VAR_3, VAR_4->egress.drop_counter,
         &VAR_5->rx_dropped, &VAR_9);

 if (VAR_4->ingress.drop_counter)
  FUNC_1(VAR_3, VAR_4->ingress.drop_counter,
         &VAR_5->tx_dropped, &VAR_9);

 if (!FUNC_0(VAR_3, VAR_1) &&
     !FUNC_0(VAR_3, VAR_2))
  return 0;

 VAR_10 = FUNC_2(VAR_3, VAR_4->vport, 1,
       &VAR_7,
       &VAR_8);
 if (VAR_10)
  return VAR_10;

 if (FUNC_0(VAR_3, VAR_1))
  VAR_5->rx_dropped += VAR_7;
 if (FUNC_0(VAR_3, VAR_2))
  VAR_5->tx_dropped += VAR_8;

 return 0;
}
