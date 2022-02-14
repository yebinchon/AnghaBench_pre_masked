
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int addr_width; } ;
struct mtk_nor {scalar_t__ base; int dev; struct spi_nor nor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtk_nor *VAR_2)
{
 u8 VAR_3;
 struct spi_nor *VAR_4 = &VAR_2->nor;

 VAR_3 = FUNC_1(VAR_2->base + VAR_1);

 switch (VAR_4->addr_width) {
 case 3:
  VAR_3 &= ~VAR_0;
  break;
 case 4:
  VAR_3 |= VAR_0;
  break;
 default:
  FUNC_0(VAR_2->dev, "Unexpected address width %u.\n",
    VAR_4->addr_width);
  break;
 }

 FUNC_2(VAR_3, VAR_2->base + VAR_1);
}
