
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bus_freq; } ;
struct davinci_mdio_data {int clk_div; int access_time; TYPE_1__ pdata; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct davinci_mdio_data *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_2 = FUNC_0(VAR_1->clk);
 VAR_3 = (VAR_2 / VAR_1->pdata.bus_freq) - 1;
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 VAR_1->clk_div = VAR_3;






 VAR_4 = VAR_2 / (1000 * (VAR_3 + 1));
 VAR_5 = (88 * 1000) / VAR_4;







 VAR_1->access_time = FUNC_1(VAR_5 * 4);
 if (!VAR_1->access_time)
  VAR_1->access_time = 1;
}
