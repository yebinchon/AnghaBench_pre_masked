
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cur_fw_img; } ;
struct iwl_mvm {int mutex; TYPE_1__ fwrt; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct iwl_mvm*,int ,int ) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct iwl_mvm *VAR_4, char *VAR_5,
      size_t VAR_6, loff_t *VAR_7)
{
 int VAR_8;

 if (!FUNC_2(VAR_4))
  return -VAR_2;

 if (!FUNC_1(VAR_4) ||
     VAR_4->fwrt.cur_fw_img != VAR_3)
  return -VAR_1;

 FUNC_3(&VAR_4->mutex);
 VAR_8 = FUNC_0(VAR_4, VAR_0, 0);
 FUNC_4(&VAR_4->mutex);

 return VAR_8 ?: VAR_6;
}
