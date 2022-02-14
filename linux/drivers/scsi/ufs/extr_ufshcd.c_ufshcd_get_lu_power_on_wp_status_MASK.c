
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int is_lu_power_on_wp; scalar_t__ f_power_on_wp_en; } ;
struct ufs_hba {TYPE_1__ dev_info; } ;
struct scsi_device {int lun; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ufs_hba*,int ,scalar_t__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct ufs_hba *VAR_1,
          struct scsi_device *VAR_2)
{
 if (VAR_1->dev_info.f_power_on_wp_en &&
     !VAR_1->dev_info.is_lu_power_on_wp) {
  u8 VAR_3;

  if (!FUNC_0(VAR_1, FUNC_1(VAR_2->lun),
          &VAR_3) &&
      (VAR_3 == VAR_0))
   VAR_1->dev_info.is_lu_power_on_wp = 1;
 }
}
