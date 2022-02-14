
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ cur_fw_img; } ;
struct iwl_mvm {int mutex; TYPE_1__ fwrt; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct iwl_mvm*) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*,int ,int,int ) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*,int ,int ) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*) ;
 scalar_t__ FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct iwl_mvm *VAR_3, char *VAR_4,
     size_t VAR_5, loff_t *VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 if (!FUNC_1(VAR_3) ||
     VAR_3->fwrt.cur_fw_img != VAR_2)
  return -VAR_1;

 if (FUNC_5(VAR_4, 0, &VAR_8))
  return -VAR_0;

 if (FUNC_4(VAR_3)) {
  FUNC_0(VAR_3,
        "FLUSHING all tids queues on sta_id = %d\n",
        VAR_8);
  FUNC_6(&VAR_3->mutex);
  VAR_7 = FUNC_2(VAR_3, VAR_8, 0xFF, 0) ? : VAR_5;
  FUNC_7(&VAR_3->mutex);
  return VAR_7;
 }

 FUNC_0(VAR_3, "FLUSHING queues mask to flush = 0x%x\n",
       VAR_8);

 FUNC_6(&VAR_3->mutex);
 VAR_7 = FUNC_3(VAR_3, VAR_8, 0) ? : VAR_5;
 FUNC_7(&VAR_3->mutex);

 return VAR_7;
}
