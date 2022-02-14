
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {int dummy; } ;
struct TYPE_2__ {int rd_data_reg_sel; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static unsigned char
FUNC_2(struct parport *VAR_2)
{
 unsigned long VAR_3;
 unsigned char VAR_4 = 0;

 FUNC_1(VAR_3);
 VAR_1.rd_data_reg_sel = 14;
 if (!(VAR_1.rd_data_reg_sel & (1 << 5)))
  VAR_4 = VAR_0;
 FUNC_0(VAR_3);
 return VAR_4;
}
