
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; } ;
struct scsi_device {int changed; scalar_t__ removable; } ;


 int VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct scsi_device*,char*,int ,int *,int ,struct scsi_sense_hdr*,int,int,int *) ;
 scalar_t__ FUNC_1 (struct scsi_sense_hdr*) ;

int
FUNC_2(struct scsi_device *VAR_3, int VAR_4, int VAR_5,
       struct scsi_sense_hdr *VAR_6)
{
 char VAR_7[] = {
  VAR_1, 0, 0, 0, 0, 0,
 };
 int VAR_8;


 do {
  VAR_8 = FUNC_0(VAR_3, VAR_7, VAR_0, ((void*)0), 0, VAR_6,
       VAR_4, 1, ((void*)0));
  if (VAR_3->removable && FUNC_1(VAR_6) &&
      VAR_6->sense_key == VAR_2)
   VAR_3->changed = 1;
 } while (FUNC_1(VAR_6) &&
   VAR_6->sense_key == VAR_2 && --VAR_5);

 return VAR_8;
}
