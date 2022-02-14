
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct be_queue_info {int dummy; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_mcc_compl {int dummy; } ;
struct TYPE_3__ {struct be_queue_info q; struct be_queue_info cq; } ;
struct be_adapter {TYPE_1__ mcc_obj; } ;
struct TYPE_4__ {int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct be_adapter*,struct be_queue_info*,int *,int,int ) ;
 scalar_t__ FUNC_1 (struct be_adapter*,struct be_queue_info*,struct be_queue_info*) ;
 int FUNC_2 (struct be_adapter*,struct be_queue_info*,int ) ;
 scalar_t__ FUNC_3 (struct be_adapter*,struct be_queue_info*,int ,int) ;
 int FUNC_4 (struct be_adapter*,struct be_queue_info*) ;
 TYPE_2__* FUNC_5 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_6(struct be_adapter *VAR_3)
{
 struct be_queue_info *VAR_4, *VAR_5;

 VAR_5 = &VAR_3->mcc_obj.cq;
 if (FUNC_3(VAR_3, VAR_5, VAR_0,
      sizeof(struct be_mcc_compl)))
  goto err;


 if (FUNC_0(VAR_3, VAR_5, &FUNC_5(VAR_3)->q, 1, 0))
  goto mcc_cq_free;

 VAR_4 = &VAR_3->mcc_obj.q;
 if (FUNC_3(VAR_3, VAR_4, VAR_1, sizeof(struct be_mcc_wrb)))
  goto mcc_cq_destroy;

 if (FUNC_1(VAR_3, VAR_4, VAR_5))
  goto mcc_q_free;

 return 0;

mcc_q_free:
 FUNC_4(VAR_3, VAR_4);
mcc_cq_destroy:
 FUNC_2(VAR_3, VAR_5, VAR_2);
mcc_cq_free:
 FUNC_4(VAR_3, VAR_5);
err:
 return -1;
}
