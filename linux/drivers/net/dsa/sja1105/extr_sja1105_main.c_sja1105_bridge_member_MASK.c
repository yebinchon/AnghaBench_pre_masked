
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* tables; } ;
struct sja1105_private {TYPE_2__ static_config; } ;
struct sja1105_l2_forwarding_entry {int dummy; } ;
struct net_device {int dummy; } ;
struct dsa_switch {struct sja1105_private* priv; } ;
struct TYPE_6__ {struct net_device* bridge_dev; } ;
struct TYPE_4__ {struct sja1105_l2_forwarding_entry* entries; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dsa_switch*,int) ;
 TYPE_3__* FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct sja1105_private*,size_t,int,struct sja1105_l2_forwarding_entry*,int) ;
 int FUNC_3 (struct sja1105_l2_forwarding_entry*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch *VAR_2, int VAR_3,
     struct net_device *VAR_4, bool VAR_5)
{
 struct sja1105_l2_forwarding_entry *VAR_6;
 struct sja1105_private *VAR_7 = VAR_2->priv;
 int VAR_8, VAR_9;

 VAR_6 = VAR_7->static_config.tables[VAR_0].entries;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {



  if (!FUNC_0(VAR_2, VAR_8))
   continue;
  if (VAR_8 == VAR_3)
   continue;
  if (FUNC_1(VAR_2, VAR_8)->bridge_dev != VAR_4)
   continue;
  FUNC_3(VAR_6, VAR_8, VAR_3, VAR_5);
  FUNC_3(VAR_6, VAR_3, VAR_8, VAR_5);

  VAR_9 = FUNC_2(VAR_7, VAR_0,
        VAR_8, &VAR_6[VAR_8], 1);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return FUNC_2(VAR_7, VAR_0,
         VAR_3, &VAR_6[VAR_3], 1);
}
