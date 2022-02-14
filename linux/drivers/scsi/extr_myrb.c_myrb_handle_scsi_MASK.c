
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; int sense_buffer; int sc_data_direction; } ;
struct myrb_hba {int sg_pool; int dcdb_pool; } ;
struct myrb_cmdblk {unsigned short status; scalar_t__ sgl_addr; TYPE_2__* sgl; TYPE_2__* dcdb; scalar_t__ dcdb_addr; } ;
struct TYPE_4__ {int sense; } ;
struct TYPE_3__ {int sdev_gendev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,struct scsi_cmnd*,char*,...) ;
 int FUNC_4 (int ,int ,int ,int,int) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_7(struct myrb_hba *VAR_8, struct myrb_cmdblk *VAR_9,
  struct scsi_cmnd *VAR_10)
{
 unsigned short VAR_11;

 if (!VAR_9)
  return;

 FUNC_5(VAR_10);

 if (VAR_9->dcdb) {
  FUNC_2(VAR_10->sense_buffer, &VAR_9->dcdb->sense, 64);
  FUNC_1(VAR_8->dcdb_pool, VAR_9->dcdb,
         VAR_9->dcdb_addr);
  VAR_9->dcdb = ((void*)0);
 }
 if (VAR_9->sgl) {
  FUNC_1(VAR_8->sg_pool, VAR_9->sgl, VAR_9->sgl_addr);
  VAR_9->sgl = ((void*)0);
  VAR_9->sgl_addr = 0;
 }
 VAR_11 = VAR_9->status;
 switch (VAR_11) {
 case 128:
 case 132:
  VAR_10->result = (VAR_2 << 16) | VAR_11;
  break;
 case 133:
  FUNC_0(&VAR_10->device->sdev_gendev,
   "Bad Data Encountered\n");
  if (VAR_10->sc_data_direction == VAR_3)

   FUNC_4(0, VAR_10->sense_buffer,
      VAR_5, 0x11, 0);
  else

   FUNC_4(0, VAR_10->sense_buffer,
      VAR_5, 0x0C, 0);
  VAR_10->result = (VAR_2 << 16) | VAR_7;
  break;
 case 130:
  FUNC_3(VAR_4, VAR_10, "Irrecoverable Data Error\n");
  if (VAR_10->sc_data_direction == VAR_3)

   FUNC_4(0, VAR_10->sense_buffer,
      VAR_5, 0x11, 0x04);
  else

   FUNC_4(0, VAR_10->sense_buffer,
      VAR_5, 0x0C, 0x02);
  VAR_10->result = (VAR_2 << 16) | VAR_7;
  break;
 case 129:
  FUNC_0(&VAR_10->device->sdev_gendev,
       "Logical Drive Nonexistent or Offline");
  VAR_10->result = (VAR_0 << 16);
  break;
 case 134:
  FUNC_0(&VAR_10->device->sdev_gendev,
       "Attempt to Access Beyond End of Logical Drive");

  FUNC_4(0, VAR_10->sense_buffer,
     VAR_6, 0x21, 0);
  break;
 case 131:
  FUNC_0(&VAR_10->device->sdev_gendev, "Device nonresponsive\n");
  VAR_10->result = (VAR_0 << 16);
  break;
 default:
  FUNC_3(VAR_4, VAR_10,
       "Unexpected Error Status %04X", VAR_11);
  VAR_10->result = (VAR_1 << 16);
  break;
 }
 VAR_10->scsi_done(VAR_10);
}
