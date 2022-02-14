
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct tcpm_port {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct tcpm_port*,int) ;

__attribute__((used)) static int FUNC_1(struct tcpm_port *VAR_1,
          const union power_supply_propval *VAR_2)
{
 int VAR_3;

 switch (VAR_2->intval) {
 case 129:
  VAR_3 = FUNC_0(VAR_1, 0);
  break;
 case 128:
  VAR_3 = FUNC_0(VAR_1, 1);
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
