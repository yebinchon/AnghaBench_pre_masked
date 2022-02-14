
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sdio_mmc_card {TYPE_1__* reg; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;
struct TYPE_2__ {int poll_reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*,int ,int*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct mwifiex_adapter *VAR_2, u8 VAR_3)
{
 struct sdio_mmc_card *VAR_4 = VAR_2->card;
 u32 VAR_5;
 u8 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_1(VAR_2, VAR_4->reg->poll_reg, &VAR_6))
   break;
  else if ((VAR_6 & VAR_3) == VAR_3)
   return 0;

  FUNC_2(10, 20);
 }

 FUNC_0(VAR_2, VAR_0,
      "poll card status failed, tries = %d\n", VAR_5);

 return -1;
}
