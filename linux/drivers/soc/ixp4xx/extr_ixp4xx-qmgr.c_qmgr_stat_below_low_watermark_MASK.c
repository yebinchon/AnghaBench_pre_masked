
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int statne_h; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;

int FUNC_2(unsigned int VAR_3)
{
 if (VAR_3 >= VAR_0)
  return (FUNC_1(&VAR_2->statne_h) >>
   (VAR_3 - VAR_0)) & 0x01;
 return FUNC_0(VAR_3) & VAR_1;
}
