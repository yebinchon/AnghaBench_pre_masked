
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int list; struct hfi_inst_ops const* ops; int done; int state; struct venus_core* core; } ;
struct venus_core {int lock; int insts_count; int instances; } ;
struct hfi_inst_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct venus_inst *VAR_2, const struct hfi_inst_ops *VAR_3)
{
 struct venus_core *VAR_4 = VAR_2->core;

 if (!VAR_3)
  return -VAR_0;

 VAR_2->state = VAR_1;
 FUNC_1(&VAR_2->done);
 VAR_2->ops = VAR_3;

 FUNC_3(&VAR_4->lock);
 FUNC_2(&VAR_2->list, &VAR_4->instances);
 FUNC_0(&VAR_4->insts_count);
 FUNC_4(&VAR_4->lock);

 return 0;
}
