
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_params {int dummy; } ;
struct ipc_ops {int (* getnew ) (struct ipc_namespace*,struct ipc_params*) ;} ;
struct ipc_namespace {int dummy; } ;
struct ipc_ids {int rwsem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipc_namespace*,struct ipc_params*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ipc_namespace *VAR_0, struct ipc_ids *VAR_1,
  const struct ipc_ops *VAR_2, struct ipc_params *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_1->rwsem);
 VAR_4 = VAR_2->getnew(VAR_0, VAR_3);
 FUNC_2(&VAR_1->rwsem);
 return VAR_4;
}
