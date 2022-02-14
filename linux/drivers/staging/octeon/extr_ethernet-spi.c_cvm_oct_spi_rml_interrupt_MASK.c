
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ spx0; scalar_t__ spx1; } ;
union cvmx_npi_rsl_int_blocks {TYPE_1__ s; int u64; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 irqreturn_t VAR_4 = VAR_1;
 union cvmx_npi_rsl_int_blocks VAR_5;


 VAR_5.u64 = FUNC_1(VAR_0);
 if (VAR_5.s.spx1)
  VAR_4 = FUNC_0(1);

 if (VAR_5.s.spx0)
  VAR_4 = FUNC_0(0);

 return VAR_4;
}
