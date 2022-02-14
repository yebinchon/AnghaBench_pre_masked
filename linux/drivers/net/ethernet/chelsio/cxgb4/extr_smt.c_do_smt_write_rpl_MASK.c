
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smt_entry {int lock; int state; } ;
struct smt_data {struct smt_entry* smtab; } ;
struct cpl_smt_write_rpl {scalar_t__ status; } ;
struct adapter {int pdev_dev; struct smt_data* smt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpl_smt_write_rpl const*) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct adapter *VAR_2, const struct cpl_smt_write_rpl *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(FUNC_0(VAR_3));
 struct smt_data *VAR_5 = VAR_2->smt;

 if (FUNC_5(VAR_3->status != VAR_0)) {
  struct smt_entry *VAR_6 = &VAR_5->smtab[VAR_4];

  FUNC_2(VAR_2->pdev_dev,
   "Unexpected SMT_WRITE_RPL status %u for entry %u\n",
   VAR_3->status, VAR_4);
  FUNC_3(&VAR_6->lock);
  VAR_6->state = VAR_1;
  FUNC_4(&VAR_6->lock);
  return;
 }
}
