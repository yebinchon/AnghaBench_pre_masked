
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {scalar_t__ max_tpa_v2; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_2)
{
 if (FUNC_1(VAR_2)) {
  if (VAR_2->max_tpa_v2)
   return FUNC_0(VAR_0);
  return FUNC_0(VAR_1);
 }
 return 0;
}
