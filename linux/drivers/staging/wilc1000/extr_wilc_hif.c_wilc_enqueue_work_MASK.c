
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct host_if_msg {int work; TYPE_1__* vif; int fn; } ;
struct TYPE_4__ {int hif_workqueue; } ;
struct TYPE_3__ {TYPE_2__* wilc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct host_if_msg *VAR_1)
{
 FUNC_0(&VAR_1->work, VAR_1->fn);

 if (!VAR_1->vif || !VAR_1->vif->wilc || !VAR_1->vif->wilc->hif_workqueue)
  return -VAR_0;

 if (!FUNC_1(VAR_1->vif->wilc->hif_workqueue, &VAR_1->work))
  return -VAR_0;

 return 0;
}
