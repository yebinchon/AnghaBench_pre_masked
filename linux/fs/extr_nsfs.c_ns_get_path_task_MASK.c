
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ns_get_path_task_args {int task; TYPE_1__* ns_ops; } ;
struct ns_common {int dummy; } ;
struct TYPE_2__ {struct ns_common* (* get ) (int ) ;} ;


 struct ns_common* FUNC_0 (int ) ;

__attribute__((used)) static struct ns_common *FUNC_1(void *VAR_0)
{
 struct ns_get_path_task_args *VAR_1 = VAR_0;

 return VAR_1->ns_ops->get(VAR_1->task);
}
