
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int sense_key; int asc; } ;
struct scsi_disk {int dummy; } ;




 int FUNC_0 (struct scsi_sense_hdr*) ;
 int FUNC_1 (struct scsi_disk*) ;

__attribute__((used)) static int FUNC_2(struct scsi_disk *VAR_0,
        struct scsi_sense_hdr *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return 0;


 switch (VAR_1->sense_key) {
 case 128:
 case 129:

  if (VAR_1->asc == 0x3A) {
   FUNC_1(VAR_0);
   return 1;
  }
 }
 return 0;
}
