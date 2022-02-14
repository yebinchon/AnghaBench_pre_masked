
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_queue_info {scalar_t__ created; } ;
struct TYPE_2__ {struct be_queue_info cq; struct be_queue_info q; } ;
struct be_adapter {TYPE_1__ mcc_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*,struct be_queue_info*,int ) ;
 int FUNC_1 (struct be_adapter*,struct be_queue_info*) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_2)
{
 struct be_queue_info *VAR_3;

 VAR_3 = &VAR_2->mcc_obj.q;
 if (VAR_3->created)
  FUNC_0(VAR_2, VAR_3, VAR_1);
 FUNC_1(VAR_2, VAR_3);

 VAR_3 = &VAR_2->mcc_obj.cq;
 if (VAR_3->created)
  FUNC_0(VAR_2, VAR_3, VAR_0);
 FUNC_1(VAR_2, VAR_3);
}
