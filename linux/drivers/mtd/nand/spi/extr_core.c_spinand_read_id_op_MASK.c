
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spinand_device {int scratchbuf; int spimem; } ;
struct spi_mem_op {int dummy; } ;


 int VAR_0 ;
 struct spi_mem_op FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,struct spi_mem_op*) ;

__attribute__((used)) static int FUNC_3(struct spinand_device *VAR_1, u8 *VAR_2)
{
 struct spi_mem_op VAR_3 = FUNC_0(0, VAR_1->scratchbuf,
       VAR_0);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1->spimem, &VAR_3);
 if (!VAR_4)
  FUNC_1(VAR_2, VAR_1->scratchbuf, VAR_0);

 return VAR_4;
}
