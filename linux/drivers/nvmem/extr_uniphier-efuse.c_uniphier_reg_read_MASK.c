
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uniphier_efuse_priv {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_0,
        unsigned int VAR_1, void *VAR_2, size_t VAR_3)
{
 struct uniphier_efuse_priv *VAR_4 = VAR_0;
 u8 *VAR_5 = VAR_2;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += sizeof(u8))
  *VAR_5++ = FUNC_0(VAR_4->base + VAR_1 + VAR_6);

 return 0;
}
