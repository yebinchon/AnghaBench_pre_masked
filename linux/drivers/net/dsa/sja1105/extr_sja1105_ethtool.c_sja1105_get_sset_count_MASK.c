
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_private {TYPE_1__* info; } ;
struct dsa_switch {struct sja1105_private* priv; } ;
struct TYPE_2__ {scalar_t__ device_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_1(struct dsa_switch *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = FUNC_0(VAR_4);
 struct sja1105_private *VAR_10 = VAR_6->priv;

 if (VAR_8 != VAR_1)
  return -VAR_0;

 if (VAR_10->info->device_id == VAR_2 ||
     VAR_10->info->device_id == VAR_3)
  VAR_9 += FUNC_0(VAR_5);

 return VAR_9;
}
