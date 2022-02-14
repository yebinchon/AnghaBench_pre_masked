
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmio_mmc_host {int pdev; TYPE_1__* pdata; } ;
struct TYPE_2__ {unsigned int hclk; int (* set_clk_div ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct tmio_mmc_host*,int ) ;
 int FUNC_2 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct tmio_mmc_host*) ;
 int FUNC_5 (struct tmio_mmc_host*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct tmio_mmc_host *VAR_3,
          unsigned int VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6 = 0;
 int VAR_7;

 if (VAR_4 == 0) {
  FUNC_5(VAR_3);
  return;
 }

 VAR_5 = VAR_3->pdata->hclk / VAR_4;


 VAR_7 = (VAR_5 <= 1);
 VAR_6 = VAR_7 ? 0 : (FUNC_0(VAR_5) >> 2);

 VAR_3->pdata->set_clk_div(VAR_3->pdev, VAR_7);

 FUNC_2(VAR_3, VAR_2, ~VAR_1 &
   FUNC_1(VAR_3, VAR_2));
 FUNC_2(VAR_3, VAR_2, VAR_6 & VAR_0);
 FUNC_6(10000, 11000);

 FUNC_4(VAR_3);
}
