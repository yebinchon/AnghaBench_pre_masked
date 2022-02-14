
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct scsi_device {scalar_t__ channel; struct myrs_ldev_info* hostdata; int host; } ;
struct myrs_ldev_info {unsigned short ldev_num; int rbld_lba; int cfg_devsize; scalar_t__ rbld_active; } ;
struct myrs_hba {TYPE_1__* ctlr_info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ physchan_present; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct myrs_hba*,unsigned short,struct myrs_ldev_info*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct device*,int) ;
 struct myrs_hba* FUNC_3 (int ) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void
FUNC_5(struct device *VAR_1)
{
 struct scsi_device *VAR_2 = FUNC_4(VAR_1);
 struct myrs_hba *VAR_3 = FUNC_3(VAR_2->host);
 struct myrs_ldev_info *VAR_4 = VAR_2->hostdata;
 u64 VAR_5 = 0;
 u8 VAR_6;

 if (VAR_2->channel < VAR_3->ctlr_info->physchan_present || !VAR_4)
  return;
 if (VAR_4->rbld_active) {
  unsigned short VAR_7 = VAR_4->ldev_num;

  VAR_6 = FUNC_1(VAR_3, VAR_7, VAR_4);
  VAR_5 = VAR_4->rbld_lba * 100;
  FUNC_0(VAR_5, VAR_4->cfg_devsize);
 }
 FUNC_2(VAR_0, VAR_1, VAR_5);
}
