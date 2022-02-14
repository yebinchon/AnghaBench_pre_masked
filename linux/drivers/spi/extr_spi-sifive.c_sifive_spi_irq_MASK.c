
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sifive_spi {int done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sifive_spi*,int ) ;
 int FUNC_2 (struct sifive_spi*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct sifive_spi *VAR_8 = VAR_7;
 u32 VAR_9 = FUNC_1(VAR_8, VAR_5);

 if (VAR_9 & (VAR_3 | VAR_2)) {

  FUNC_2(VAR_8, VAR_4, 0);
  FUNC_0(&VAR_8->done);
  return VAR_0;
 }

 return VAR_1;
}
