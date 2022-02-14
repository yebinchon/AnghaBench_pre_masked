
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ func; } ;
struct TYPE_5__ {scalar_t__ func; } ;
struct TYPE_8__ {TYPE_1__ work; } ;
struct TYPE_6__ {scalar_t__ function; } ;
struct hclge_dev {TYPE_3__ mbx_service_task; TYPE_3__ rst_service_task; TYPE_4__ service_task; TYPE_2__ reset_timer; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hclge_dev *VAR_2)
{
 FUNC_3(VAR_0, &VAR_2->state);
 FUNC_3(VAR_1, &VAR_2->state);

 if (VAR_2->reset_timer.function)
  FUNC_2(&VAR_2->reset_timer);
 if (VAR_2->service_task.work.func)
  FUNC_0(&VAR_2->service_task);
 if (VAR_2->rst_service_task.func)
  FUNC_1(&VAR_2->rst_service_task);
 if (VAR_2->mbx_service_task.func)
  FUNC_1(&VAR_2->mbx_service_task);
}
