
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct fs_enet_private {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, u32 VAR_1)
{
 struct fs_enet_private *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->dev, "FS_ENET ERROR(s) 0x%x\n", VAR_1);
}
