
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int instr_processed; } ;
struct octeon_instr_queue {int lock; int instr_pending; TYPE_3__ stats; int host_write_index; int octeon_read_index; scalar_t__ fill_cnt; } ;
struct TYPE_5__ {int iq; } ;
struct octeon_device {struct octeon_instr_queue** instr_queue; TYPE_2__ io_qmask; TYPE_1__* pci_dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (struct octeon_device*,struct octeon_instr_queue*,int ) ;
 int FUNC_6 (struct octeon_device*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct octeon_device*) ;

__attribute__((used)) static inline void FUNC_11(struct octeon_device *VAR_1)
{
 int VAR_2;





 FUNC_4(VAR_1);


 FUNC_7(VAR_0);

 if (FUNC_10(VAR_1))
  FUNC_3(&VAR_1->pci_dev->dev, "There were pending requests\n");


 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++) {
  struct octeon_instr_queue *VAR_3;

  if (!(VAR_1->io_qmask.iq & FUNC_0(VAR_2)))
   continue;
  VAR_3 = VAR_1->instr_queue[VAR_2];

  if (FUNC_2(&VAR_3->instr_pending)) {
   FUNC_8(&VAR_3->lock);
   VAR_3->fill_cnt = 0;
   VAR_3->octeon_read_index = VAR_3->host_write_index;
   VAR_3->stats.instr_processed +=
    FUNC_2(&VAR_3->instr_pending);
   FUNC_5(VAR_1, VAR_3, 0);
   FUNC_9(&VAR_3->lock);
  }
 }


 FUNC_6(VAR_1, 1);


}
