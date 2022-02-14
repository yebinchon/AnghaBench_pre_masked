
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* choice; unsigned long config; int size; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2, unsigned long *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_0[VAR_1].choice == ((void*)0))
  *VAR_3 = VAR_0[VAR_1].config;
 else {

  if (VAR_2 < VAR_0[VAR_1].size) {
   *VAR_3 = VAR_0[VAR_1].config |
    VAR_0[VAR_1].choice[VAR_2];
  }
 }
 return VAR_4;
}
