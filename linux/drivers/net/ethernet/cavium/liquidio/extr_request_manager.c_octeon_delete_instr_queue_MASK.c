
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct octeon_instr_queue {int max_count; int base_addr_dma; scalar_t__ base_addr; struct octeon_instr_queue* request_list; } ;
struct TYPE_6__ {unsigned long long iq; } ;
struct octeon_device {int num_iqs; struct octeon_instr_queue** instr_queue; TYPE_3__ io_qmask; TYPE_2__* check_db_wq; } ;
struct TYPE_4__ {int work; } ;
struct TYPE_5__ {int wq; TYPE_1__ wk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;
 scalar_t__ FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct octeon_device*,size_t,scalar_t__,int ) ;
 int FUNC_8 (struct octeon_instr_queue*) ;

int FUNC_9(struct octeon_device *VAR_3, u32 VAR_4)
{
 u64 VAR_5 = 0, VAR_6;
 struct octeon_instr_queue *VAR_7 = VAR_3->instr_queue[VAR_4];

 FUNC_5(&VAR_3->check_db_wq[VAR_4].wk.work);
 FUNC_6(VAR_3->check_db_wq[VAR_4].wq);

 if (FUNC_4(VAR_3))
  VAR_5 =
      FUNC_0(FUNC_1(VAR_3, VAR_2));
 else if (FUNC_2(VAR_3))
  VAR_5 =
      FUNC_0(FUNC_1(VAR_3, VAR_0));
 else if (FUNC_3(VAR_3))
  VAR_5 =
      FUNC_0(FUNC_1(VAR_3, VAR_1));

 FUNC_8(VAR_7->request_list);

 if (VAR_7->base_addr) {
  VAR_6 = VAR_7->max_count * VAR_5;
  FUNC_7(VAR_3, (u32)VAR_6, VAR_7->base_addr,
        VAR_7->base_addr_dma);
  VAR_3->io_qmask.iq &= ~(1ULL << VAR_4);
  FUNC_8(VAR_3->instr_queue[VAR_4]);
  VAR_3->instr_queue[VAR_4] = ((void*)0);
  VAR_3->num_iqs--;
  return 0;
 }
 return 1;
}
