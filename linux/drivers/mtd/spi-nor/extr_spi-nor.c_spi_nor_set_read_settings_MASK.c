
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct spi_nor_read_command {int proto; void* opcode; void* num_wait_states; void* num_mode_clocks; } ;
typedef enum spi_nor_protocol { ____Placeholder_spi_nor_protocol } spi_nor_protocol ;



__attribute__((used)) static void
FUNC_0(struct spi_nor_read_command *VAR_0,
     u8 VAR_1,
     u8 VAR_2,
     u8 VAR_3,
     enum spi_nor_protocol VAR_4)
{
 VAR_0->num_mode_clocks = VAR_1;
 VAR_0->num_wait_states = VAR_2;
 VAR_0->opcode = VAR_3;
 VAR_0->proto = VAR_4;
}
