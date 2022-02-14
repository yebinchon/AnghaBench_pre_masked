
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ bLinked; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(
 void *VAR_3,
 bool VAR_4,
 bool VAR_5,
 u32 VAR_6,
 u32 VAR_7,
 u32 *VAR_8
)
{
 PDM_ODM_T VAR_9 = (PDM_ODM_T)VAR_3;

 if (VAR_9->bLinked && (VAR_5 || VAR_4)) {

  VAR_8[0] = VAR_0;
  VAR_8[1] = VAR_1;
  VAR_8[2] = VAR_2;
 } else {
  VAR_8[0] = 2000;
  VAR_8[1] = 4000;
  VAR_8[2] = 5000;
 }
 return;
}
