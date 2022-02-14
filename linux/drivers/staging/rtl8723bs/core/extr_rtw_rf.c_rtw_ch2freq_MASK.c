
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ channel; scalar_t__ frequency; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

u32 FUNC_1(u32 VAR_1)
{
 u8 VAR_2;
 u32 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2].channel) {
   VAR_3 = VAR_0[VAR_2].frequency;
    break;
  }
 }
 if (VAR_2 == FUNC_0(VAR_0))
  VAR_3 = 2412;

 return VAR_3;
}
