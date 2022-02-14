
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {TYPE_1__* pdata; } ;
struct renesas_sdhi {int clk; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 struct renesas_sdhi* FUNC_3 (struct tmio_mmc_host*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static unsigned int FUNC_6(struct tmio_mmc_host *VAR_2,
         unsigned int VAR_3)
{
 struct renesas_sdhi *VAR_4 = FUNC_3(VAR_2);
 unsigned int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = ~0;
 int VAR_9;


 if (!(VAR_2->pdata->flags & VAR_0))
  return FUNC_0(VAR_4->clk);







 for (VAR_9 = FUNC_5(9, FUNC_4(VAR_1 / VAR_3)); VAR_9 >= 0; VAR_9--) {
  VAR_5 = FUNC_1(VAR_4->clk, VAR_3 << VAR_9);
  if (VAR_5 > (VAR_3 << VAR_9)) {

   VAR_5 = FUNC_1(VAR_4->clk,
           (VAR_3 << VAR_9) / 4 * 3);
   if (VAR_5 > (VAR_3 << VAR_9))
    continue;
  }

  VAR_6 = VAR_3 - (VAR_5 >> VAR_9);
  if (VAR_6 <= VAR_8) {
   VAR_7 = VAR_5;
   VAR_8 = VAR_6;
  }
 }

 FUNC_2(VAR_4->clk, VAR_7);

 return FUNC_0(VAR_4->clk);
}
