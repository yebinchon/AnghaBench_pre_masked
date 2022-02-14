
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {scalar_t__ port_up; int port; int active_vlans; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int dev; scalar_t__ device_up; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct mlx4_en_priv*,char*,int ) ;
 int FUNC_2 (struct mlx4_en_priv*,char*) ;
 int FUNC_3 (int ,struct mlx4_en_priv*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct mlx4_en_priv* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1,
        __be16 VAR_2, u16 VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_7(VAR_1);
 struct mlx4_en_dev *VAR_5 = VAR_4->mdev;
 int VAR_6 = 0;

 FUNC_1(VAR_0, VAR_4, "Killing VID:%d\n", VAR_3);

 FUNC_0(VAR_3, VAR_4->active_vlans);


 FUNC_5(&VAR_5->state_lock);
 FUNC_4(VAR_5->dev, VAR_4->port, VAR_3);

 if (VAR_5->device_up && VAR_4->port_up) {
  VAR_6 = FUNC_3(VAR_5->dev, VAR_4);
  if (VAR_6)
   FUNC_2(VAR_4, "Failed configuring VLAN filter\n");
 }
 FUNC_6(&VAR_5->state_lock);

 return VAR_6;
}
