
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int write_reg; int read_reg; int write; int read; int spimem; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct spi_nor *VAR_1)
{
 if (!VAR_1->dev ||
     (!VAR_1->spimem &&
     (!VAR_1->read || !VAR_1->write || !VAR_1->read_reg ||
       !VAR_1->write_reg))) {
  FUNC_0("spi-nor: please fill all the necessary fields!\n");
  return -VAR_0;
 }

 return 0;
}
