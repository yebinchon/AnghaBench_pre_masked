
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_queue_info {scalar_t__ len; int used; int created; } ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_2__ {struct be_queue_info q; } ;
struct be_adapter {TYPE_1__ mcc_obj; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_3 (struct be_queue_info*) ;
 struct be_mcc_wrb* FUNC_4 (struct be_queue_info*) ;

__attribute__((used)) static struct be_mcc_wrb *FUNC_5(struct be_adapter *VAR_0)
{
 struct be_queue_info *VAR_1 = &VAR_0->mcc_obj.q;
 struct be_mcc_wrb *VAR_2;

 if (!VAR_1->created)
  return ((void*)0);

 if (FUNC_1(&VAR_1->used) >= VAR_1->len)
  return ((void*)0);

 VAR_2 = FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_0(&VAR_1->used);
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 return VAR_2;
}
