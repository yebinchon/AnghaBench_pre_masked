
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_port {int dev; int gid_pn_work; TYPE_1__* adapter; } ;
struct TYPE_2__ {int work_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct zfcp_port *VAR_0)
{
 FUNC_0(&VAR_0->dev);
 if (!FUNC_2(VAR_0->adapter->work_queue, &VAR_0->gid_pn_work))
  FUNC_1(&VAR_0->dev);
}
