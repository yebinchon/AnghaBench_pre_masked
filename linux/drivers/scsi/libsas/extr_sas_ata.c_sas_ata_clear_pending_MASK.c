
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ex_phy {int dummy; } ;
struct domain_device {scalar_t__ dev_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct domain_device*,struct ex_phy*) ;

__attribute__((used)) static int FUNC_1(struct domain_device *VAR_1, struct ex_phy *VAR_2)
{
 int VAR_3;


 if (VAR_1->dev_type != VAR_0)
  return 1;




 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  return 0;
 else
  return 1;
}
