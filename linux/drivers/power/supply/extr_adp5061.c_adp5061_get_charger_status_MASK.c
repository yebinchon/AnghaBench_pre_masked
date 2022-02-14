
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct adp5061_state {int dummy; } ;






 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct adp5061_state*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct adp5061_state *VAR_5,
          union power_supply_propval *VAR_6)
{
 u8 VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, &VAR_7, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 switch (FUNC_0(VAR_7)) {
 case 130:
  VAR_6->intval = VAR_3;
  break;
 case 128:
 case 132:
 case 131:
  VAR_6->intval = VAR_0;
  break;
 case 133:
  VAR_6->intval = VAR_2;
  break;
 case 129:

  VAR_6->intval = VAR_1;
  break;
 default:
  VAR_6->intval = VAR_4;
 }

 return VAR_9;
}
