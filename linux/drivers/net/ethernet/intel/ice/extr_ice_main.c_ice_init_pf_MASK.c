
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_pf {int * avail_txqs; TYPE_1__* pdev; void* avail_rxqs; int max_pf_rxqs; int max_pf_txqs; int avail_q_mutex; int state; int serv_task; int serv_tmr_period; int serv_tmr; int sw_mutex; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct ice_pf*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ice_pf *VAR_6)
{
 FUNC_4(VAR_6);

 FUNC_5(&VAR_6->sw_mutex);


 FUNC_6(&VAR_6->serv_tmr, VAR_5, 0);
 VAR_6->serv_tmr_period = VAR_2;
 FUNC_0(&VAR_6->serv_task, VAR_4);
 FUNC_2(VAR_3, VAR_6->state);

 FUNC_5(&VAR_6->avail_q_mutex);
 VAR_6->avail_txqs = FUNC_1(VAR_6->max_pf_txqs, VAR_1);
 if (!VAR_6->avail_txqs)
  return -VAR_0;

 VAR_6->avail_rxqs = FUNC_1(VAR_6->max_pf_rxqs, VAR_1);
 if (!VAR_6->avail_rxqs) {
  FUNC_3(&VAR_6->pdev->dev, VAR_6->avail_txqs);
  VAR_6->avail_txqs = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
