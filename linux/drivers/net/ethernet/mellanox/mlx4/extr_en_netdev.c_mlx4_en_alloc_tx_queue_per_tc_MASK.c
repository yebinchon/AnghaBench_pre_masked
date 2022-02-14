
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {scalar_t__ port_up; int prof; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_port_profile {int num_up; int* tx_ring_num; int num_tx_rings_p_up; } ;
struct mlx4_en_dev {int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*) ;
 struct mlx4_en_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx4_en_port_profile*,int ,int) ;
 int FUNC_4 (struct mlx4_en_priv*,struct mlx4_en_priv*) ;
 int FUNC_5 (struct net_device*,scalar_t__) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct mlx4_en_priv*,struct mlx4_en_priv*,struct mlx4_en_port_profile*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct mlx4_en_priv* FUNC_11 (struct net_device*) ;

int FUNC_12(struct net_device *VAR_5, u8 VAR_6)
{
 struct mlx4_en_priv *VAR_7 = FUNC_11(VAR_5);
 struct mlx4_en_dev *VAR_8 = VAR_7->mdev;
 struct mlx4_en_port_profile VAR_9;
 struct mlx4_en_priv *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_9(&VAR_8->state_lock);
 FUNC_3(&VAR_9, VAR_7->prof, sizeof(struct mlx4_en_port_profile));
 VAR_9.num_up = (VAR_6 == 0) ? VAR_3 :
          VAR_2;
 VAR_9.tx_ring_num[VAR_4] = VAR_9.num_tx_rings_p_up *
       VAR_9.num_up;
 VAR_12 = FUNC_8(VAR_7, VAR_10, &VAR_9, 1);
 if (VAR_12)
  goto out;

 if (VAR_7->port_up) {
  VAR_11 = 1;
  FUNC_7(VAR_5, 1);
 }

 FUNC_4(VAR_7, VAR_10);
 if (VAR_11) {
  VAR_12 = FUNC_6(VAR_5);
  if (VAR_12) {
   FUNC_0(VAR_7, "Failed starting port for setup TC\n");
   goto out;
  }
 }

 VAR_12 = FUNC_5(VAR_5, VAR_6);
out:
 FUNC_10(&VAR_8->state_lock);
 FUNC_1(VAR_10);
 return VAR_12;
}
