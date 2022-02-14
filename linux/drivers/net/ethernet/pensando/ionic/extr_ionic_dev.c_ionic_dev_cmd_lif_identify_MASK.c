
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ver; int type; int opcode; } ;
union ionic_dev_cmd {TYPE_1__ lif_identify; } ;
typedef int u8 ;
struct ionic_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ionic_dev*,union ionic_dev_cmd*) ;

void FUNC_1(struct ionic_dev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 union ionic_dev_cmd VAR_4 = {
  .lif_identify.opcode = VAR_0,
  .lif_identify.type = VAR_2,
  .lif_identify.ver = VAR_3,
 };

 FUNC_0(VAR_1, &VAR_4);
}
