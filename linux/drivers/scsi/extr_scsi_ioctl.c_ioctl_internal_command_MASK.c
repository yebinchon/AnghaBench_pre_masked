
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int sense_key; int ascq; int asc; } ;
struct scsi_device {int changed; int removable; int lockable; } ;


 char VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (int,int ) ;

 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct scsi_device*,char*,int ,int *,int ,struct scsi_sense_hdr*,int,int,int *) ;
 int FUNC_3 (struct scsi_device*,int *,struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_4 (struct scsi_sense_hdr*) ;
 int FUNC_5 (int ,struct scsi_device*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_4, char *VAR_5,
      int VAR_6, int VAR_7)
{
 int VAR_8;
 struct scsi_sense_hdr VAR_9;

 FUNC_0(1, FUNC_5(VAR_3, VAR_4,
          "Trying ioctl with scsi command %d\n", *VAR_5));

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_1, ((void*)0), 0,
      &VAR_9, VAR_6, VAR_7, ((void*)0));

 FUNC_0(2, FUNC_5(VAR_3, VAR_4,
          "Ioctl returned  0x%x\n", VAR_8));

 if (FUNC_1(VAR_8) == VAR_2 &&
     FUNC_4(&VAR_9)) {
  switch (VAR_9.sense_key) {
  case 130:
   if (VAR_5[0] == VAR_0)
    VAR_4->lockable = 0;
   else
    FUNC_5(VAR_3, VAR_4,
         "ioctl_internal_command: "
         "ILLEGAL REQUEST "
         "asc=0x%x ascq=0x%x\n",
         VAR_9.asc, VAR_9.ascq);
   break;
  case 129:
   if (VAR_4->removable)
    break;

  case 128:
   if (VAR_4->removable) {
    VAR_4->changed = 1;
    VAR_8 = 0;
    break;
   }

  default:
   FUNC_5(VAR_3, VAR_4,
        "ioctl_internal_command return code = %x\n",
        VAR_8);
   FUNC_3(VAR_4, ((void*)0), &VAR_9);
   break;
  }
 }

 FUNC_0(2, FUNC_5(VAR_3, VAR_4,
          "IOCTL Releasing command\n"));
 return VAR_8;
}
