
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * stat2; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_2)
{
 FUNC_0(VAR_2 >= VAR_0);
 return (FUNC_1(&VAR_1->stat2[VAR_2 >> 4])
  >> ((VAR_2 & 0xF) << 1)) & 0x3;
}
