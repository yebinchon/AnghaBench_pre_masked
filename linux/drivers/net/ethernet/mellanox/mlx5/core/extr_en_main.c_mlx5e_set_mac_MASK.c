
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct mlx5e_priv {int set_rx_mode_work; int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, void *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_2(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;

 if (!FUNC_1(VAR_4->sa_data))
  return -VAR_0;

 FUNC_3(VAR_1);
 FUNC_0(VAR_1->dev_addr, VAR_4->sa_data);
 FUNC_4(VAR_1);

 FUNC_5(VAR_3->wq, &VAR_3->set_rx_mode_work);

 return 0;
}
