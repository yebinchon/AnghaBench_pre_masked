
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u8 ;
struct spi_nor {struct mtk_nor* priv; } ;
struct mtk_nor {int dev; } ;
typedef int ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mtk_nor*,size_t,int const*) ;
 int FUNC_3 (struct mtk_nor*) ;
 int FUNC_4 (struct mtk_nor*) ;
 int FUNC_5 (struct mtk_nor*,size_t,int,int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct spi_nor *VAR_1, loff_t VAR_2, size_t VAR_3,
        const u_char *VAR_4)
{
 int VAR_5;
 struct mtk_nor *VAR_6 = VAR_1->priv;
 size_t VAR_7;

 VAR_5 = FUNC_4(VAR_6);
 if (VAR_5 < 0) {
  FUNC_1(VAR_6->dev, "write buffer enable failed!\n");
  return VAR_5;
 }

 for (VAR_7 = 0; VAR_7 + VAR_0 <= VAR_3; VAR_7 += VAR_0) {
  VAR_5 = FUNC_2(VAR_6, VAR_2, VAR_4);
  if (VAR_5 < 0) {
   FUNC_0(VAR_6->dev, "write buffer failed!\n");
   return VAR_5;
  }
  VAR_2 += VAR_0;
  VAR_4 += VAR_0;
 }
 VAR_5 = FUNC_3(VAR_6);
 if (VAR_5 < 0) {
  FUNC_1(VAR_6->dev, "write buffer disable failed!\n");
  return VAR_5;
 }

 if (VAR_7 < VAR_3) {
  VAR_5 = FUNC_5(VAR_6, VAR_2,
      (int)(VAR_3 - VAR_7), (u8 *)VAR_4);
  if (VAR_5 < 0) {
   FUNC_0(VAR_6->dev, "write single byte failed!\n");
   return VAR_5;
  }
 }

 return VAR_3;
}
