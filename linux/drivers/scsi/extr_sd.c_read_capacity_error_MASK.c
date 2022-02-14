
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; } ;
struct scsi_disk {scalar_t__ capacity; } ;
struct scsi_device {scalar_t__ removable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct scsi_disk*,struct scsi_sense_hdr*) ;
 int FUNC_2 (int ,struct scsi_disk*,char*) ;
 int FUNC_3 (struct scsi_disk*) ;

__attribute__((used)) static void FUNC_4(struct scsi_disk *VAR_3, struct scsi_device *VAR_4,
   struct scsi_sense_hdr *VAR_5, int VAR_6,
   int VAR_7)
{
 if (FUNC_0(VAR_7) == VAR_0)
  FUNC_1(VAR_3, VAR_5);
 else
  FUNC_2(VAR_1, VAR_3, "Sense not available.\n");





 if (VAR_4->removable &&
     VAR_6 && VAR_5->sense_key == VAR_2)
  FUNC_3(VAR_3);






 VAR_3->capacity = 0;
}
