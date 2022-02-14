
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_msiof_spi_priv {scalar_t__ mapbase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int,int,int,int) ;
 int FUNC_1 (struct sh_msiof_spi_priv*,scalar_t__) ;
 int FUNC_2 (struct sh_msiof_spi_priv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct sh_msiof_spi_priv *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_2 | VAR_3;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_0);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3;
 FUNC_2(VAR_1, VAR_0, VAR_5);

 return FUNC_0(VAR_1->mapbase + VAR_0, VAR_5,
      (VAR_5 & VAR_4) == VAR_3, 1, 100);
}
