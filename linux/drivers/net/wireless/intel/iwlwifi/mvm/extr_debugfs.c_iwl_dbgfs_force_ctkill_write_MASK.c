
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cur_fw_img; } ;
struct iwl_mvm {TYPE_1__ fwrt; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (struct iwl_mvm*) ;

__attribute__((used)) static ssize_t FUNC_2(struct iwl_mvm *VAR_2, char *VAR_3,
         size_t VAR_4, loff_t *VAR_5)
{
 if (!FUNC_1(VAR_2) ||
     VAR_2->fwrt.cur_fw_img != VAR_1)
  return -VAR_0;

 FUNC_0(VAR_2);

 return VAR_4;
}
