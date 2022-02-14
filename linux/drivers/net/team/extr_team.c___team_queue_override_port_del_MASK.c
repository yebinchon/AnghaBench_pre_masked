
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_port {int qom_list; int queue_id; } ;
struct team {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct team *VAR_0,
        struct team_port *VAR_1)
{
 if (!VAR_1->queue_id)
  return;
 FUNC_0(&VAR_1->qom_list);
}
