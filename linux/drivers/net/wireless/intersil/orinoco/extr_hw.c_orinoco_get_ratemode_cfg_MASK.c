
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bitrate; int automatic; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;

void FUNC_1(int VAR_2, int *VAR_3, int *VAR_4)
{
 FUNC_0((VAR_2 < 0) || (VAR_2 >= VAR_0));

 *VAR_3 = VAR_1[VAR_2].bitrate * 100000;
 *VAR_4 = VAR_1[VAR_2].automatic;
}
