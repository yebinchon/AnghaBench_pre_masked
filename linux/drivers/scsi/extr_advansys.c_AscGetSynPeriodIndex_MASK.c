
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ const uchar ;
struct TYPE_3__ {scalar_t__* sdtr_period_tbl; scalar_t__ min_sdtr_index; scalar_t__ max_sdtr_index; } ;
typedef TYPE_1__ ASC_DVC_VAR ;



__attribute__((used)) static uchar FUNC_0(ASC_DVC_VAR *VAR_0, uchar VAR_1)
{
 const uchar *VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_2 = VAR_0->sdtr_period_tbl;
 VAR_3 = (int)VAR_0->max_sdtr_index;
 VAR_4 = (int)VAR_0->min_sdtr_index;
 if ((VAR_1 <= VAR_2[VAR_3])) {
  for (VAR_5 = VAR_4; VAR_5 < (VAR_3 - 1); VAR_5++) {
   if (VAR_1 <= VAR_2[VAR_5]) {
    return (uchar)VAR_5;
   }
  }
  return (uchar)VAR_3;
 } else {
  return (uchar)(VAR_3 + 1);
 }
}
