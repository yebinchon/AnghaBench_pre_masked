
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mv643xx_eth_private {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct mv643xx_eth_private* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct mv643xx_eth_private*) ;
 int FUNC_3 (struct mv643xx_eth_private*,int ) ;
 int FUNC_4 (struct mv643xx_eth_private*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_1(VAR_1);


 FUNC_4(VAR_2, VAR_0, 0);
 FUNC_3(VAR_2, VAR_0);

 if (FUNC_0(VAR_2->dev))
  FUNC_2(VAR_2);
}
