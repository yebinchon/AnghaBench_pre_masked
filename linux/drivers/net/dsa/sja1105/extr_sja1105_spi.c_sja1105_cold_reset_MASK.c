
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_reset_cmd {int cold_rst; int member_0; } ;
struct sja1105_private {TYPE_1__* info; } ;
struct TYPE_2__ {int (* reset_cmd ) (struct sja1105_private const*,struct sja1105_reset_cmd*) ;} ;


 int FUNC_0 (struct sja1105_private const*,struct sja1105_reset_cmd*) ;

__attribute__((used)) static int FUNC_1(const struct sja1105_private *VAR_0)
{
 struct sja1105_reset_cmd VAR_1 = {0};

 VAR_1.cold_rst = 1;
 return VAR_0->info->reset_cmd(VAR_0, &VAR_1);
}
