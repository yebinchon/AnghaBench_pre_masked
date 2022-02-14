
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {scalar_t__ shortslot_override; int shortslot; int hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct brcms_c_info *VAR_2, bool VAR_3)
{

 if (VAR_2->shortslot_override != VAR_0)
  VAR_3 = (VAR_2->shortslot_override == VAR_1);

 if (VAR_2->shortslot == VAR_3)
  return;

 VAR_2->shortslot = VAR_3;

 FUNC_0(VAR_2->hw, VAR_3);
}
