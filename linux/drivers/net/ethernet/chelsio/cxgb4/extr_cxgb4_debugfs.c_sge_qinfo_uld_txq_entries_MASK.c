
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_uld_txq_info {int ntxq; } ;
struct TYPE_2__ {struct sge_uld_txq_info** uld_txq_info; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(const struct adapter *VAR_0, int VAR_1)
{
 const struct sge_uld_txq_info *VAR_2 = VAR_0->sge.uld_txq_info[VAR_1];

 if (!VAR_2)
  return 0;

 return FUNC_0(VAR_2->ntxq, 4);
}
