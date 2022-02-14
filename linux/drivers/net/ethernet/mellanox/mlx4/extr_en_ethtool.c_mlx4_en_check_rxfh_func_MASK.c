
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int features; } ;
struct mlx4_en_priv {TYPE_2__* mdev; } ;
struct TYPE_6__ {int flags2; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {TYPE_3__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6, u8 VAR_7)
{
 struct mlx4_en_priv *VAR_8 = FUNC_1(VAR_6);


 if (VAR_7 == VAR_1) {
  if (!(VAR_8->mdev->dev->caps.flags2 & VAR_3))
   return -VAR_0;
  if (!(VAR_6->features & VAR_5))
   FUNC_0(VAR_8, "Toeplitz hash function should be used in conjunction with RX hashing for optimal performance\n");
  return 0;
 } else if (VAR_7 == VAR_2) {
  if (!(VAR_8->mdev->dev->caps.flags2 & VAR_4))
   return -VAR_0;
  if (VAR_6->features & VAR_5)
   FUNC_0(VAR_8, "Enabling both XOR Hash function and RX Hashing can limit RPS functionality\n");
  return 0;
 }

 return -VAR_0;
}
