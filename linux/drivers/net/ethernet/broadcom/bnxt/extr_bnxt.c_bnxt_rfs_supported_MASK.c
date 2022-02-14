
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int flags; int fw_cap; } ;


 int FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bnxt*) ;

__attribute__((used)) static bool FUNC_2(struct bnxt *VAR_3)
{
 if (VAR_3->flags & VAR_0) {
  if (VAR_3->fw_cap & VAR_2)
   return 1;
  return 0;
 }
 if (FUNC_1(VAR_3) && !FUNC_0(VAR_3))
  return 1;
 if (VAR_3->flags & VAR_1)
  return 1;
 return 0;
}
