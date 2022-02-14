
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct myrb_rbld_progress {unsigned int ldev_size; unsigned int blocks_left; int ldev_num; } ;
struct myrb_hba {int last_rbld_status; int host; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;






 unsigned short FUNC_0 (struct myrb_hba*,struct myrb_rbld_progress*) ;
 int FUNC_1 (int ) ;
 struct scsi_device* FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (int ,struct scsi_device*,char*,...) ;

__attribute__((used)) static void FUNC_5(struct myrb_hba *VAR_2)
{
 struct myrb_rbld_progress VAR_3;
 unsigned short VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_4 == VAR_1 &&
     VAR_2->last_rbld_status == 128)
  VAR_4 = 130;
 if (VAR_4 != VAR_1) {
  unsigned int VAR_5 =
   VAR_3.ldev_size - VAR_3.blocks_left;
  struct scsi_device *VAR_6;

  VAR_6 = FUNC_2(VAR_2->host,
       FUNC_1(VAR_2->host),
       VAR_3.ldev_num, 0);
  if (!VAR_6)
   return;

  switch (VAR_4) {
  case 128:
   FUNC_4(VAR_0, VAR_6,
        "Rebuild in Progress, %d%% completed\n",
        (100 * (VAR_5 >> 7))
        / (VAR_3.ldev_size >> 7));
   break;
  case 132:
   FUNC_4(VAR_0, VAR_6,
        "Rebuild Failed due to Logical Drive Failure\n");
   break;
  case 133:
   FUNC_4(VAR_0, VAR_6,
        "Rebuild Failed due to Bad Blocks on Other Drives\n");
   break;
  case 131:
   FUNC_4(VAR_0, VAR_6,
        "Rebuild Failed due to Failure of Drive Being Rebuilt\n");
   break;
  case 130:
   FUNC_4(VAR_0, VAR_6,
        "Rebuild Completed Successfully\n");
   break;
  case 129:
   FUNC_4(VAR_0, VAR_6,
         "Rebuild Successfully Terminated\n");
   break;
  default:
   break;
  }
  FUNC_3(VAR_6);
 }
 VAR_2->last_rbld_status = VAR_4;
}
