
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team {struct list_head* qom_lists; TYPE_1__* dev; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct list_head* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct team *VAR_2)
{
 struct list_head *VAR_3;
 unsigned int VAR_4 = VAR_2->dev->num_tx_queues - 1;
 unsigned int VAR_5;

 if (!VAR_4)
  return 0;
 VAR_3 = FUNC_1(VAR_4, sizeof(struct list_head),
    VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_2->qom_lists = VAR_3;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_0(VAR_3++);
 return 0;
}
