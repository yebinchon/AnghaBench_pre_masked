
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_spi_priv {scalar_t__ base; } ;
struct spi_device {int master; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 struct uniphier_spi_priv* FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_5, int VAR_6)
{
 struct uniphier_spi_priv *VAR_7 = FUNC_2(VAR_5->master);
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7->base + VAR_2);
 VAR_8 &= ~(VAR_4 | VAR_3);
 VAR_8 |= FUNC_0(VAR_4, VAR_6);
 VAR_8 |= FUNC_0(VAR_3, VAR_6);
 FUNC_3(VAR_8, VAR_7->base + VAR_2);

 VAR_8 = FUNC_1(VAR_7->base + VAR_0);
 VAR_8 &= ~VAR_1;
 VAR_8 |= FUNC_0(VAR_1, VAR_6);
 FUNC_3(VAR_8, VAR_7->base + VAR_0);
}
