
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {struct mtk_nor* priv; } ;
struct mtk_nor {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtk_nor*,int,int *,int ,int*,int) ;
 int FUNC_2 (struct mtk_nor*,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;
 struct mtk_nor *VAR_7 = VAR_2->priv;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_2(VAR_7, VAR_0);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_5 == 1)
   *VAR_4 = FUNC_3(VAR_7->base + VAR_1);
  else
   FUNC_0(VAR_7->dev, "len should be 1 for read status!\n");
  break;
 default:
  VAR_6 = FUNC_1(VAR_7, VAR_3, ((void*)0), 0, VAR_4, VAR_5);
  break;
 }
 return VAR_6;
}
