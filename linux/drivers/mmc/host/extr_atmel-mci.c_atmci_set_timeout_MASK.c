
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {unsigned int timeout_clks; int timeout_ns; } ;
struct atmel_mci_slot {TYPE_1__* mmc; } ;
struct atmel_mci {int dummy; } ;
struct TYPE_2__ {int class_dev; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_2 (struct atmel_mci*,int ) ;
 int FUNC_3 (struct atmel_mci*,int ,int) ;
 int FUNC_4 (int *,char*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct atmel_mci *VAR_1,
  struct atmel_mci_slot *VAR_2, struct mmc_data *VAR_3)
{
 static unsigned VAR_4[] = {
  0, 4, 7, 8, 10, 12, 16, 20
 };
 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7;

 VAR_5 = FUNC_2(VAR_1, VAR_3->timeout_ns)
  + VAR_3->timeout_clks;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  unsigned VAR_8 = VAR_4[VAR_7];
  VAR_6 = (VAR_5 + (1 << VAR_8) - 1) >> VAR_8;
  if (VAR_6 < 15)
   break;
 }

 if (VAR_7 >= 8) {
  VAR_7 = 7;
  VAR_6 = 15;
 }

 FUNC_4(&VAR_2->mmc->class_dev, "setting timeout to %u cycles\n",
   VAR_6 << VAR_4[VAR_7]);
 FUNC_3(VAR_1, VAR_0, (FUNC_1(VAR_7) | FUNC_0(VAR_6)));
}
