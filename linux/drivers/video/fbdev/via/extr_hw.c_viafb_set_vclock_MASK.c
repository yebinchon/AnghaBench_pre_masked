
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct via_pll_config {int dummy; } ;
struct TYPE_2__ {int (* set_secondary_pll ) (struct via_pll_config) ;int (* set_primary_pll ) (struct via_pll_config) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct via_pll_config FUNC_0 (int ) ;
 int FUNC_1 (struct via_pll_config) ;
 int FUNC_2 (struct via_pll_config) ;
 int FUNC_3 (int,int) ;

void FUNC_4(u32 VAR_3, int VAR_4)
{
 struct via_pll_config VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_0)
  VAR_2.set_primary_pll(VAR_5);
 if (VAR_4 == VAR_1)
  VAR_2.set_secondary_pll(VAR_5);


 FUNC_3(0x0C, 0x0C);
}
