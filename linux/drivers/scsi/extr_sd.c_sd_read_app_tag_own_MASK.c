
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int dummy; } ;
struct scsi_mode_data {int header_length; int length; int block_descriptor_length; } ;
struct scsi_disk {scalar_t__ protection_type; int ATO; struct scsi_device* device; } ;
struct scsi_device {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct scsi_device*,int,int,unsigned char*,int,int ,int ,struct scsi_mode_data*,struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_1 (struct scsi_sense_hdr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct scsi_disk*,char*) ;
 int FUNC_4 (struct scsi_disk*,struct scsi_sense_hdr*) ;

__attribute__((used)) static void FUNC_5(struct scsi_disk *VAR_6, unsigned char *VAR_7)
{
 int VAR_8, VAR_9;
 struct scsi_device *VAR_10 = VAR_6->device;
 struct scsi_mode_data VAR_11;
 struct scsi_sense_hdr VAR_12;

 if (VAR_10->type != VAR_4 && VAR_10->type != VAR_5)
  return;

 if (VAR_6->protection_type == 0)
  return;

 VAR_8 = FUNC_0(VAR_10, 1, 0x0a, VAR_7, 36, VAR_3,
         VAR_2, &VAR_11, &VAR_12);

 if (!FUNC_2(VAR_8) || !VAR_11.header_length ||
     VAR_11.length < 6) {
  FUNC_3(VAR_1, VAR_6,
     "getting Control mode page failed, assume no ATO\n");

  if (FUNC_1(&VAR_12))
   FUNC_4(VAR_6, &VAR_12);

  return;
 }

 VAR_9 = VAR_11.header_length + VAR_11.block_descriptor_length;

 if ((VAR_7[VAR_9] & 0x3f) != 0x0a) {
  FUNC_3(VAR_0, VAR_6, "ATO Got wrong page\n");
  return;
 }

 if ((VAR_7[VAR_9 + 5] & 0x80) == 0)
  return;

 VAR_6->ATO = 1;

 return;
}
