
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgmac {int mii_bus; } ;
struct bcma_device {int dummy; } ;


 struct bgmac* FUNC_0 (struct bcma_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bcma_device*,int *) ;
 int FUNC_3 (struct bgmac*) ;
 int FUNC_4 (struct bgmac*) ;

__attribute__((used)) static void FUNC_5(struct bcma_device *VAR_0)
{
 struct bgmac *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->mii_bus);
 FUNC_3(VAR_1);
 FUNC_2(VAR_0, ((void*)0));
 FUNC_4(VAR_1);
}
