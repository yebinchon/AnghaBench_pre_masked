
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eth {int dummy; } ;
struct mii_bus {struct mtk_eth* priv; } ;


 int FUNC_0 (struct mtk_eth*,int,int) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct mtk_eth *VAR_3 = VAR_0->priv;

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
