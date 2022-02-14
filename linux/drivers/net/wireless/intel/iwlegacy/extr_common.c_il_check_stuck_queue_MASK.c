
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_queue {scalar_t__ read_ptr; scalar_t__ write_ptr; int id; } ;
struct il_tx_queue {unsigned long time_stamp; struct il_queue q; } ;
struct il_priv {TYPE_1__* cfg; struct il_tx_queue* txq; } ;
struct TYPE_2__ {int wd_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct il_priv*,int) ;
 unsigned long VAR_1 ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct il_priv *VAR_2, int VAR_3)
{
 struct il_tx_queue *VAR_4 = &VAR_2->txq[VAR_3];
 struct il_queue *VAR_5 = &VAR_4->q;
 unsigned long VAR_6;
 unsigned long VAR_7 = VAR_1;
 int VAR_8;

 if (VAR_5->read_ptr == VAR_5->write_ptr) {
  VAR_4->time_stamp = VAR_7;
  return 0;
 }

 VAR_6 =
     VAR_4->time_stamp +
     FUNC_3(VAR_2->cfg->wd_timeout);

 if (FUNC_4(VAR_7, VAR_6)) {
  FUNC_0("Queue %d stuck for %u ms.\n", VAR_5->id,
         FUNC_2(VAR_7 - VAR_4->time_stamp));
  VAR_8 = FUNC_1(VAR_2, 0);
  return (VAR_8 == -VAR_0) ? 0 : 1;
 }

 return 0;
}
