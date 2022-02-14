
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ qpg; scalar_t__ use_qpg; int pkind; int q_no; } ;
union oct_txpciq {TYPE_3__ s; scalar_t__ u64; } ;
typedef int u32 ;
struct octeon_instr_queue {int dummy; } ;
struct TYPE_9__ {int pkind; } ;
struct octeon_device {scalar_t__ num_iqs; TYPE_4__** instr_queue; TYPE_2__ pfvf_hsword; TYPE_1__* pci_dev; } ;
struct TYPE_11__ {scalar_t__ ifidx; void* app_ctx; scalar_t__ q_index; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;
 scalar_t__ FUNC_4 (struct octeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_7 (struct octeon_device*,union oct_txpciq,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (int) ;
 TYPE_4__* FUNC_10 (int,int) ;

int FUNC_11(struct octeon_device *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 union oct_txpciq VAR_6;
 int VAR_7 = FUNC_5(&VAR_3->pci_dev->dev);

 if (FUNC_4(VAR_3))
  VAR_4 =
   FUNC_0(FUNC_1(VAR_3, VAR_2));
 else if (FUNC_2(VAR_3))
  VAR_4 = FUNC_0(FUNC_1(VAR_3, VAR_0));
 else if (FUNC_3(VAR_3))
  VAR_4 = FUNC_0(FUNC_1(VAR_3, VAR_1));

 VAR_3->num_iqs = 0;

 VAR_3->instr_queue[0] = FUNC_10(sizeof(*VAR_3->instr_queue[0]),
    VAR_7);
 if (!VAR_3->instr_queue[0])
  VAR_3->instr_queue[0] =
   FUNC_9(sizeof(struct octeon_instr_queue));
 if (!VAR_3->instr_queue[0])
  return 1;
 FUNC_6(VAR_3->instr_queue[0], 0, sizeof(struct octeon_instr_queue));
 VAR_3->instr_queue[0]->q_index = 0;
 VAR_3->instr_queue[0]->app_ctx = (void *)(size_t)0;
 VAR_3->instr_queue[0]->ifidx = 0;
 VAR_6.u64 = 0;
 VAR_6.s.q_no = VAR_5;
 VAR_6.s.pkind = VAR_3->pfvf_hsword.pkind;
 VAR_6.s.use_qpg = 0;
 VAR_6.s.qpg = 0;
 if (FUNC_7(VAR_3, VAR_6, VAR_4)) {

  FUNC_8(VAR_3->instr_queue[0]);
  VAR_3->instr_queue[0] = ((void*)0);
  return 1;
 }

 VAR_3->num_iqs++;
 return 0;
}
