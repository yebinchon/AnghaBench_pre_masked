
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; int attr; int index; int opcode; } ;
union ionic_dev_cmd {TYPE_1__ port_setattr; } ;
typedef int u32 ;
struct ionic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ionic_dev*,union ionic_dev_cmd*) ;

void FUNC_2(struct ionic_dev *VAR_2, u32 VAR_3)
{
 union ionic_dev_cmd VAR_4 = {
  .port_setattr.opcode = VAR_0,
  .port_setattr.index = 0,
  .port_setattr.attr = VAR_1,
  .port_setattr.speed = FUNC_0(VAR_3),
 };

 FUNC_1(VAR_2, &VAR_4);
}
