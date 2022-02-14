
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_spi_priv {scalar_t__ base; } ;
struct spi_device {int master; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct uniphier_spi_priv* FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct spi_device *VAR_1, u32 VAR_2)
{
 struct uniphier_spi_priv *VAR_3 = FUNC_1(VAR_1->master);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->base + VAR_0);
 VAR_4 |= VAR_2;
 FUNC_2(VAR_4, VAR_3->base + VAR_0);
}
