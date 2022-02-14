
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {int dummy; } ;
struct TYPE_2__ {int rd_data_reg_sel; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static unsigned char
FUNC_2(struct parport *VAR_1)
{
 unsigned long VAR_2;
 unsigned char VAR_3;

 FUNC_1(VAR_2);
 VAR_0.rd_data_reg_sel = 15;
 VAR_3 = VAR_0.rd_data_reg_sel;
 FUNC_0(VAR_2);
 return VAR_3;
}
