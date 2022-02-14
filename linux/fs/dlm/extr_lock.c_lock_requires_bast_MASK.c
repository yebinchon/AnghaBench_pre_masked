
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lkb {int lkb_grmode; int lkb_highbast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;

__attribute__((used)) static int FUNC_0(struct dlm_lkb *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_3->lkb_grmode == VAR_1 && VAR_5) {
  if (VAR_3->lkb_highbast < VAR_0)
   return 1;
  return 0;
 }

 if (VAR_3->lkb_highbast < VAR_4 &&
     !VAR_2[VAR_3->lkb_grmode+1][VAR_4+1])
  return 1;
 return 0;
}
