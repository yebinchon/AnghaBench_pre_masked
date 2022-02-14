
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srq_entry {int valid; unsigned int idx; void* max_msn; void* cur_msn; int qbase; int qlen; int pdid; } ;
struct srq_data {int comp; struct srq_entry* entryp; } ;
struct cpl_srq_table_rpl {scalar_t__ status; int max_msn; int cur_msn; int qlen_qbase; int rsvd_pdid; } ;
struct adapter {int pdev_dev; struct srq_data* srq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpl_srq_table_rpl const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct adapter *VAR_1,
        const struct cpl_srq_table_rpl *VAR_2)
{
 unsigned int VAR_3 = FUNC_4(FUNC_0(VAR_2));
 struct srq_data *VAR_4 = VAR_1->srq;
 struct srq_entry *VAR_5;

 if (FUNC_10(VAR_2->status != VAR_0)) {
  FUNC_9(VAR_1->pdev_dev,
   "Unexpected SRQ_TABLE_RPL status %u for entry %u\n",
    VAR_2->status, VAR_3);
  goto out;
 }


 VAR_5 = VAR_4->entryp;
 VAR_5->valid = 1;
 VAR_5->idx = VAR_3;
 VAR_5->pdid = FUNC_1(FUNC_7(VAR_2->rsvd_pdid));
 VAR_5->qlen = FUNC_3(FUNC_6(VAR_2->qlen_qbase));
 VAR_5->qbase = FUNC_2(FUNC_6(VAR_2->qlen_qbase));
 VAR_5->cur_msn = FUNC_5(VAR_2->cur_msn);
 VAR_5->max_msn = FUNC_5(VAR_2->max_msn);
out:
 FUNC_8(&VAR_4->comp);
}
