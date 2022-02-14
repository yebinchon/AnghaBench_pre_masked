
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct esas2r_target {scalar_t__ target_state; } ;
struct esas2r_adapter {struct esas2r_target* targetdb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

u16 FUNC_0(struct esas2r_adapter *VAR_2, u16 VAR_3)
{
 u16 VAR_4 = VAR_3 + 1;

 while (VAR_4 < VAR_0) {
  struct esas2r_target *VAR_5 = VAR_2->targetdb + VAR_4;

  if (VAR_5->target_state == VAR_1)
   break;

  VAR_4++;
 }

 return VAR_4;
}
