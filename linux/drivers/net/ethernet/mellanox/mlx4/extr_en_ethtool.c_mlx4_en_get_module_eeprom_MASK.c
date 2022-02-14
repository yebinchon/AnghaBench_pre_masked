
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct ethtool_eeprom {int offset; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int,int,int) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,int,int,int,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int ,int,int,int *) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
         struct ethtool_eeprom *VAR_3,
         u8 *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_4(VAR_2);
 struct mlx4_en_dev *VAR_6 = VAR_5->mdev;
 int VAR_7 = VAR_3->offset;
 int VAR_8 = 0, VAR_9;

 if (VAR_3->len == 0)
  return -VAR_1;

 FUNC_2(VAR_4, 0, VAR_3->len);

 while (VAR_8 < VAR_3->len) {
  FUNC_0(VAR_0, VAR_5,
         "mlx4_get_module_info i(%d) offset(%d) len(%d)\n",
         VAR_8, VAR_7, VAR_3->len - VAR_8);

  VAR_9 = FUNC_3(VAR_6->dev, VAR_5->port,
        VAR_7, VAR_3->len - VAR_8, VAR_4 + VAR_8);

  if (!VAR_9)
   return 0;

  if (VAR_9 < 0) {
   FUNC_1(VAR_5,
          "mlx4_get_module_info i(%d) offset(%d) bytes_to_read(%d) - FAILED (0x%x)\n",
          VAR_8, VAR_7, VAR_3->len - VAR_8, VAR_9);
   return 0;
  }

  VAR_8 += VAR_9;
  VAR_7 += VAR_9;
 }
 return 0;
}
