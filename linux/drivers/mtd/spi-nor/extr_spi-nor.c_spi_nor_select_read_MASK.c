
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_nor_read_command {scalar_t__ num_wait_states; scalar_t__ num_mode_clocks; int proto; int opcode; } ;
struct TYPE_2__ {struct spi_nor_read_command* reads; } ;
struct spi_nor {scalar_t__ read_dummy; int read_proto; int read_opcode; TYPE_1__ params; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct spi_nor *VAR_2,
          u32 VAR_3)
{
 int VAR_4, VAR_5 = FUNC_1(VAR_3 & VAR_1) - 1;
 const struct spi_nor_read_command *VAR_6;

 if (VAR_5 < 0)
  return -VAR_0;

 VAR_4 = FUNC_2(FUNC_0(VAR_5));
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_6 = &VAR_2->params.reads[VAR_4];
 VAR_2->read_opcode = VAR_6->opcode;
 VAR_2->read_proto = VAR_6->proto;
 VAR_2->read_dummy = VAR_6->num_mode_clocks + VAR_6->num_wait_states;
 return 0;
}
