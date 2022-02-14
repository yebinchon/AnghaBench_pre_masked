
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mii_bus {struct bb_info* priv; } ;
struct bb_info {int dir; } ;


 int FUNC_0 (struct mii_bus*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bb_info*) ;
 int FUNC_3 (struct mii_bus*) ;
 struct mii_bus* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct mii_bus *VAR_1 = FUNC_4(VAR_0);
 struct bb_info *VAR_2 = VAR_1->priv;

 FUNC_3(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_2->dir);
 FUNC_2(VAR_2);

 return 0;
}
