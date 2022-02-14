
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2t_entry {scalar_t__ state; int lock; TYPE_1__* neigh; } ;
struct l2t_data {unsigned int l2t_start; struct l2t_entry* l2tab; } ;
struct cpl_l2t_write_rpl {scalar_t__ status; } ;
struct adapter {int pdev_dev; struct l2t_data* l2t; } ;
struct TYPE_2__ {int nud_state; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct cpl_l2t_write_rpl const*) ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ,char*,scalar_t__,unsigned int) ;
 int FUNC_2 (struct adapter*,struct l2t_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct adapter *VAR_7, const struct cpl_l2t_write_rpl *VAR_8)
{
 struct l2t_data *VAR_9 = VAR_7->l2t;
 unsigned int VAR_10 = FUNC_0(VAR_8);
 unsigned int VAR_11 = VAR_10 % VAR_1;

 if (FUNC_5(VAR_8->status != VAR_0)) {
  FUNC_1(VAR_7->pdev_dev,
   "Unexpected L2T_WRITE_RPL status %u for entry %u\n",
   VAR_8->status, VAR_11);
  return;
 }

 if (VAR_10 & VAR_6) {
  struct l2t_entry *VAR_12 = &VAR_9->l2tab[VAR_11 - VAR_9->l2t_start];

  FUNC_3(&VAR_12->lock);
  if (VAR_12->state != VAR_3) {
   FUNC_2(VAR_7, VAR_12);
   VAR_12->state = (VAR_12->neigh->nud_state & VAR_5) ?
     VAR_2 : VAR_4;
  }
  FUNC_4(&VAR_12->lock);
 }
}
