
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int bitrate; } ;


 int FUNC_0 (TYPE_1__*) ;
 int* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool FUNC_1(u16 VAR_3, int *VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_3 == VAR_0[VAR_5]) {
   *VAR_4 = VAR_5;
   return 0;
  }
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_3 == VAR_2[VAR_5].bitrate / 5) {
   *VAR_4 = VAR_5;
   break;
  }
 }
 return 1;
}
