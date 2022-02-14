
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
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct octeon_device*,struct octeon_instr_queue*,int ) ;
 int FUNC_5 (struct octeon_device*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct octeon_device*) ;

__attribute__((used)) static void FUNC_10(struct octeon_device *VAR_0)
{
 int VAR_1;







 FUNC_6(100);

 if (FUNC_9(VAR_0))
  FUNC_3(&VAR_0->pci_dev->dev, "There were pending requests\n");


 for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++) {
  struct octeon_instr_queue *VAR_2;

  if (!(VAR_0->io_qmask.iq & FUNC_0(VAR_1)))
   continue;
  VAR_2 = VAR_0->instr_queue[VAR_1];

  if (FUNC_2(&VAR_2->instr_pending)) {
   FUNC_7(&VAR_2->lock);
   VAR_2->fill_cnt = 0;
   VAR_2->octeon_read_index = VAR_2->host_write_index;
   VAR_2->stats.instr_processed +=
       FUNC_2(&VAR_2->instr_pending);
   FUNC_4(VAR_0, VAR_2, 0);
   FUNC_8(&VAR_2->lock);
  }
 }


 FUNC_5(VAR_0, 1);


}
