
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int an_enable; int attr; int index; int opcode; } ;
union ionic_dev_cmd {TYPE_1__ port_setattr; } ;
typedef int u8 ;
struct ionic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ionic_dev*,union ionic_dev_cmd*) ;

void FUNC_1(struct ionic_dev *VAR_2, u8 VAR_3)
{
 union ionic_dev_cmd VAR_4 = {
  .port_setattr.opcode = VAR_0,
  .port_setattr.index = 0,
  .port_setattr.attr = VAR_1,
  .port_setattr.an_enable = VAR_3,
 };

 FUNC_0(VAR_2, &VAR_4);
}
