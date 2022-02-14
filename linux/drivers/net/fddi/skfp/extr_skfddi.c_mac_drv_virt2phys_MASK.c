
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long SharedMemDMA; scalar_t__ SharedMemAddr; } ;
struct s_smc {TYPE_1__ os; } ;



unsigned long FUNC_0(struct s_smc *VAR_0, void *VAR_1)
{
 return VAR_0->os.SharedMemDMA +
  ((char *) VAR_1 - (char *)VAR_0->os.SharedMemAddr);
}
