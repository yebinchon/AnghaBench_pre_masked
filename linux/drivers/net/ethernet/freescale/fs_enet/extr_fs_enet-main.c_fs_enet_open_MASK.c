
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct fs_enet_private {int napi; int interrupt; int dev; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fs_enet_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,char*,struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3)
{
 struct fs_enet_private *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;
 int VAR_6;



 FUNC_2(VAR_4->ndev);

 FUNC_5(&VAR_4->napi);


 VAR_5 = FUNC_9(VAR_4->interrupt, VAR_2, VAR_1,
   "fs_enet-mac", VAR_3);
 if (VAR_5 != 0) {
  FUNC_0(VAR_4->dev, "Could not allocate FS_ENET IRQ!");
  FUNC_4(&VAR_4->napi);
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_4->interrupt, VAR_3);
  FUNC_4(&VAR_4->napi);
  return VAR_6;
 }
 FUNC_8(VAR_3->phydev);

 FUNC_7(VAR_3);

 return 0;
}
