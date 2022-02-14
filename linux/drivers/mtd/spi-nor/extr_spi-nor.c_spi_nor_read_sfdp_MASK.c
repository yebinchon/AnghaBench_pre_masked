
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct spi_nor {int addr_width; int read_dummy; void* read_opcode; } ;


 void* VAR_0 ;
 int FUNC_0 (struct spi_nor*,int ,size_t,void*) ;

__attribute__((used)) static int FUNC_1(struct spi_nor *VAR_1, u32 VAR_2,
        size_t VAR_3, void *VAR_4)
{
 u8 VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_1->read_opcode;
 VAR_5 = VAR_1->addr_width;
 VAR_7 = VAR_1->read_dummy;

 VAR_1->read_opcode = VAR_0;
 VAR_1->addr_width = 3;
 VAR_1->read_dummy = 8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_1->read_opcode = VAR_6;
 VAR_1->addr_width = VAR_5;
 VAR_1->read_dummy = VAR_7;

 return VAR_8;
}
