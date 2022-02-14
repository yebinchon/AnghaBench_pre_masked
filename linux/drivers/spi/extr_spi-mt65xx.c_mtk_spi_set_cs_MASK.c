
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int master; } ;
struct mtk_spi {int state; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mtk_spi*) ;
 int FUNC_1 (scalar_t__) ;
 struct mtk_spi* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_3, bool VAR_4)
{
 u32 VAR_5;
 struct mtk_spi *VAR_6 = FUNC_2(VAR_3->master);

 VAR_5 = FUNC_1(VAR_6->base + VAR_2);
 if (!VAR_4) {
  VAR_5 |= VAR_1;
  FUNC_3(VAR_5, VAR_6->base + VAR_2);
 } else {
  VAR_5 &= ~VAR_1;
  FUNC_3(VAR_5, VAR_6->base + VAR_2);
  VAR_6->state = VAR_0;
  FUNC_0(VAR_6);
 }
}
