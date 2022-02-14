
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_pcie {int mutex; scalar_t__ is_down; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct fw_img {int dummy; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,char*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*,struct fw_img const*) ;
 int FUNC_8 (struct iwl_trans*,struct fw_img const*) ;
 int FUNC_9 (struct iwl_trans*) ;
 scalar_t__ FUNC_10 (struct iwl_trans*) ;
 int FUNC_11 (struct iwl_trans*) ;
 int FUNC_12 (struct iwl_trans*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct iwl_trans *VAR_7,
       const struct fw_img *VAR_8, bool VAR_9)
{
 struct iwl_trans_pcie *VAR_10 = FUNC_1(VAR_7);
 bool VAR_11;
 int VAR_12;


 if (FUNC_10(VAR_7)) {
  FUNC_2(VAR_7, "Exit HW not ready\n");
  VAR_12 = -VAR_4;
  goto out;
 }

 FUNC_5(VAR_7);

 FUNC_12(VAR_7, VAR_0, 0xFFFFFFFF);






 FUNC_3(VAR_7);


 FUNC_11(VAR_7);

 FUNC_13(&VAR_10->mutex);


 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11 && !VAR_9) {
  VAR_12 = -VAR_5;
  goto out;
 }


 if (VAR_10->is_down) {
  FUNC_2(VAR_7,
    "Can't start_fw since the HW hasn't been started\n");
  VAR_12 = -VAR_4;
  goto out;
 }


 FUNC_12(VAR_7, VAR_2, VAR_3);
 FUNC_12(VAR_7, VAR_2,
      VAR_1);


 FUNC_12(VAR_7, VAR_0, 0xFFFFFFFF);

 VAR_12 = FUNC_9(VAR_7);
 if (VAR_12) {
  FUNC_0(VAR_7, "Unable to init nic\n");
  goto out;
 }
 FUNC_4(VAR_7);


 FUNC_12(VAR_7, VAR_2, VAR_3);
 FUNC_12(VAR_7, VAR_2, VAR_3);


 if (VAR_7->trans_cfg->device_family >= VAR_6)
  VAR_12 = FUNC_8(VAR_7, VAR_8);
 else
  VAR_12 = FUNC_7(VAR_7, VAR_8);


 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11 && !VAR_9)
  VAR_12 = -VAR_5;

out:
 FUNC_14(&VAR_10->mutex);
 return VAR_12;
}
