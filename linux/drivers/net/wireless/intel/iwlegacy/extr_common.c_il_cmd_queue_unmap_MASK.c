
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct il_queue {scalar_t__ n_bd; scalar_t__ read_ptr; scalar_t__ write_ptr; int n_win; } ;
struct il_tx_queue {TYPE_1__* meta; struct il_queue q; } ;
struct il_priv {size_t cmd_queue; int pci_dev; struct il_tx_queue* txq; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct il_queue*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ) ;

void
FUNC_5(struct il_priv *VAR_4)
{
 struct il_tx_queue *VAR_5 = &VAR_4->txq[VAR_4->cmd_queue];
 struct il_queue *VAR_6 = &VAR_5->q;
 int VAR_7;

 if (VAR_6->n_bd == 0)
  return;

 while (VAR_6->read_ptr != VAR_6->write_ptr) {
  VAR_7 = FUNC_2(VAR_6, VAR_6->read_ptr, 0);

  if (VAR_5->meta[VAR_7].flags & VAR_0) {
   FUNC_4(VAR_4->pci_dev,
      FUNC_0(&VAR_5->meta[VAR_7], VAR_3),
      FUNC_1(&VAR_5->meta[VAR_7], VAR_2),
      VAR_1);
   VAR_5->meta[VAR_7].flags = 0;
  }

  VAR_6->read_ptr = FUNC_3(VAR_6->read_ptr, VAR_6->n_bd);
 }

 VAR_7 = VAR_6->n_win;
 if (VAR_5->meta[VAR_7].flags & VAR_0) {
  FUNC_4(VAR_4->pci_dev,
     FUNC_0(&VAR_5->meta[VAR_7], VAR_3),
     FUNC_1(&VAR_5->meta[VAR_7], VAR_2),
     VAR_1);
  VAR_5->meta[VAR_7].flags = 0;
 }
}
