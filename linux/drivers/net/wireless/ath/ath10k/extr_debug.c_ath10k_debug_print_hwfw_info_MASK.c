
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct firmware {int size; int data; } ;
struct TYPE_11__ {struct firmware* firmware; } ;
struct TYPE_12__ {TYPE_4__ fw_file; } ;
struct TYPE_10__ {int subsystem_device; int subsystem_vendor; } ;
struct TYPE_9__ {int chip_id; } ;
struct TYPE_8__ {int name; } ;
struct ath10k {int fw_api; TYPE_7__* hw; TYPE_5__ normal_mode_fw; TYPE_3__ id; TYPE_2__ bus_param; int target_version; TYPE_1__ hw_params; } ;
typedef int fw_features ;
struct TYPE_14__ {TYPE_6__* wiphy; } ;
struct TYPE_13__ {int fw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,char*,int ,int ,char*,int ,...) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct ath10k *VAR_5)
{
 const struct firmware *VAR_6;
 char VAR_7[128] = {};
 u32 VAR_8 = 0;

 FUNC_1(VAR_5, VAR_7, sizeof(VAR_7));

 FUNC_2(VAR_5, "%s target 0x%08x chip_id 0x%08x sub %04x:%04x",
      VAR_5->hw_params.name,
      VAR_5->target_version,
      VAR_5->bus_param.chip_id,
      VAR_5->id.subsystem_vendor, VAR_5->id.subsystem_device);

 FUNC_2(VAR_5, "kconfig debug %d debugfs %d tracing %d dfs %d testmode %d\n",
      FUNC_0(VAR_0),
      FUNC_0(VAR_1),
      FUNC_0(VAR_3),
      FUNC_0(VAR_2),
      FUNC_0(VAR_4));

 VAR_6 = VAR_5->normal_mode_fw.fw_file.firmware;
 if (VAR_6)
  VAR_8 = FUNC_3(0, VAR_6->data, VAR_6->size);

 FUNC_2(VAR_5, "firmware ver %s api %d features %s crc32 %08x\n",
      VAR_5->hw->wiphy->fw_version,
      VAR_5->fw_api,
      VAR_7,
      VAR_8);
}
