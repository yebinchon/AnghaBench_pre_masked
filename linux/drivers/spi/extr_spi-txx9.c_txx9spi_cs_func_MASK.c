
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9spi {int last_chipselect; int last_chipselect_val; } ;
struct spi_device {int mode; int chip_select; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_1, struct txx9spi *VAR_2,
  int VAR_3, unsigned int VAR_4)
{
 int VAR_5 = (VAR_1->mode & VAR_0) ? VAR_3 : !VAR_3;

 if (VAR_3) {

  if (VAR_2->last_chipselect >= 0)
   FUNC_0(VAR_2->last_chipselect,
     !VAR_2->last_chipselect_val);
  VAR_2->last_chipselect = VAR_1->chip_select;
  VAR_2->last_chipselect_val = VAR_5;
 } else {
  VAR_2->last_chipselect = -1;
  FUNC_1(VAR_4);
 }
 FUNC_0(VAR_1->chip_select, VAR_5);
 FUNC_1(VAR_4);
}
