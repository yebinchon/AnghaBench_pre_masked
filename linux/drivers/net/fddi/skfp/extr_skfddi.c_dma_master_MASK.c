
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_2__ {scalar_t__ SharedMemAddr; scalar_t__ SharedMemDMA; } ;
struct s_smc {TYPE_1__ os; } ;



u_long FUNC_0(struct s_smc * VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
 return VAR_0->os.SharedMemDMA +
  ((char *) VAR_1 - (char *)VAR_0->os.SharedMemAddr);
}
