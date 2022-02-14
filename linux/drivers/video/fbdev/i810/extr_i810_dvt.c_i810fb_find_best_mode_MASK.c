
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ cr01; int pixclock; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0xFFFFFFFF, VAR_6 = 0, VAR_7 = 0;
 u8 VAR_8 = (u8) ((VAR_1 >> 3) - 1);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  if (VAR_0[VAR_6].cr01 == VAR_8) {
   if (VAR_0[VAR_6].pixclock <= VAR_3)
    VAR_4 = VAR_3 - VAR_0[VAR_6].pixclock;
   if (VAR_4 < VAR_5) {
        VAR_7 = VAR_6;
        VAR_5 = VAR_4;
   }
  }
 }
 return VAR_7;
}
