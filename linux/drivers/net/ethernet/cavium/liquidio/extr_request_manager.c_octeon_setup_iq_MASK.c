
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int q_no; } ;
union oct_txpciq {int u64; TYPE_1__ s; } ;
typedef size_t u32 ;
struct octeon_instr_queue {int dummy; } ;
struct TYPE_11__ {scalar_t__ (* enable_io_queues ) (struct octeon_device*) ;} ;
struct octeon_device {TYPE_4__ fn_list; int num_iqs; TYPE_5__** instr_queue; TYPE_2__* pci_dev; } ;
struct TYPE_10__ {int u64; } ;
struct TYPE_12__ {int q_index; int ifidx; void* app_ctx; TYPE_3__ txpciq; } ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct octeon_device*,size_t) ;
 scalar_t__ FUNC_3 (struct octeon_device*,union oct_txpciq,size_t) ;
 scalar_t__ FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_5__* FUNC_6 (int) ;
 TYPE_5__* FUNC_7 (int,int) ;

int FUNC_8(struct octeon_device *VAR_0,
      int VAR_1,
      int VAR_2,
      union oct_txpciq VAR_3,
      u32 VAR_4,
      void *VAR_5)
{
 u32 VAR_6 = (u32)VAR_3.s.q_no;
 int VAR_7 = FUNC_1(&VAR_0->pci_dev->dev);

 if (VAR_0->instr_queue[VAR_6]) {
  FUNC_0(&VAR_0->pci_dev->dev, "IQ is in use. Cannot create the IQ: %d again\n",
   VAR_6);
  VAR_0->instr_queue[VAR_6]->txpciq.u64 = VAR_3.u64;
  VAR_0->instr_queue[VAR_6]->app_ctx = VAR_5;
  return 0;
 }
 VAR_0->instr_queue[VAR_6] =
     FUNC_7(sizeof(struct octeon_instr_queue), VAR_7);
 if (!VAR_0->instr_queue[VAR_6])
  VAR_0->instr_queue[VAR_6] =
      FUNC_6(sizeof(struct octeon_instr_queue));
 if (!VAR_0->instr_queue[VAR_6])
  return 1;


 VAR_0->instr_queue[VAR_6]->q_index = VAR_2;
 VAR_0->instr_queue[VAR_6]->app_ctx = VAR_5;
 VAR_0->instr_queue[VAR_6]->ifidx = VAR_1;

 if (FUNC_3(VAR_0, VAR_3, VAR_4)) {
  FUNC_5(VAR_0->instr_queue[VAR_6]);
  VAR_0->instr_queue[VAR_6] = ((void*)0);
  return 1;
 }

 VAR_0->num_iqs++;
 if (VAR_0->fn_list.enable_io_queues(VAR_0)) {
  FUNC_2(VAR_0, VAR_6);
  return 1;
 }

 return 0;
}
