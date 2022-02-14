
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pn533_target_type_a {int sel_res; int sens_res; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_3(struct pn533_target_type_a *VAR_2,
       int VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;

 if (VAR_3 < sizeof(struct pn533_target_type_a))
  return 0;







 VAR_4 = FUNC_2(VAR_2->sens_res);
 VAR_5 = FUNC_1(VAR_2->sens_res);

 if ((VAR_4 == VAR_1 &&
      VAR_5 != VAR_0) ||
     (VAR_4 != VAR_1 &&
      VAR_5 == VAR_0))
  return 0;


 if (FUNC_0(VAR_2->sel_res) != 0)
  return 0;

 return 1;
}
