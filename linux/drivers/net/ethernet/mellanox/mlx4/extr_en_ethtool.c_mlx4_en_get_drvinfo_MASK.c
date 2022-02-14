
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_3__* dev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_4__ {int fw_ver; } ;
struct TYPE_6__ {TYPE_2__* persist; TYPE_1__ caps; } ;
struct TYPE_5__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,int,int,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_0(VAR_2);
 struct mlx4_en_dev *VAR_5 = VAR_4->mdev;

 FUNC_3(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_3(VAR_3->version, VAR_1,
  sizeof(VAR_3->version));
 FUNC_2(VAR_3->fw_version, sizeof(VAR_3->fw_version),
  "%d.%d.%d",
  (u16) (VAR_5->dev->caps.fw_ver >> 32),
  (u16) ((VAR_5->dev->caps.fw_ver >> 16) & 0xffff),
  (u16) (VAR_5->dev->caps.fw_ver & 0xffff));
 FUNC_3(VAR_3->bus_info, FUNC_1(VAR_5->dev->persist->pdev),
  sizeof(VAR_3->bus_info));
}
