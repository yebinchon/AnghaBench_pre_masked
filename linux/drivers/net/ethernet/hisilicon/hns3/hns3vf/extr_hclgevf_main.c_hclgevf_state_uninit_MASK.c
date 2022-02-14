
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mbx_mutex; } ;
struct TYPE_6__ {scalar_t__ func; } ;
struct TYPE_5__ {scalar_t__ function; } ;
struct hclgevf_dev {TYPE_1__ mbx_resp; TYPE_3__ rst_service_task; TYPE_3__ mbx_service_task; TYPE_3__ service_task; TYPE_2__ service_timer; TYPE_3__ keep_alive_task; TYPE_2__ keep_alive_timer; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hclgevf_dev *VAR_2)
{
 FUNC_3(VAR_0, &VAR_2->state);
 FUNC_3(VAR_1, &VAR_2->state);

 if (VAR_2->keep_alive_timer.function)
  FUNC_1(&VAR_2->keep_alive_timer);
 if (VAR_2->keep_alive_task.func)
  FUNC_0(&VAR_2->keep_alive_task);
 if (VAR_2->service_timer.function)
  FUNC_1(&VAR_2->service_timer);
 if (VAR_2->service_task.func)
  FUNC_0(&VAR_2->service_task);
 if (VAR_2->mbx_service_task.func)
  FUNC_0(&VAR_2->mbx_service_task);
 if (VAR_2->rst_service_task.func)
  FUNC_0(&VAR_2->rst_service_task);

 FUNC_2(&VAR_2->mbx_resp.mbx_mutex);
}
