
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnic_devcmd_fw_info {int dummy; } ;
struct vnic_dev {int fw_info_pa; struct vnic_devcmd_fw_info* fw_info; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnic_devcmd_fw_info* FUNC_0 (int ,int,int*) ;
 scalar_t__ FUNC_1 (struct vnic_dev*,int ) ;
 int FUNC_2 (struct vnic_dev*,int ,int*,int*,int) ;

int FUNC_3(struct vnic_dev *VAR_3,
 struct vnic_devcmd_fw_info **VAR_4)
{
 u64 VAR_5, VAR_6 = 0;
 int VAR_7 = 1000;
 int VAR_8 = 0;

 if (!VAR_3->fw_info) {
  VAR_3->fw_info = FUNC_0(VAR_3->pdev,
            sizeof(struct vnic_devcmd_fw_info),
            &VAR_3->fw_info_pa);
  if (!VAR_3->fw_info)
   return -VAR_2;

  VAR_5 = VAR_3->fw_info_pa;
  VAR_6 = sizeof(struct vnic_devcmd_fw_info);


  if (FUNC_1(VAR_3, VAR_0))
   VAR_8 = FUNC_2(VAR_3, VAR_0,
    &VAR_5, &VAR_6, VAR_7);
  else
   VAR_8 = FUNC_2(VAR_3, VAR_1,
    &VAR_5, &VAR_6, VAR_7);
 }

 *VAR_4 = VAR_3->fw_info;

 return VAR_8;
}
