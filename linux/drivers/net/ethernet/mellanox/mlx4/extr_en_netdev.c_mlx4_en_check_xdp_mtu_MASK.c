
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_en_priv*,char*,int,int) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static bool FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 > VAR_0) {
  FUNC_0(VAR_3, "mtu:%d > max:%d when XDP prog is attached\n",
         VAR_2, VAR_0);
  return 0;
 }

 return 1;
}
