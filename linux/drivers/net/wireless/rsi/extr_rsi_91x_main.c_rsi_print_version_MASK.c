
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int release_num; int minor; int major; } ;
struct rsi_common {TYPE_1__* priv; int oper_mode; TYPE_2__ lmac_ver; } ;
struct TYPE_3__ {int fw_file_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;

void FUNC_2(struct rsi_common *VAR_1)
{
 FUNC_1(VAR_0, "================================================\n");
 FUNC_1(VAR_0, "================ RSI Version Info ==============\n");
 FUNC_1(VAR_0, "================================================\n");
 FUNC_1(VAR_0, "FW Version\t: %d.%d.%d\n",
  VAR_1->lmac_ver.major, VAR_1->lmac_ver.minor,
  VAR_1->lmac_ver.release_num);
 FUNC_1(VAR_0, "Operating mode\t: %d [%s]",
  VAR_1->oper_mode, FUNC_0(VAR_1->oper_mode));
 FUNC_1(VAR_0, "Firmware file\t: %s", VAR_1->priv->fw_file_name);
 FUNC_1(VAR_0, "================================================\n");
}
