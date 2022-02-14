
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_private {TYPE_1__* info; int static_config; } ;
struct sja1105_dt_port {int dummy; } ;
struct TYPE_2__ {int device_id; int static_ops; } ;


 int FUNC_0 (struct sja1105_private*,int) ;
 int FUNC_1 (struct sja1105_private*) ;
 int FUNC_2 (struct sja1105_private*) ;
 int FUNC_3 (struct sja1105_private*) ;
 int FUNC_4 (struct sja1105_private*) ;
 int FUNC_5 (struct sja1105_private*) ;
 int FUNC_6 (struct sja1105_private*) ;
 int FUNC_7 (struct sja1105_private*,struct sja1105_dt_port*) ;
 int FUNC_8 (struct sja1105_private*) ;
 int FUNC_9 (struct sja1105_private*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (struct sja1105_private*) ;

__attribute__((used)) static int FUNC_13(struct sja1105_private *VAR_0,
          struct sja1105_dt_port *VAR_1)
{
 int VAR_2;

 FUNC_10(&VAR_0->static_config);
 VAR_2 = FUNC_11(&VAR_0->static_config,
     VAR_0->info->static_ops,
     VAR_0->info->device_id);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_7(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_8(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_9(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0, 0);
 if (VAR_2 < 0)
  return VAR_2;


 return FUNC_12(VAR_0);
}
