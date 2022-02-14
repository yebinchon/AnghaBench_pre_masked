
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_spi_priv {scalar_t__ base; int clk; } ;
struct spi_device {int master; } ;


 int FUNC_0 (int ,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;
 struct uniphier_spi_priv* FUNC_4 (int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct spi_device *VAR_2,
          unsigned int VAR_3)
{
 struct uniphier_spi_priv *VAR_4 = FUNC_4(VAR_2->master);
 u32 VAR_5, VAR_6;





 VAR_6 = FUNC_0(FUNC_1(VAR_4->clk), VAR_3);
 VAR_6 = FUNC_3(VAR_6, 2);

 VAR_5 = FUNC_2(VAR_4->base + VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_6 & VAR_1;
 FUNC_5(VAR_5, VAR_4->base + VAR_0);
}
