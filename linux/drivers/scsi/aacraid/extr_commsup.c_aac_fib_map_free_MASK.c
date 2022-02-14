
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aac_fib_xporthdr {int dummy; } ;
struct aac_dev {int max_fib_size; int hw_fib_pa; int * hw_fib_va; TYPE_1__* pdev; TYPE_2__* scsi_host_ptr; int max_cmd_size; } ;
struct TYPE_4__ {int can_queue; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,size_t,int *,int ) ;

void FUNC_1(struct aac_dev *VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;
 int VAR_5;

 if(!VAR_2->hw_fib_va || !VAR_2->max_cmd_size)
  return;

 VAR_5 = VAR_2->scsi_host_ptr->can_queue + VAR_0;
 VAR_4 = VAR_2->max_fib_size + sizeof(struct aac_fib_xporthdr);
 VAR_3 = VAR_4 * VAR_5 + VAR_1 - 1;

 FUNC_0(&VAR_2->pdev->dev, VAR_3, VAR_2->hw_fib_va,
     VAR_2->hw_fib_pa);

 VAR_2->hw_fib_va = ((void*)0);
 VAR_2->hw_fib_pa = 0;
}
