
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {int command_queue; } ;
struct command {int queue_node; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct service_processor *VAR_0, struct command *VAR_1)
{
 FUNC_0(&VAR_1->queue_node, &VAR_0->command_queue);
}
