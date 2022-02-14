
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int info_pa; int index; int opcode; } ;
union ionic_dev_cmd {TYPE_1__ port_init; } ;
struct ionic_dev {int port_info_pa; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ionic_dev*,union ionic_dev_cmd*) ;

void FUNC_2(struct ionic_dev *VAR_1)
{
 union ionic_dev_cmd VAR_2 = {
  .port_init.opcode = VAR_0,
  .port_init.index = 0,
  .port_init.info_pa = FUNC_0(VAR_1->port_info_pa),
 };

 FUNC_1(VAR_1, &VAR_2);
}
