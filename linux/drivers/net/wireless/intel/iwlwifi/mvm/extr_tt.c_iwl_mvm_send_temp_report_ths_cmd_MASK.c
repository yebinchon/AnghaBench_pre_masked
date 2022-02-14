
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct temp_report_ths_cmd {int * thresholds; int num_temps; int member_0; } ;
struct TYPE_2__ {scalar_t__* temp_trips; int* fw_trips_index; int tzone; } ;
struct iwl_mvm {TYPE_1__ tz_device; int mutex; } ;
typedef int s16 ;
typedef int cmd ;


 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int,struct temp_report_ths_cmd*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int,int ,int *) ;

int FUNC_8(struct iwl_mvm *VAR_5)
{
 struct temp_report_ths_cmd VAR_6 = {0};
 int VAR_7;
 VAR_7 = FUNC_4(VAR_5, FUNC_1(VAR_1,
      VAR_3),
       0, sizeof(VAR_6), &VAR_6);
 if (VAR_7)
  FUNC_0(VAR_5, "TEMP_REPORT_THS_CMD command failed (err=%d)\n",
   VAR_7);

 return VAR_7;
}
