
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {int controller_online; int pqi_mode_enabled; int ctrl_offline_work; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;

__attribute__((used)) static void FUNC_5(struct pqi_ctrl_info *VAR_1)
{
 if (!VAR_1->controller_online)
  return;

 VAR_1->controller_online = 0;
 VAR_1->pqi_mode_enabled = 0;
 FUNC_2(VAR_1);
 if (!VAR_0)
  FUNC_4(VAR_1);
 FUNC_1(VAR_1->pci_dev);
 FUNC_0(&VAR_1->pci_dev->dev, "controller offline\n");
 FUNC_3(&VAR_1->ctrl_offline_work);
}
