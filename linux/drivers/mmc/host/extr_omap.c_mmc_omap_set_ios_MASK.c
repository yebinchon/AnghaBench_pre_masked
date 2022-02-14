
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_omap_slot {scalar_t__ vdd; int power_mode; int saved_con; int bus_mode; int id; TYPE_1__* pdata; struct mmc_omap_host* host; } ;
struct mmc_omap_host {int dummy; } ;
struct mmc_ios {scalar_t__ vdd; int power_mode; int bus_mode; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* set_bus_mode ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct mmc_omap_host*,int ) ;
 int FUNC_1 (struct mmc_omap_host*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_4 (struct mmc_omap_host*,int) ;
 int FUNC_5 (struct mmc_omap_slot*,int) ;
 int FUNC_6 (struct mmc_omap_slot*,int ) ;
 int FUNC_7 (struct mmc_omap_slot*,int,scalar_t__) ;
 struct mmc_omap_slot* FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct mmc_host *VAR_4, struct mmc_ios *VAR_5)
{
 struct mmc_omap_slot *VAR_6 = FUNC_8(VAR_4);
 struct mmc_omap_host *VAR_7 = VAR_6->host;
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;

 FUNC_6(VAR_6, 0);

 VAR_9 = FUNC_3(VAR_4, VAR_5);

 if (VAR_5->vdd != VAR_6->vdd)
  VAR_6->vdd = VAR_5->vdd;

 VAR_10 = 0;
 VAR_11 = 0;
 switch (VAR_5->power_mode) {
 case 130:
  FUNC_7(VAR_6, 0, VAR_5->vdd);
  break;
 case 128:

  FUNC_7(VAR_6, 1, VAR_5->vdd);
  VAR_6->power_mode = VAR_5->power_mode;
  goto exit;
 case 129:
  FUNC_4(VAR_7, 1);
  VAR_10 = 1;
  VAR_9 |= 1 << 11;
  if (VAR_6->power_mode != 129)
   VAR_11 = 1;
  break;
 }
 VAR_6->power_mode = VAR_5->power_mode;

 if (VAR_6->bus_mode != VAR_5->bus_mode) {
  if (VAR_6->pdata->set_bus_mode != ((void*)0))
   VAR_6->pdata->set_bus_mode(FUNC_2(VAR_4), VAR_6->id,
        VAR_5->bus_mode);
  VAR_6->bus_mode = VAR_5->bus_mode;
 }





 for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
  FUNC_1(VAR_7, VAR_1, VAR_9);
 VAR_6->saved_con = VAR_9;
 if (VAR_11) {

  int VAR_12 = 250;


  FUNC_1(VAR_7, VAR_2, 0);
  FUNC_1(VAR_7, VAR_3, 0xffff);
  FUNC_1(VAR_7, VAR_0, 1 << 7);
  while (VAR_12 > 0 && (FUNC_0(VAR_7, VAR_3) & 1) == 0) {
   FUNC_10(1);
   VAR_12--;
  }
  FUNC_1(VAR_7, VAR_3, 1);
 }

exit:
 FUNC_5(VAR_6, VAR_10);
}
