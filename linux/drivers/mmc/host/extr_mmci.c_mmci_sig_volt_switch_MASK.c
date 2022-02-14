
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {int signal_voltage; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_0, struct mmc_ios *VAR_1)
{
 int VAR_2 = 0;

 if (!FUNC_0(VAR_0->supply.vqmmc)) {

  switch (VAR_1->signal_voltage) {
  case 128:
   VAR_2 = FUNC_3(VAR_0->supply.vqmmc,
      2700000, 3600000);
   break;
  case 129:
   VAR_2 = FUNC_3(VAR_0->supply.vqmmc,
      1700000, 1950000);
   break;
  case 130:
   VAR_2 = FUNC_3(VAR_0->supply.vqmmc,
      1100000, 1300000);
   break;
  }

  if (VAR_2)
   FUNC_1(FUNC_2(VAR_0), "Voltage switch failed\n");
 }

 return VAR_2;
}
