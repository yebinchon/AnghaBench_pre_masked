
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_uld_rxq_info {int nrxq; int nciq; } ;
struct TYPE_2__ {struct sge_uld_rxq_info** uld_rxq_info; } ;
struct adapter {TYPE_1__ sge; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(const struct adapter *VAR_0, int VAR_1,
          bool VAR_2)
{
 const struct sge_uld_rxq_info *VAR_3 = VAR_0->sge.uld_rxq_info[VAR_1];

 if (!VAR_3)
  return 0;

 return VAR_2 ? FUNC_0(VAR_3->nciq, 4) :
       FUNC_0(VAR_3->nrxq, 4);
}
