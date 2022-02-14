
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_uld_txq_info {struct sge_uld_txq* uldtxq; } ;
struct sge_uld_txq {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct sge_uld_txq_info** uld_txq_info; } ;
struct adapter {TYPE_1__ sge; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 struct adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sge_uld_txq*,void const*,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct net_device *VAR_2, unsigned int VAR_3,
         const void *VAR_4, unsigned int VAR_5)
{
 struct sge_uld_txq_info *VAR_6;
 struct sge_uld_txq *VAR_7;
 struct adapter *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_2);

 FUNC_1();
 VAR_6 = VAR_8->sge.uld_txq_info[VAR_0];
 if (FUNC_6(!VAR_6)) {
  FUNC_0(1);
  FUNC_2();
  return VAR_1;
 }
 VAR_7 = &VAR_6->uldtxq[VAR_3];

 VAR_9 = FUNC_5(VAR_7, VAR_4, VAR_5);
 FUNC_2();
 return FUNC_3(VAR_9);
}
