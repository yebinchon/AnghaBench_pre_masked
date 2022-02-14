
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t limit_entry; unsigned char ackwidth; unsigned char offset; scalar_t__ sample_reg; int syncreg; } ;
typedef TYPE_2__ nsp32_target ;
struct TYPE_8__ {TYPE_1__* synct; } ;
typedef TYPE_3__ nsp32_hw_data ;
struct TYPE_6__ {unsigned char period_num; unsigned char start_period; unsigned char ackwidth; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_1(nsp32_hw_data *VAR_1,
          nsp32_target *VAR_2,
          unsigned char *VAR_3,
          unsigned char *VAR_4)
{
 unsigned char VAR_5, VAR_6;

 VAR_5 = VAR_1->synct[VAR_2->limit_entry].period_num;
 *VAR_3 = VAR_1->synct[VAR_2->limit_entry].start_period;
 VAR_6 = VAR_1->synct[VAR_2->limit_entry].ackwidth;
 *VAR_4 = VAR_0;

 VAR_2->syncreg = FUNC_0(VAR_5, *VAR_4);
 VAR_2->ackwidth = VAR_6;
 VAR_2->offset = *VAR_4;
 VAR_2->sample_reg = 0;
}
