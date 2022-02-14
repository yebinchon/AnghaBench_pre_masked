
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct reg_action {int value; int mask; int reg; } ;
struct rapl_package {int energy_unit; int power_unit; int time_unit; int name; TYPE_1__* priv; } ;
struct TYPE_2__ {int reg_unit; scalar_t__ (* read_raw ) (int,struct reg_action*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ,int,int,int) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (int,struct reg_action*) ;

__attribute__((used)) static int FUNC_3(struct rapl_package *VAR_8, int VAR_9)
{
 struct reg_action VAR_10;
 u32 VAR_11;

 VAR_10.reg = VAR_8->priv->reg_unit;
 VAR_10.mask = ~0;
 if (VAR_8->priv->read_raw(VAR_9, &VAR_10)) {
  FUNC_1("Failed to read power unit REG 0x%llx on CPU %d, exit.\n",
         VAR_8->priv->reg_unit, VAR_9);
  return -VAR_3;
 }

 VAR_11 = (VAR_10.value & VAR_0) >> VAR_1;
 VAR_8->energy_unit = VAR_2 * 1 << VAR_11;

 VAR_11 = (VAR_10.value & VAR_4) >> VAR_5;
 VAR_8->power_unit = (1 << VAR_11) * 1000;

 VAR_11 = (VAR_10.value & VAR_6) >> VAR_7;
 VAR_8->time_unit = 1000000 / (1 << VAR_11);

 FUNC_0("Atom %s energy=%dpJ, time=%dus, power=%duW\n",
   VAR_8->name, VAR_8->energy_unit, VAR_8->time_unit, VAR_8->power_unit);

 return 0;
}
