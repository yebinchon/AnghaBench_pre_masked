
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_nor_erase_type {void* opcode; } ;
struct spi_nor_erase_map {struct spi_nor_erase_type* erase_type; } ;
struct TYPE_2__ {struct spi_nor_erase_map erase_map; } ;
struct spi_nor {TYPE_1__ params; void* erase_opcode; int program_opcode; int read_opcode; } ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct spi_nor*) ;

__attribute__((used)) static void FUNC_4(struct spi_nor *VAR_1)
{
 VAR_1->read_opcode = FUNC_2(VAR_1->read_opcode);
 VAR_1->program_opcode = FUNC_1(VAR_1->program_opcode);
 VAR_1->erase_opcode = FUNC_0(VAR_1->erase_opcode);

 if (!FUNC_3(VAR_1)) {
  struct spi_nor_erase_map *VAR_2 = &VAR_1->params.erase_map;
  struct spi_nor_erase_type *VAR_3;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   VAR_3 = &VAR_2->erase_type[VAR_4];
   VAR_3->opcode =
    FUNC_0(VAR_3->opcode);
  }
 }
}
