
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int id; } ;
struct ipc_params {int flg; } ;
struct ipc_ops {int (* associate ) (struct kern_ipc_perm*,int ) ;} ;
struct ipc_namespace {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipc_namespace*,struct kern_ipc_perm*,int ) ;
 int FUNC_1 (struct kern_ipc_perm*,int ) ;

__attribute__((used)) static int FUNC_2(struct ipc_namespace *VAR_1,
      struct kern_ipc_perm *VAR_2,
      const struct ipc_ops *VAR_3,
      struct ipc_params *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_1, VAR_2, VAR_4->flg))
  VAR_5 = -VAR_0;
 else {
  VAR_5 = VAR_3->associate(VAR_2, VAR_4->flg);
  if (!VAR_5)
   VAR_5 = VAR_2->id;
 }

 return VAR_5;
}
