
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct uniphier_u3hsphy_priv {int dev; } ;
typedef unsigned int nvmem_cell ;


 scalar_t__ FUNC_0 (unsigned int*) ;
 int FUNC_1 (unsigned int*) ;
 unsigned int* FUNC_2 (int ,char const*) ;
 int FUNC_3 (unsigned int*) ;
 unsigned int* FUNC_4 (unsigned int*,int *) ;

__attribute__((used)) static int FUNC_5(struct uniphier_u3hsphy_priv *VAR_0,
     const char *VAR_1, unsigned int *VAR_2)
{
 struct nvmem_cell *VAR_3;
 u8 *VAR_4;

 VAR_3 = FUNC_2(VAR_0->dev, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_4(VAR_3, ((void*)0));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 *VAR_2 = *VAR_4;

 FUNC_3(VAR_4);

 return 0;
}
