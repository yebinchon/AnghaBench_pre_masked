
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct adp5061_state {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (struct adp5061_state*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct adp5061_state *VAR_3,
    union power_supply_propval *VAR_4)
{
 u8 VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_3, &VAR_5, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_2[FUNC_0(VAR_5)];
 if (VAR_7 > VAR_0)
  VAR_4->intval = VAR_1;
 else
  VAR_4->intval = VAR_7;

 return VAR_8;
}
