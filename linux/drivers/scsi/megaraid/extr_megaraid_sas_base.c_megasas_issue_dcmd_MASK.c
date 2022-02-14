
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {int reg_set; TYPE_1__* instancet; } ;
struct megasas_cmd {int frame_phys_addr; } ;
struct TYPE_2__ {int (* fire_cmd ) (struct megasas_instance*,int ,int ,int ) ;} ;


 int FUNC_0 (struct megasas_instance*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct megasas_instance *VAR_0, struct megasas_cmd *VAR_1)
{
 VAR_0->instancet->fire_cmd(VAR_0,
  VAR_1->frame_phys_addr, 0, VAR_0->reg_set);
 return;
}
