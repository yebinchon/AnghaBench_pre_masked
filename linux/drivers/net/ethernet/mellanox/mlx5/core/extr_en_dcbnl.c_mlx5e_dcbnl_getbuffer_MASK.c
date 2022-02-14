
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5e_port_buffer {int port_buffer_size; TYPE_1__* buffer; } ;
struct mlx5_core_dev {int dummy; } ;
struct dcbnl_buffer {int total_size; int * buffer_size; int * prio2buffer; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5e_port_buffer*) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
     struct dcbnl_buffer *VAR_4)
{
 struct mlx5e_priv *VAR_5 = FUNC_3(VAR_3);
 struct mlx5_core_dev *VAR_6 = VAR_5->mdev;
 struct mlx5e_port_buffer VAR_7;
 u8 VAR_8[VAR_2];
 int VAR_9, VAR_10;

 if (!FUNC_0(VAR_6))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_6, VAR_8);
 if (VAR_10)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  VAR_4->prio2buffer[VAR_9] = VAR_8[VAR_9];

 VAR_10 = FUNC_1(VAR_5, &VAR_7);
 if (VAR_10)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_4->buffer_size[VAR_9] = VAR_7.buffer[VAR_9].size;
 VAR_4->total_size = VAR_7.port_buffer_size;

 return 0;
}
