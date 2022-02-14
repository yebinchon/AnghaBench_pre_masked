
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int running_gold_fw; } ;
struct qla_hw_data {TYPE_1__ flags; int flt_region_gold_fw; int flt_region_fw; int flt_region_fw_sec; } ;
struct active_regions {scalar_t__ global; } ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_2__*,int,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_2__*,int,char*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (TYPE_2__*,struct active_regions*) ;

int
FUNC_7(scsi_qla_host_t *VAR_4, uint32_t *VAR_5)
{
 int VAR_6;
 struct qla_hw_data *VAR_7 = VAR_4->hw;
 struct active_regions VAR_8 = { };

 if (VAR_1 == 2)
  goto try_blob_fw;







 if (!FUNC_0(VAR_7) && !FUNC_1(VAR_7))
  goto try_primary_fw;

 FUNC_6(VAR_4, &VAR_8);

 if (VAR_8.global != VAR_0)
  goto try_primary_fw;

 FUNC_2(VAR_2, VAR_4, 0x008b,
     "Loading secondary firmware image.\n");
 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_7->flt_region_fw_sec);
 if (!VAR_6)
  return VAR_6;

try_primary_fw:
 FUNC_2(VAR_2, VAR_4, 0x008b,
     "Loading primary firmware image.\n");
 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_7->flt_region_fw);
 if (!VAR_6)
  return VAR_6;

try_blob_fw:
 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (!VAR_6 || !VAR_7->flt_region_gold_fw)
  return VAR_6;

 FUNC_3(VAR_3, VAR_4, 0x0099,
     "Attempting to fallback to golden firmware.\n");
 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_7->flt_region_gold_fw);
 if (VAR_6)
  return VAR_6;

 FUNC_3(VAR_3, VAR_4, 0x009a, "Need firmware flash update.\n");
 VAR_7->flags.running_gold_fw = 1;
 return VAR_6;
}
