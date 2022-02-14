
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct i596_private {int mpu_port; int ca; int dma_addr; int dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct i596_private* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_4(VAR_1);
 struct i596_private *VAR_3 = FUNC_3(VAR_2);

 FUNC_5(VAR_2);
 FUNC_0(VAR_2->dev.parent, sizeof(struct i596_private), VAR_3->dma,
         VAR_3->dma_addr, VAR_0);
 FUNC_2(VAR_3->ca);
 FUNC_2(VAR_3->mpu_port);
 FUNC_1 (VAR_2);
 return 0;
}
