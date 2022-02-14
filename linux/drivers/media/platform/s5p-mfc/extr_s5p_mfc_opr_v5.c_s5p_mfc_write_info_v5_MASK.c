
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {scalar_t__ virt; } ;
struct s5p_mfc_ctx {TYPE_1__ shm; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct s5p_mfc_ctx *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2)
{
 *(u32 *)(VAR_0->shm.virt + VAR_2) = VAR_1;
 FUNC_0();
}
