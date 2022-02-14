
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {int sdev_gendev; } ;
struct MPT3SAS_ADAPTER {int hba_mpi_version_belonged; } ;
typedef enum raid_level { ____Placeholder_raid_level } raid_level ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct MPT3SAS_ADAPTER *VAR_7,
 struct scsi_device *VAR_8, u8 VAR_9)
{
 enum raid_level VAR_10 = VAR_4;

 switch (VAR_9) {
 case 132:
  VAR_10 = VAR_0;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_3;
  break;
 case 131:
  VAR_10 = VAR_1;
  break;
 }

 switch (VAR_7->hba_mpi_version_belonged) {
 case 128:
  FUNC_0(VAR_5,
   &VAR_8->sdev_gendev, VAR_10);
  break;
 case 134:
 case 133:
  FUNC_0(VAR_6,
   &VAR_8->sdev_gendev, VAR_10);
  break;
 }
}
