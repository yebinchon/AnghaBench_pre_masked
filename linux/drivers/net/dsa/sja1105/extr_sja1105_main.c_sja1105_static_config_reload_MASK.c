
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* tables; } ;
struct sja1105_private {TYPE_1__ static_config; } ;
struct sja1105_mac_config_entry {size_t speed; } ;
struct TYPE_4__ {struct sja1105_mac_config_entry* entries; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct sja1105_private*,int,int) ;
 int FUNC_1 (struct sja1105_private*) ;
 int* VAR_3 ;
 int FUNC_2 (struct sja1105_private*) ;

int FUNC_3(struct sja1105_private *VAR_4)
{
 struct sja1105_mac_config_entry *VAR_5;
 int VAR_6[VAR_1];
 int VAR_7, VAR_8;

 VAR_5 = VAR_4->static_config.tables[VAR_0].entries;






 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_6[VAR_8] = VAR_3[VAR_5[VAR_8].speed];
  VAR_5[VAR_8].speed = VAR_2;
 }


 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7 < 0)
  goto out;





 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 < 0)
  goto out;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = FUNC_0(VAR_4, VAR_8, VAR_6[VAR_8]);
  if (VAR_7 < 0)
   goto out;
 }
out:
 return VAR_7;
}
