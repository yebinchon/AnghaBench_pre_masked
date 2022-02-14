
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
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (struct sja1105_private*,int,int,int) ;
 int FUNC_2 (struct sja1105_private*,int) ;
 int FUNC_3 (struct sja1105_private*,int) ;
 int FUNC_4 (struct sja1105_private*,int) ;
 int FUNC_5 (struct sja1105_private*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sja1105_private *VAR_2, int VAR_3,
          sja1105_mii_role_t VAR_4)
{
 struct device *VAR_5 = VAR_2->ds->dev;
 int VAR_6;

 FUNC_0(VAR_5, "Configuring MII-%s clocking\n",
  (VAR_4 == VAR_0) ? "MAC" : "PHY");



 VAR_6 = FUNC_1(VAR_2, VAR_3, (VAR_4 == VAR_1), 1);
 if (VAR_6 < 0)
  return VAR_6;





 VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;




 VAR_6 = FUNC_4(VAR_2, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4 == VAR_1) {





  VAR_6 = FUNC_3(VAR_2, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;




  VAR_6 = FUNC_2(VAR_2, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return 0;
}
