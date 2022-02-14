
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsp_que {struct qla_hw_data* hw; } ;
struct TYPE_2__ {int atio_lock; } ;
struct qla_hw_data {TYPE_1__ tgt; int pdev; } ;
typedef int scsi_qla_host_t ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

irqreturn_t
FUNC_4(int VAR_1, void *VAR_2)
{
 struct rsp_que *VAR_3;
 scsi_qla_host_t *VAR_4;
 struct qla_hw_data *VAR_5;
 unsigned long VAR_6;

 VAR_3 = (struct rsp_que *) VAR_2;
 VAR_5 = VAR_3->hw;
 VAR_4 = FUNC_0(VAR_5->pdev);

 FUNC_2(&VAR_5->tgt.atio_lock, VAR_6);

 FUNC_1(VAR_4, 0);

 FUNC_3(&VAR_5->tgt.atio_lock, VAR_6);

 return VAR_0;
}
