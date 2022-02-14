
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; int opcode; } ;
union ionic_dev_cmd {TYPE_1__ lif_init; } ;
typedef int u16 ;
struct ionic_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ionic_dev*,union ionic_dev_cmd*) ;

void FUNC_2(struct ionic_dev *VAR_1, u16 VAR_2)
{
 union ionic_dev_cmd VAR_3 = {
  .lif_init.opcode = VAR_0,
  .lif_init.index = FUNC_0(VAR_2),
 };

 FUNC_1(VAR_1, &VAR_3);
}
