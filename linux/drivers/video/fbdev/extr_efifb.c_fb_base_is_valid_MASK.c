
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capabilities; scalar_t__ ext_lfb_base; scalar_t__ lfb_base; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(void)
{
 if (VAR_1.lfb_base)
  return 1;

 if (!(VAR_1.capabilities & VAR_0))
  return 0;

 if (VAR_1.ext_lfb_base)
  return 1;

 return 0;
}
