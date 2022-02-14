
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg_action {int value; int mask; int reg; } ;
struct rapl_if_priv {int (* read_raw ) (int ,struct reg_action*) ;struct rapl_domain* platform_rapl_domain; int control_type; int ** regs; } ;
struct rapl_domain {size_t id; int power_zone; int rp; TYPE_1__* rpl; int * regs; int name; } ;
struct powercap_zone {int dummy; } ;
struct TYPE_2__ {int name; int prim_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct powercap_zone*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct powercap_zone*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct rapl_domain*) ;
 struct rapl_domain* FUNC_3 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 struct powercap_zone* FUNC_4 (int *,int ,char*,int *,int *,int,int *) ;
 int * VAR_11 ;
 int FUNC_5 (int ,struct rapl_if_priv*) ;
 int FUNC_6 (int ,struct reg_action*) ;
 int FUNC_7 (int ,struct reg_action*) ;
 int * VAR_12 ;

int FUNC_8(struct rapl_if_priv *VAR_13)
{
 struct rapl_domain *VAR_14;
 struct powercap_zone *VAR_15;
 struct reg_action VAR_16;
 int VAR_17;

 VAR_16.reg = VAR_13->regs[VAR_5][VAR_7];
 VAR_16.mask = ~0;
 VAR_17 = VAR_13->read_raw(0, &VAR_16);
 if (VAR_17 || !VAR_16.value)
  return -VAR_0;

 VAR_16.reg = VAR_13->regs[VAR_5][VAR_6];
 VAR_16.mask = ~0;
 VAR_17 = VAR_13->read_raw(0, &VAR_16);
 if (VAR_17 || !VAR_16.value)
  return -VAR_0;

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->name = VAR_11[VAR_5];
 VAR_14->id = VAR_5;
 VAR_14->regs[VAR_6] =
     VAR_13->regs[VAR_5][VAR_6];
 VAR_14->regs[VAR_7] =
     VAR_13->regs[VAR_5][VAR_7];
 VAR_14->rpl[0].prim_id = VAR_3;
 VAR_14->rpl[0].name = VAR_9;
 VAR_14->rpl[1].prim_id = VAR_4;
 VAR_14->rpl[1].name = VAR_10;
 VAR_14->rp = FUNC_5(0, VAR_13);

 VAR_15 = FUNC_4(&VAR_14->power_zone, VAR_13->control_type,
         "psys", ((void*)0),
         &VAR_12[VAR_5],
         2, &VAR_8);

 if (FUNC_0(VAR_15)) {
  FUNC_2(VAR_14);
  return FUNC_1(VAR_15);
 }

 VAR_13->platform_rapl_domain = VAR_14;

 return 0;
}
