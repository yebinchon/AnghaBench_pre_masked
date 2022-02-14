
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int ulong ;
struct TYPE_2__ {scalar_t__ SharedMemAddr; scalar_t__ SharedMemHeap; scalar_t__ SharedMemSize; scalar_t__ SharedMemDMA; } ;
struct s_smc {TYPE_1__ os; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int) ;

void *FUNC_2(struct s_smc *VAR_0, unsigned int VAR_1)
{
 void *VAR_2;

 FUNC_0("mac_drv_get_space (%d bytes), ", VAR_1);
 VAR_2 = (void *) (VAR_0->os.SharedMemAddr + VAR_0->os.SharedMemHeap);

 if ((VAR_0->os.SharedMemHeap + VAR_1) > VAR_0->os.SharedMemSize) {
  FUNC_1("Unexpected SMT memory size requested: %d\n", VAR_1);
  return ((void*)0);
 }
 VAR_0->os.SharedMemHeap += VAR_1;

 FUNC_0("mac_drv_get_space end\n");
 FUNC_0("virt addr: %lx\n", (ulong) VAR_2);
 FUNC_0("bus  addr: %lx\n", (ulong)
        (VAR_0->os.SharedMemDMA +
  ((char *) VAR_2 - (char *)VAR_0->os.SharedMemAddr)));
 return VAR_2;
}
