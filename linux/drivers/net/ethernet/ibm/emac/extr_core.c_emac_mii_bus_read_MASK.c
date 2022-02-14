
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int priv; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0->priv, VAR_1, VAR_2);






 return VAR_3 < 0 ? 0xffff : VAR_3;
}
