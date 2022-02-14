
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_st {int done; scalar_t__ base; scalar_t__ words_remaining; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct spi_st*) ;
 int FUNC_3 (struct spi_st*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct spi_st *VAR_4 = (struct spi_st *)VAR_3;


 FUNC_2(VAR_4);


 if (VAR_4->words_remaining) {
  FUNC_3(VAR_4);
 } else {

  FUNC_4(0x0, VAR_4->base + VAR_1);




  FUNC_1(VAR_4->base + VAR_1);
  FUNC_0(&VAR_4->done);
 }

 return VAR_0;
}
