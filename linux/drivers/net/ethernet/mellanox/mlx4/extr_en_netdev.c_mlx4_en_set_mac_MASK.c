
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {unsigned char* dev_addr; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int FUNC_2 (struct mlx4_en_priv*,unsigned char*) ;
 int FUNC_3 (struct mlx4_en_priv*,unsigned char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mlx4_en_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, void *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_6(VAR_2);
 struct mlx4_en_dev *VAR_5 = VAR_4->mdev;
 struct sockaddr *VAR_6 = VAR_3;
 unsigned char VAR_7[VAR_1 + 2];
 int VAR_8;

 if (!FUNC_0(VAR_6->sa_data))
  return -VAR_0;

 FUNC_4(&VAR_5->state_lock);
 FUNC_1(VAR_7, VAR_6->sa_data, VAR_1);
 VAR_8 = FUNC_2(VAR_4, VAR_7);
 if (VAR_8)
  goto out;

 FUNC_1(VAR_2->dev_addr, VAR_6->sa_data, VAR_1);
 FUNC_3(VAR_4, VAR_7);
out:
 FUNC_5(&VAR_5->state_lock);

 return VAR_8;
}
