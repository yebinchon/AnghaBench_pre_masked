
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip_delay; scalar_t__ read_byte; scalar_t__ write_buf; scalar_t__ write_byte; scalar_t__ read_buf; scalar_t__ select_chip; int * waitfunc; scalar_t__ cmdfunc; } ;
struct nand_chip {unsigned int options; TYPE_1__ legacy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct nand_chip*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

void FUNC_1(struct nand_chip *VAR_12)
{
 unsigned int VAR_13 = VAR_12->options & VAR_0;

 if (FUNC_0(VAR_12))
  return;


 if (!VAR_12->legacy.chip_delay)
  VAR_12->legacy.chip_delay = 20;


 if (!VAR_12->legacy.cmdfunc)
  VAR_12->legacy.cmdfunc = VAR_1;


 if (VAR_12->legacy.waitfunc == ((void*)0))
  VAR_12->legacy.waitfunc = VAR_7;

 if (!VAR_12->legacy.select_chip)
  VAR_12->legacy.select_chip = VAR_6;


 if (!VAR_12->legacy.read_byte || VAR_12->legacy.read_byte == VAR_4)
  VAR_12->legacy.read_byte = VAR_13 ? VAR_5 : VAR_4;
 if (!VAR_12->legacy.write_buf || VAR_12->legacy.write_buf == VAR_8)
  VAR_12->legacy.write_buf = VAR_13 ? VAR_9 : VAR_8;
 if (!VAR_12->legacy.write_byte || VAR_12->legacy.write_byte == VAR_10)
  VAR_12->legacy.write_byte = VAR_13 ? VAR_11 : VAR_10;
 if (!VAR_12->legacy.read_buf || VAR_12->legacy.read_buf == VAR_2)
  VAR_12->legacy.read_buf = VAR_13 ? VAR_3 : VAR_2;
}
