
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {int bus_width; int timing; int vdd; int chip_select; int power_mode; int bus_mode; int clock; } ;
struct mmc_host {TYPE_1__* ops; struct mmc_ios ios; } ;
struct TYPE_2__ {int (* set_ios ) (struct mmc_host*,struct mmc_ios*) ;} ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_2 (struct mmc_host*,struct mmc_ios*) ;

__attribute__((used)) static inline void FUNC_3(struct mmc_host *VAR_0)
{
 struct mmc_ios *VAR_1 = &VAR_0->ios;

 FUNC_1("%s: clock %uHz busmode %u powermode %u cs %u Vdd %u "
  "width %u timing %u\n",
   FUNC_0(VAR_0), VAR_1->clock, VAR_1->bus_mode,
   VAR_1->power_mode, VAR_1->chip_select, VAR_1->vdd,
   1 << VAR_1->bus_width, VAR_1->timing);

 VAR_0->ops->set_ios(VAR_0, VAR_1);
}
