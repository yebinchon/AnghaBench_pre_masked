
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pqi_scsi_dev {int raid_bypass_configured; int raid_bypass_enabled; int scsi3addr; } ;
struct pqi_ctrl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct pqi_ctrl_info*,struct pqi_scsi_dev*) ;
 int FUNC_3 (struct pqi_ctrl_info*,int ,int,int*,int) ;

__attribute__((used)) static void FUNC_4(struct pqi_ctrl_info *VAR_6,
 struct pqi_scsi_dev *VAR_7)
{
 int VAR_8;
 u8 *VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_1(64, VAR_1);
 if (!VAR_9)
  return;

 VAR_8 = FUNC_3(VAR_6, VAR_7->scsi3addr,
  VAR_5 | VAR_0, VAR_9, 64);
 if (VAR_8)
  goto out;





 VAR_10 = VAR_9[4];
 VAR_7->raid_bypass_configured =
  (VAR_10 & 0x1) != 0;
 if (VAR_7->raid_bypass_configured &&
  (VAR_10 & 0x2) &&
  FUNC_2(VAR_6, VAR_7) == 0)
  VAR_7->raid_bypass_enabled = 1;

out:
 FUNC_0(VAR_9);
}
