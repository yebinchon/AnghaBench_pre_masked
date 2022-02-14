
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_phy {int dummy; } ;
struct domain_device {scalar_t__ dev_type; int tproto; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct sas_phy* FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct sas_phy*,int) ;
 int FUNC_3 (struct sas_phy*) ;

__attribute__((used)) static int FUNC_4(struct domain_device *VAR_2)
{
 int VAR_3;
 struct sas_phy *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = (VAR_2->dev_type == VAR_1 ||
   (VAR_2->tproto & VAR_0)) ? 0 : 1;
 VAR_3 = FUNC_2(VAR_4, VAR_5);
 FUNC_3(VAR_4);
 FUNC_0(2000);
 return VAR_3;
}
