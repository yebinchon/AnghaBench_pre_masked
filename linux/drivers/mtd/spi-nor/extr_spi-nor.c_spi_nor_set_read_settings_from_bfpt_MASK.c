
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_nor_read_command {int num_mode_clocks; int num_wait_states; int opcode; int proto; } ;
typedef enum spi_nor_protocol { ____Placeholder_spi_nor_protocol } spi_nor_protocol ;



__attribute__((used)) static void
FUNC_0(struct spi_nor_read_command *VAR_0,
        u16 VAR_1,
        enum spi_nor_protocol VAR_2)
{
 VAR_0->num_mode_clocks = (VAR_1 >> 5) & 0x07;
 VAR_0->num_wait_states = (VAR_1 >> 0) & 0x1f;
 VAR_0->opcode = (VAR_1 >> 8) & 0xff;
 VAR_0->proto = VAR_2;
}
