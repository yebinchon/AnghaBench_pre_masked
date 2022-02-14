
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* tables; } ;
struct sja1105_private {TYPE_2__ static_config; } ;
struct sja1105_mac_config_entry {int vlanid; } ;
struct TYPE_3__ {struct sja1105_mac_config_entry* entries; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sja1105_private*,size_t,int,struct sja1105_mac_config_entry*,int) ;

__attribute__((used)) static int FUNC_1(struct sja1105_private *VAR_1, int VAR_2, u16 VAR_3)
{
 struct sja1105_mac_config_entry *VAR_4;

 VAR_4 = VAR_1->static_config.tables[VAR_0].entries;

 VAR_4[VAR_2].vlanid = VAR_3;

 return FUNC_0(VAR_1, VAR_0, VAR_2,
        &VAR_4[VAR_2], 1);
}
