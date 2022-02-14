
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct net_device {int mtu; } ;
struct TYPE_4__ {int manual_buffer; } ;
struct mlx5e_priv {TYPE_2__ dcbx; struct mlx5_core_dev* mdev; } ;
struct mlx5e_port_buffer {TYPE_1__* buffer; } ;
struct mlx5_core_dev {int dummy; } ;
struct dcbnl_buffer {scalar_t__* buffer_size; scalar_t__* prio2buffer; } ;
struct TYPE_3__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int,scalar_t__) ;
 int FUNC_2 (struct mlx5e_priv*,scalar_t__,int ,int *,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_port_buffer*) ;
 int FUNC_4 (struct mlx5_core_dev*,scalar_t__*) ;
 struct mlx5e_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6,
     struct dcbnl_buffer *VAR_7)
{
 struct mlx5e_priv *VAR_8 = FUNC_5(VAR_6);
 struct mlx5_core_dev *VAR_9 = VAR_8->mdev;
 struct mlx5e_port_buffer VAR_10;
 u8 VAR_11[VAR_3];
 u32 *VAR_12 = ((void*)0);
 u8 *VAR_13 = ((void*)0);
 u32 VAR_14 = 0;
 int VAR_15, VAR_16;

 if (!FUNC_0(VAR_9))
  return -VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  FUNC_1(VAR_9, "buffer[%d]=%d\n", VAR_15, VAR_7->buffer_size[VAR_15]);

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
  FUNC_1(VAR_9, "priority %d buffer%d\n", VAR_15, VAR_7->prio2buffer[VAR_15]);

 VAR_16 = FUNC_4(VAR_9, VAR_11);
 if (VAR_16)
  return VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  if (VAR_7->prio2buffer[VAR_15] != VAR_11[VAR_15]) {
   VAR_14 |= VAR_4;
   VAR_13 = VAR_7->prio2buffer;
   break;
  }
 }

 VAR_16 = FUNC_3(VAR_8, &VAR_10);
 if (VAR_16)
  return VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  if (VAR_10.buffer[VAR_15].size != VAR_7->buffer_size[VAR_15]) {
   VAR_14 |= VAR_5;
   VAR_12 = VAR_7->buffer_size;
   break;
  }
 }

 if (!VAR_14)
  return 0;

 VAR_8->dcbx.manual_buffer = 1;
 VAR_16 = FUNC_2(VAR_8, VAR_14, VAR_6->mtu, ((void*)0),
           VAR_12, VAR_13);
 return VAR_16;
}
