
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int ioctl; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static bool FUNC_1(unsigned int VAR_2)
{
 if (FUNC_0(VAR_2) >= VAR_0)
  return 0;
 return VAR_1[FUNC_0(VAR_2)].ioctl == VAR_2;
}
