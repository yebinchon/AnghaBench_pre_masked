
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_sense_hdr {int sense_key; int asc; int ascq; } ;
struct scsi_device {int changed; } ;
struct packet_command {int stat; int quiet; int timeout; int buflen; int buffer; int data_direction; int cmd; struct scsi_sense_hdr* sshdr; } ;
struct TYPE_4__ {struct scsi_device* device; } ;
typedef TYPE_1__ Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*,int ,int ,int ,int ,int *,struct scsi_sense_hdr*,int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,TYPE_1__*,char*) ;
 int FUNC_4 (int) ;

int FUNC_5(Scsi_CD *VAR_6, struct packet_command *VAR_7)
{
 struct scsi_device *VAR_8;
 struct scsi_sense_hdr VAR_9, *VAR_10 = &VAR_9;
 int VAR_11, VAR_12 = 0, VAR_13 = 0;

 VAR_8 = VAR_6->device;

 if (VAR_7->sshdr)
  VAR_10 = VAR_7->sshdr;

      retry:
 if (!FUNC_1(VAR_8)) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_11 = FUNC_2(VAR_8, VAR_7->cmd, VAR_7->data_direction,
         VAR_7->buffer, VAR_7->buflen, ((void*)0), VAR_10,
         VAR_7->timeout, VAR_4, 0, 0, ((void*)0));


 if (FUNC_0(VAR_11) != 0) {
  switch (VAR_10->sense_key) {
  case 128:
   VAR_8->changed = 1;
   if (!VAR_7->quiet)
    FUNC_3(VAR_5, VAR_6,
       "disc change detected.\n");
   if (VAR_13++ < 10)
    goto retry;
   VAR_12 = -VAR_3;
   break;
  case 129:
   if (VAR_10->asc == 0x04 &&
       VAR_10->ascq == 0x01) {

    if (!VAR_7->quiet)
     FUNC_3(VAR_5, VAR_6,
        "CDROM not ready yet.\n");
    if (VAR_13++ < 10) {

     FUNC_4(2);
     goto retry;
    } else {

     VAR_12 = -VAR_3;
     break;
    }
   }
   if (!VAR_7->quiet)
    FUNC_3(VAR_5, VAR_6,
       "CDROM not ready.  Make sure there "
       "is a disc in the drive.\n");
   VAR_12 = -VAR_3;
   break;
  case 130:
   VAR_12 = -VAR_1;
   if (VAR_10->asc == 0x20 &&
       VAR_10->ascq == 0x00)

    VAR_12 = -VAR_0;
   break;
  default:
   VAR_12 = -VAR_1;
  }
 }


      out:
 VAR_7->stat = VAR_12;
 return VAR_12;
}
