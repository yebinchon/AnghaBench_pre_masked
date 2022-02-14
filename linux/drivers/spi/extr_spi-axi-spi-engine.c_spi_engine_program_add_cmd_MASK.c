
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct spi_engine_program {size_t length; int * instructions; } ;



__attribute__((used)) static void FUNC_0(struct spi_engine_program *VAR_0,
 bool VAR_1, uint16_t VAR_2)
{
 if (!VAR_1)
  VAR_0->instructions[VAR_0->length] = VAR_2;
 VAR_0->length++;
}
