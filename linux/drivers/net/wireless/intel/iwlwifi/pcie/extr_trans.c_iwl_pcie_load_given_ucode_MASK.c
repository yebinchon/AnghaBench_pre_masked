
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* fw_mon; } ;
struct iwl_trans {TYPE_3__ dbg; TYPE_1__* trans_cfg; } ;
struct fw_img {scalar_t__ is_dual_cpus; } ;
struct TYPE_8__ {scalar_t__ fw_monitor; } ;
struct TYPE_6__ {int size; int physical; } ;
struct TYPE_5__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int ) ;
 int FUNC_3 (struct iwl_trans*) ;
 scalar_t__ FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,struct fw_img const*,int,int*) ;
 int FUNC_6 (struct iwl_trans*,int ,int ) ;
 int FUNC_7 (struct iwl_trans*,int ,int) ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static int FUNC_8(struct iwl_trans *VAR_7,
    const struct fw_img *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;

 FUNC_0(VAR_7, "working with %s CPU\n",
       VAR_8->is_dual_cpus ? "Dual" : "Single");


 VAR_9 = FUNC_5(VAR_7, VAR_8, 1, &VAR_10);
 if (VAR_9)
  return VAR_9;

 if (VAR_8->is_dual_cpus) {

  FUNC_7(VAR_7,
          VAR_3,
          VAR_2);


  VAR_9 = FUNC_5(VAR_7, VAR_8, 2,
       &VAR_10);
  if (VAR_9)
   return VAR_9;
 }


 if (VAR_6.fw_monitor &&
     VAR_7->trans_cfg->device_family == VAR_1) {
  FUNC_2(VAR_7, 0);

  if (VAR_7->dbg.fw_mon[0].size) {
   FUNC_7(VAR_7, VAR_4,
           VAR_7->dbg.fw_mon[0].physical >> 4);
   FUNC_7(VAR_7, VAR_5,
           (VAR_7->dbg.fw_mon[0].physical +
     VAR_7->dbg.fw_mon[0].size) >> 4);
  }
 } else if (FUNC_4(VAR_7)) {
  FUNC_3(VAR_7);
 }

 FUNC_1(VAR_7);


 FUNC_6(VAR_7, VAR_0, 0);

 return 0;
}
