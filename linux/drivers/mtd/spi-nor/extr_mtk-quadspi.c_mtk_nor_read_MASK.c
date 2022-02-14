
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u8 ;
struct spi_nor {struct mtk_nor* priv; } ;
struct mtk_nor {scalar_t__ base; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtk_nor*,int ) ;
 int FUNC_1 (struct mtk_nor*,int) ;
 int FUNC_2 (struct mtk_nor*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct spi_nor *VAR_2, loff_t VAR_3, size_t VAR_4,
       u_char *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = (int)VAR_3;
 u8 *VAR_9 = (u8 *)VAR_5;
 struct mtk_nor *VAR_10 = VAR_2->priv;


 FUNC_2(VAR_10);
 FUNC_1(VAR_10, VAR_8);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_7 = FUNC_0(VAR_10, VAR_0);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_9[VAR_6] = FUNC_3(VAR_10->base + VAR_1);
 }
 return VAR_4;
}
