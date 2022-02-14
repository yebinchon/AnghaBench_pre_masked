
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct quatech_feature {scalar_t__ devid; int amcc; } ;


 int FUNC_0 (char*,scalar_t__) ;
 struct quatech_feature* VAR_0 ;

__attribute__((used)) static int FUNC_1(u16 VAR_1)
{
 struct quatech_feature *VAR_2 = &VAR_0[0];
 while (VAR_2->devid) {
  if (VAR_2->devid == VAR_1)
   return VAR_2->amcc;
  VAR_2++;
 }
 FUNC_0("quatech: unknown port type '0x%04X'.\n", VAR_1);
 return 0;
}
