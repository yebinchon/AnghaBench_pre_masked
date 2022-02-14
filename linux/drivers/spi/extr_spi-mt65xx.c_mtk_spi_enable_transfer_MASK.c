
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;
struct mtk_spi {scalar_t__ state; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct mtk_spi* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_master *VAR_4)
{
 u32 VAR_5;
 struct mtk_spi *VAR_6 = FUNC_1(VAR_4);

 VAR_5 = FUNC_0(VAR_6->base + VAR_2);
 if (VAR_6->state == VAR_0)
  VAR_5 |= VAR_1;
 else
  VAR_5 |= VAR_3;
 FUNC_2(VAR_5, VAR_6->base + VAR_2);
}
