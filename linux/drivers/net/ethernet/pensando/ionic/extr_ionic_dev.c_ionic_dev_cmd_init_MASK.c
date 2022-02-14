
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int opcode; } ;
union ionic_dev_cmd {TYPE_1__ init; } ;
struct ionic_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_dev*,union ionic_dev_cmd*) ;

void FUNC_1(struct ionic_dev *VAR_1)
{
 union ionic_dev_cmd VAR_2 = {
  .init.opcode = VAR_0,
  .init.type = 0,
 };

 FUNC_0(VAR_1, &VAR_2);
}
