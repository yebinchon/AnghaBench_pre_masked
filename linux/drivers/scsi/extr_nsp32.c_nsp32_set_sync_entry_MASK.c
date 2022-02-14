
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char ackwidth; unsigned char offset; unsigned char sample_reg; int syncreg; } ;
typedef TYPE_2__ nsp32_target ;
struct TYPE_8__ {TYPE_1__* synct; } ;
typedef TYPE_3__ nsp32_hw_data ;
struct TYPE_6__ {unsigned char period_num; unsigned char ackwidth; unsigned char sample_rate; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (unsigned char,unsigned char) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(nsp32_hw_data *VAR_2,
     nsp32_target *VAR_3,
     int VAR_4,
     unsigned char VAR_5)
{
 unsigned char VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_2->synct[VAR_4].period_num;
 VAR_7 = VAR_2->synct[VAR_4].ackwidth;
 VAR_8 = VAR_2->synct[VAR_4].sample_rate;

 VAR_3->syncreg = FUNC_0(VAR_6, VAR_5);
 VAR_3->ackwidth = VAR_7;
 VAR_3->offset = VAR_5;
 VAR_3->sample_reg = VAR_8 | VAR_1;

 FUNC_1(VAR_0, "set sync");
}
