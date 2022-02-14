
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bitrate; int automatic; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0(int VAR_2, int VAR_3)
{
 int VAR_4 = -1;
 int VAR_5;

 if ((VAR_2 != 10) && (VAR_2 != 20) &&
     (VAR_2 != 55) && (VAR_2 != 110))
  return VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if ((VAR_1[VAR_5].bitrate == VAR_2) &&
      (VAR_1[VAR_5].automatic == VAR_3)) {
   VAR_4 = VAR_5;
   break;
  }
 }
 return VAR_4;
}
