
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long addr; unsigned long size; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned char VAR_3)
{
 int VAR_4;
 unsigned long VAR_5 = FUNC_0(VAR_0), VAR_6;

 if (VAR_3 & 0x01) {






  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
   VAR_6 = VAR_1[VAR_4].addr + VAR_1[VAR_4].size;
   if (VAR_6 <= VAR_5 && VAR_5 <= VAR_6 + 4)
    return 1;
  }
 }
 return 0;
}
