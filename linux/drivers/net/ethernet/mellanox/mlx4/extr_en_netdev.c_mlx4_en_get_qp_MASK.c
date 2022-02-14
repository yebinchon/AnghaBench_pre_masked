
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_en_priv {int base_qpn; int port; TYPE_1__* dev; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {struct mlx4_dev* dev; } ;
struct TYPE_4__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_2__ caps; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_2 (struct mlx4_en_priv*,char*,scalar_t__) ;
 int FUNC_3 (struct mlx4_dev*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int*,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,int ,int ) ;
 int FUNC_7 (struct mlx4_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct mlx4_en_priv *VAR_4)
{
 struct mlx4_en_dev *VAR_5 = VAR_4->mdev;
 struct mlx4_dev *VAR_6 = VAR_5->dev;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int *VAR_9 = &VAR_4->base_qpn;
 u64 VAR_10 = FUNC_4(VAR_4->dev->dev_addr);

 FUNC_0(VAR_0, VAR_4, "Registering MAC: %pM for adding\n",
        VAR_4->dev->dev_addr);
 VAR_7 = FUNC_6(VAR_6, VAR_4->port, VAR_10);
 if (VAR_7 < 0) {
  VAR_8 = VAR_7;
  FUNC_1(VAR_4, "Failed adding MAC: %pM\n",
         VAR_4->dev->dev_addr);
  return VAR_8;
 }

 FUNC_2(VAR_4, "Steering Mode %d\n", VAR_6->caps.steering_mode);

 if (VAR_6->caps.steering_mode == VAR_3) {
  int VAR_11 = FUNC_3(VAR_6, VAR_4->port);
  *VAR_9 = VAR_11 + VAR_7;
  return 0;
 }

 VAR_8 = FUNC_5(VAR_6, 1, 1, VAR_9, VAR_1,
        VAR_2);
 FUNC_0(VAR_0, VAR_4, "Reserved qp %d\n", *VAR_9);
 if (VAR_8) {
  FUNC_1(VAR_4, "Failed to reserve qp for mac registration\n");
  FUNC_7(VAR_6, VAR_4->port, VAR_10);
  return VAR_8;
 }

 return 0;
}
