
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_1__* VAR_2 ;

void FUNC_1(u8 **VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(*VAR_3, VAR_2[VAR_4].str,
         VAR_0);
  *VAR_3 += VAR_0;
 }
}
