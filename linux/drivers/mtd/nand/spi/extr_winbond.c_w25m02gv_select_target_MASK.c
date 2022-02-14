
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinand_device {unsigned int* scratchbuf; int spimem; } ;
struct spi_mem_op {int dummy; } ;


 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,unsigned int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,struct spi_mem_op*) ;

__attribute__((used)) static int FUNC_4(struct spinand_device *VAR_2,
      unsigned int VAR_3)
{
 struct spi_mem_op VAR_4 = FUNC_0(FUNC_1(0xc2, 1),
       VAR_0,
       VAR_1,
       FUNC_2(1,
       VAR_2->scratchbuf,
       1));

 *VAR_2->scratchbuf = VAR_3;
 return FUNC_3(VAR_2->spimem, &VAR_4);
}
