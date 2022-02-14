
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct netdev_phys_item_id {int id_len; int* id; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {size_t port; TYPE_1__* mdev; } ;
struct TYPE_4__ {int* phys_port_id; } ;
struct mlx4_dev {TYPE_2__ caps; } ;
typedef int phys_port_id ;
struct TYPE_3__ {struct mlx4_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
        struct netdev_phys_item_id *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_0(VAR_2);
 struct mlx4_dev *VAR_5 = VAR_4->mdev->dev;
 int VAR_6;
 u64 VAR_7 = VAR_5->caps.phys_port_id[VAR_4->port];

 if (!VAR_7)
  return -VAR_0;

 VAR_3->id_len = sizeof(VAR_7);
 for (VAR_6 = VAR_1 - 1; VAR_6 >= 0; --VAR_6) {
  VAR_3->id[VAR_6] = VAR_7 & 0xff;
  VAR_7 >>= 8;
 }
 return 0;
}
