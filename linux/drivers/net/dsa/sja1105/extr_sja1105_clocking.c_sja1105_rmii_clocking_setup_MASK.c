
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_private {TYPE_1__* ds; } ;
struct device {int dummy; } ;
typedef scalar_t__ sja1105_mii_role_t ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (struct sja1105_private*,int,int,int) ;
 int FUNC_2 (struct sja1105_private*,int) ;
 int FUNC_3 (struct sja1105_private*) ;
 int FUNC_4 (struct sja1105_private*,int) ;

__attribute__((used)) static int FUNC_5(struct sja1105_private *VAR_1, int VAR_2,
           sja1105_mii_role_t VAR_3)
{
 struct device *VAR_4 = VAR_1->ds->dev;
 int VAR_5;

 FUNC_0(VAR_4, "Configuring RMII-%s clocking\n",
  (VAR_3 == VAR_0) ? "MAC" : "PHY");

 if (VAR_3 == VAR_0) {

  VAR_5 = FUNC_3(VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_2, 0, 1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_3 == VAR_0) {
  VAR_5 = FUNC_2(VAR_1, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
