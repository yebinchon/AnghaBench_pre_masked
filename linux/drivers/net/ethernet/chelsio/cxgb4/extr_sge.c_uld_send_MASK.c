
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sge_uld_txq_info {struct sge_uld_txq* uldtxq; } ;
struct sge_uld_txq {int dummy; } ;
struct TYPE_4__ {struct sge_uld_txq_info** uld_txq_info; int * ctrlq; } ;
struct TYPE_3__ {scalar_t__ nsftids; } ;
struct adapter {TYPE_2__ sge; TYPE_1__ tids; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sge_uld_txq*,struct sk_buff*) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(struct adapter *VAR_1, struct sk_buff *VAR_2,
      unsigned int VAR_3)
{
 struct sge_uld_txq_info *VAR_4;
 struct sge_uld_txq *VAR_5;
 unsigned int VAR_6 = FUNC_4(VAR_2);

 if (FUNC_5(FUNC_2(VAR_2))) {

  if (VAR_1->tids.nsftids)
   VAR_6 = 0;
  return FUNC_1(&VAR_1->sge.ctrlq[VAR_6], VAR_2);
 }

 VAR_4 = VAR_1->sge.uld_txq_info[VAR_3];
 if (FUNC_5(!VAR_4)) {
  FUNC_0(1);
  return VAR_0;
 }

 VAR_5 = &VAR_4->uldtxq[VAR_6];
 return FUNC_3(VAR_5, VAR_2);
}
