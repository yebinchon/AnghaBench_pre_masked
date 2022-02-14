
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {struct mtk_nor* priv; } ;
struct mtk_nor {int dev; } ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtk_nor*,int,int*,int,int *,int ) ;
 int FUNC_2 (struct mtk_nor*,int) ;

__attribute__((used)) static int FUNC_3(struct spi_nor *VAR_0, u8 VAR_1, u8 *VAR_2,
        int VAR_3)
{
 int VAR_4;
 struct mtk_nor *VAR_5 = VAR_0->priv;

 switch (VAR_1) {
 case 128:

  VAR_4 = FUNC_2(VAR_5, *VAR_2);
  break;
 default:
  VAR_4 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3, ((void*)0), 0);
  if (VAR_4)
   FUNC_0(VAR_5->dev, "write reg failure!\n");
  break;
 }
 return VAR_4;
}
