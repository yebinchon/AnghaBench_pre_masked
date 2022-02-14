
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct sja1105_table {struct sja1105_l2_lookup_params_entry* entries; } ;
struct TYPE_2__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_1__ static_config; } ;
struct sja1105_l2_lookup_params_entry {int incl_srcpt1; int incl_srcpt0; int shared_learn; void* tpid2; void* tpid; } ;
struct sja1105_general_params_entry {int incl_srcpt1; int incl_srcpt0; int shared_learn; void* tpid2; void* tpid; } ;
struct dsa_switch {int dev; struct sja1105_private* priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct sja1105_private*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_5, int VAR_6, bool VAR_7)
{
 struct sja1105_l2_lookup_params_entry *VAR_8;
 struct sja1105_general_params_entry *VAR_9;
 struct sja1105_private *VAR_10 = VAR_5->priv;
 struct sja1105_table *VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14;

 if (VAR_7) {

  VAR_12 = VAR_2;
  VAR_13 = VAR_3;
 } else {

  VAR_12 = VAR_4;
  VAR_13 = VAR_4;
 }

 VAR_11 = &VAR_10->static_config.tables[VAR_0];
 VAR_9 = VAR_11->entries;

 VAR_9->tpid = VAR_12;

 VAR_9->tpid2 = VAR_13;



 VAR_9->incl_srcpt1 = VAR_7;
 VAR_9->incl_srcpt0 = VAR_7;
 VAR_11 = &VAR_10->static_config.tables[VAR_1];
 VAR_8 = VAR_11->entries;
 VAR_8->shared_learn = !VAR_7;

 VAR_14 = FUNC_2(VAR_10);
 if (VAR_14)
  FUNC_0(VAR_5->dev, "Failed to change VLAN Ethertype\n");





 return FUNC_1(VAR_5, !VAR_7);
}
