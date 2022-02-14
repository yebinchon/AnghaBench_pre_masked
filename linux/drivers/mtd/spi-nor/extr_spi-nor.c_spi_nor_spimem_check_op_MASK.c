
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; } ;
struct spi_nor {int spimem; TYPE_1__ mtd; } ;
struct TYPE_4__ {int nbytes; } ;
struct spi_mem_op {TYPE_2__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct spi_mem_op*) ;

__attribute__((used)) static int FUNC_1(struct spi_nor *VAR_2,
       struct spi_mem_op *VAR_3)
{






 VAR_3->addr.nbytes = 4;
 if (!FUNC_0(VAR_2->spimem, VAR_3)) {
  if (VAR_2->mtd.size > VAR_1)
   return -VAR_0;


  VAR_3->addr.nbytes = 3;
  if (!FUNC_0(VAR_2->spimem, VAR_3))
   return -VAR_0;
 }

 return 0;
}
