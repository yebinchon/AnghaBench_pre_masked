
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct TYPE_4__ {int rearm_cq; TYPE_1__ cq; } ;
struct be_adapter {int mcc_cq_lock; TYPE_2__ mcc_obj; } ;


 int FUNC_0 (struct be_adapter*,int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct be_adapter *VAR_0)
{
 FUNC_1(&VAR_0->mcc_cq_lock);

 FUNC_0(VAR_0, VAR_0->mcc_obj.cq.id, 1, 0);
 VAR_0->mcc_obj.rearm_cq = 1;

 FUNC_2(&VAR_0->mcc_cq_lock);
}
