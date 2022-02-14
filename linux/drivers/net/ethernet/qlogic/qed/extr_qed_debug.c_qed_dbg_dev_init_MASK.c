
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct dbg_tools_data {int initialized; scalar_t__ chip_id; int* mode_enable; int num_ports; int use_dmae; int num_pfs_per_port; int platform_id; int num_vfs; } ;
struct qed_hwfn {int cdev; struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int VAR_18 ;

__attribute__((used)) static enum dbg_status FUNC_5(struct qed_hwfn *VAR_19,
     struct qed_ptt *VAR_20)
{
 struct dbg_tools_data *VAR_21 = &VAR_19->dbg_info;
 u8 VAR_22 = 0, VAR_23 = 0;

 if (VAR_21->initialized)
  return VAR_3;


 if (FUNC_1(VAR_19->cdev)) {
  VAR_21->chip_id = VAR_1;
  VAR_21->mode_enable[VAR_13] = 1;
  VAR_21->num_vfs = VAR_8;
  VAR_22 = VAR_6;
  VAR_23 = VAR_6 / 2;
 } else if (FUNC_0(VAR_19->cdev)) {
  VAR_21->chip_id = VAR_0;
  VAR_21->mode_enable[VAR_12] = 1;
  VAR_21->num_vfs = VAR_7;
  VAR_22 = VAR_5;
  VAR_23 = VAR_5;
 } else {
  return VAR_4;
 }


 VAR_21->platform_id = VAR_17;
 VAR_21->mode_enable[VAR_11] = 1;


 switch (FUNC_4(VAR_19, VAR_20, VAR_9)) {
 case 0:
  VAR_21->mode_enable[VAR_14] = 1;
  break;
 case 1:
  VAR_21->mode_enable[VAR_15] = 1;
  break;
 case 2:
  VAR_21->mode_enable[VAR_16] = 1;
  break;
 }


 if (VAR_21->chip_id == VAR_0 &&
     FUNC_4(VAR_19, VAR_20, VAR_2) == 2)
  VAR_21->mode_enable[VAR_10] = 1;


 if (VAR_21->mode_enable[VAR_14] ||
     VAR_21->mode_enable[VAR_10])
  VAR_21->num_ports = 1;
 else if (VAR_21->mode_enable[VAR_15])
  VAR_21->num_ports = 2;
 else if (VAR_21->mode_enable[VAR_16])
  VAR_21->num_ports = 4;


 VAR_21->num_pfs_per_port = FUNC_2(VAR_18,
        VAR_22 / VAR_21->num_ports,
        VAR_23);


 FUNC_3(VAR_19);

 VAR_21->use_dmae = 1;
 VAR_21->initialized = 1;

 return VAR_3;
}
