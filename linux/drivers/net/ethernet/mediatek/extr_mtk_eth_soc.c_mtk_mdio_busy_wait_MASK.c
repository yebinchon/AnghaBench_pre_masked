
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eth {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct mtk_eth*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct mtk_eth *VAR_4)
{
 unsigned long VAR_5 = VAR_3;

 while (1) {
  if (!(FUNC_1(VAR_4, VAR_0) & VAR_1))
   return 0;
  if (FUNC_2(VAR_3, VAR_5 + VAR_2))
   break;
  FUNC_3(10, 20);
 }

 FUNC_0(VAR_4->dev, "mdio: MDIO timeout\n");
 return -1;
}
