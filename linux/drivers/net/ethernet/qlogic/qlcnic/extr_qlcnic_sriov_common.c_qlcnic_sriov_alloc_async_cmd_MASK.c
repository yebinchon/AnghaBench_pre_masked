
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_cmd_args {int dummy; } ;
struct qlcnic_back_channel {int queue_lock; int async_cmd_list; } ;
struct qlcnic_async_cmd {int list; struct qlcnic_cmd_args* cmd; } ;


 int VAR_0 ;
 struct qlcnic_async_cmd* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct qlcnic_async_cmd *
FUNC_4(struct qlcnic_back_channel *VAR_1,
        struct qlcnic_cmd_args *VAR_2)
{
 struct qlcnic_async_cmd *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->cmd = VAR_2;

 FUNC_2(&VAR_1->queue_lock);
 FUNC_1(&VAR_3->list, &VAR_1->async_cmd_list);
 FUNC_3(&VAR_1->queue_lock);

 return VAR_3;
}
