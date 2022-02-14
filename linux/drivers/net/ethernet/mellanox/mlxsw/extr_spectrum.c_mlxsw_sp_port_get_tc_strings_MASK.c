
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {char* str; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int ,char*,char*,int) ;

__attribute__((used)) static void FUNC_1(u8 **VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(*VAR_3, VAR_0, "%.29s_%.1d",
    VAR_2[VAR_5].str, VAR_4);
  *VAR_3 += VAR_0;
 }
}
