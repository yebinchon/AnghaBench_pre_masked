
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pn533_target_jewel {int sens_res; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct pn533_target_jewel *VAR_2,
       int VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;

 if (VAR_3 < sizeof(struct pn533_target_jewel))
  return 0;


 VAR_4 = FUNC_1(VAR_2->sens_res);
 VAR_5 = FUNC_0(VAR_2->sens_res);

 if ((VAR_4 == VAR_1 &&
      VAR_5 != VAR_0) ||
     (VAR_4 != VAR_1 &&
      VAR_5 == VAR_0))
  return 0;

 return 1;
}
