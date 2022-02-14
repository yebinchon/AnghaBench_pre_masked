
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_uld_txq_info {struct sge_uld_txq_info* uldtxq; int users; } ;
struct TYPE_2__ {struct sge_uld_txq_info** uld_txq_info; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*,struct sge_uld_txq_info*) ;
 int FUNC_3 (struct sge_uld_txq_info*) ;

__attribute__((used)) static void
FUNC_4(struct adapter *VAR_0, unsigned int VAR_1)
{
 struct sge_uld_txq_info *VAR_2 = ((void*)0);
 int VAR_3 = FUNC_0(VAR_1);

 VAR_2 = VAR_0->sge.uld_txq_info[VAR_3];

 if (VAR_2 && FUNC_1(&VAR_2->users)) {
  FUNC_2(VAR_0, VAR_2);
  FUNC_3(VAR_2->uldtxq);
  FUNC_3(VAR_2);
  VAR_0->sge.uld_txq_info[VAR_3] = ((void*)0);
 }
}
