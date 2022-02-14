
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor_erase_type {int size; int opcode; } ;
struct spi_nor_erase_region {int offset; int size; } ;
struct spi_nor_erase_command {int count; int size; int opcode; int list; } ;


 int VAR_0 ;
 struct spi_nor_erase_command* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct spi_nor_erase_command* FUNC_2 (int,int ) ;

__attribute__((used)) static struct spi_nor_erase_command *
FUNC_3(const struct spi_nor_erase_region *VAR_3,
         const struct spi_nor_erase_type *VAR_4)
{
 struct spi_nor_erase_command *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_5->list);
 VAR_5->opcode = VAR_4->opcode;
 VAR_5->count = 1;

 if (VAR_3->offset & VAR_2)
  VAR_5->size = VAR_3->size;
 else
  VAR_5->size = VAR_4->size;

 return VAR_5;
}
