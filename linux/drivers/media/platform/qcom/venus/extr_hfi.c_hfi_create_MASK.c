
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_core {TYPE_1__* res; int done; int state; struct hfi_core_ops const* core_ops; int insts_count; } ;
struct hfi_core_ops {int dummy; } ;
struct TYPE_2__ {int hfi_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct venus_core*) ;

int FUNC_4(struct venus_core *VAR_2, const struct hfi_core_ops *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return -VAR_1;

 FUNC_0(&VAR_2->insts_count, 0);
 VAR_2->core_ops = VAR_3;
 VAR_2->state = VAR_0;
 FUNC_1(&VAR_2->done);
 FUNC_2(VAR_2->res->hfi_version);
 VAR_4 = FUNC_3(VAR_2);

 return VAR_4;
}
