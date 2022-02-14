
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ const vcn; int length; scalar_t__ lcn; } ;
typedef TYPE_1__ runlist_element ;
typedef scalar_t__ VCN ;
typedef scalar_t__ LCN ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

LCN FUNC_3(const runlist_element *VAR_2, const VCN VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3 < 0);





 if (FUNC_2(!VAR_2))
  return VAR_1;


 if (FUNC_2(VAR_3 < VAR_2[0].vcn))
  return VAR_0;

 for (VAR_4 = 0; FUNC_1(VAR_2[VAR_4].length); VAR_4++) {
  if (FUNC_2(VAR_3 < VAR_2[VAR_4+1].vcn)) {
   if (FUNC_1(VAR_2[VAR_4].lcn >= (LCN)0))
    return VAR_2[VAR_4].lcn + (VAR_3 - VAR_2[VAR_4].vcn);
   return VAR_2[VAR_4].lcn;
  }
 }




 if (FUNC_1(VAR_2[VAR_4].lcn < (LCN)0))
  return VAR_2[VAR_4].lcn;

 return VAR_0;
}
