
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_sta {int dummy; } ;
struct TYPE_2__ {scalar_t__ cur_fw_img; } ;
struct iwl_mvm {int mutex; TYPE_1__ fwrt; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct iwl_mvm*,struct iwl_mvm_sta*,int) ;
 int FUNC_1 (struct iwl_mvm*) ;
 struct iwl_mvm_sta* FUNC_2 (struct iwl_mvm*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int*,int*) ;

__attribute__((used)) static ssize_t FUNC_6(struct iwl_mvm *VAR_5, char *VAR_6,
      size_t VAR_7, loff_t *VAR_8)
{
 struct iwl_mvm_sta *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (!FUNC_1(VAR_5) ||
     VAR_5->fwrt.cur_fw_img != VAR_4)
  return -VAR_1;

 if (FUNC_5(VAR_6, "%d %d", &VAR_10, &VAR_11) != 2)
  return -VAR_0;
 if (VAR_10 < 0 || VAR_10 >= VAR_3)
  return -VAR_0;
 if (VAR_11 < 0 || VAR_11 > 1)
  return -VAR_0;

 FUNC_3(&VAR_5->mutex);

 VAR_9 = FUNC_2(VAR_5, VAR_10);

 if (!VAR_9)
  VAR_12 = -VAR_2;
 else
  VAR_12 = FUNC_0(VAR_5, VAR_9, VAR_11) ? : VAR_7;

 FUNC_4(&VAR_5->mutex);

 return VAR_12;
}
