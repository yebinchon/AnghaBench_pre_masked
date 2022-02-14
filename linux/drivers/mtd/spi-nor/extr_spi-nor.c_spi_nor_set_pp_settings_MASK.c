
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor_pp_command {int proto; int opcode; } ;
typedef enum spi_nor_protocol { ____Placeholder_spi_nor_protocol } spi_nor_protocol ;



__attribute__((used)) static void
FUNC_0(struct spi_nor_pp_command *VAR_0,
   u8 VAR_1,
   enum spi_nor_protocol VAR_2)
{
 VAR_0->opcode = VAR_1;
 VAR_0->proto = VAR_2;
}
