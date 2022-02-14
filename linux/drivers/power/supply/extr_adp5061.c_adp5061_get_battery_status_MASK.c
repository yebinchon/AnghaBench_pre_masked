
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
 int FUNC_1 (struct adp5061_state*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct adp5061_state *VAR_4,
          union power_supply_propval *VAR_5)
{
 u8 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, &VAR_6, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 switch (FUNC_0(VAR_7)) {
 case 0x0:
 case 0x1:
  VAR_5->intval = VAR_3;
  break;
 case 0x2:
  VAR_5->intval = VAR_0;
  break;
 case 0x3:
  VAR_5->intval = VAR_1;
  break;
 case 0x4:
  VAR_5->intval = VAR_2;
  break;
 }

 return VAR_8;
}
