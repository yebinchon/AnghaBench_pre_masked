
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dummy; } ;
struct hl_cq {scalar_t__ kernel_address; int free_slots_cnt; scalar_t__ pi; scalar_t__ ci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (void*,int ,int ) ;

void FUNC_2(struct hl_device *VAR_2, struct hl_cq *VAR_3)
{
 VAR_3->ci = 0;
 VAR_3->pi = 0;

 FUNC_0(&VAR_3->free_slots_cnt, VAR_0);
 FUNC_1((void *) (uintptr_t) VAR_3->kernel_address, 0, VAR_1);
}
