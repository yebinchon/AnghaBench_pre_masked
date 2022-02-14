
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {TYPE_1__* pdev; struct fusion_context* ctrl_context; } ;
struct fusion_context {TYPE_2__* ioc_init_cmd; } ;
struct TYPE_4__ {int frame_phys_addr; scalar_t__ frame; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_2(struct megasas_instance *VAR_1)
{
 struct fusion_context *VAR_2;

 VAR_2 = VAR_1->ctrl_context;

 if (VAR_2->ioc_init_cmd && VAR_2->ioc_init_cmd->frame)
  FUNC_0(&VAR_1->pdev->dev,
      VAR_0,
      VAR_2->ioc_init_cmd->frame,
      VAR_2->ioc_init_cmd->frame_phys_addr);

 FUNC_1(VAR_2->ioc_init_cmd);
}
