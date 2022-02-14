
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int emulate_power_cut; scalar_t__ power_cut_counter; scalar_t__ power_cut_min; scalar_t__ power_cut_max; } ;
struct ubi_device {TYPE_1__ dbg; } ;


 unsigned int FUNC_0 () ;
 int FUNC_1 (struct ubi_device*,char*) ;
 int FUNC_2 (struct ubi_device*) ;

int FUNC_3(struct ubi_device *VAR_0, int VAR_1)
{
 unsigned int VAR_2;

 if ((VAR_0->dbg.emulate_power_cut & VAR_1) == 0)
  return 0;

 if (VAR_0->dbg.power_cut_counter == 0) {
  VAR_0->dbg.power_cut_counter = VAR_0->dbg.power_cut_min;

  if (VAR_0->dbg.power_cut_max > VAR_0->dbg.power_cut_min) {
   VAR_2 = VAR_0->dbg.power_cut_max - VAR_0->dbg.power_cut_min;
   VAR_0->dbg.power_cut_counter += FUNC_0() % VAR_2;
  }
  return 0;
 }

 VAR_0->dbg.power_cut_counter--;
 if (VAR_0->dbg.power_cut_counter)
  return 0;

 FUNC_1(VAR_0, "XXXXXXXXXXXXXXX emulating a power cut XXXXXXXXXXXXXXXX");
 FUNC_2(VAR_0);
 return 1;
}
