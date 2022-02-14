
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_sense_hdr {int response_code; int sense_key; int asc; int ascq; int additional_length; } ;


 int FUNC_0 (struct scsi_sense_hdr*,int ,int) ;
 int FUNC_1 (struct scsi_sense_hdr*) ;

bool FUNC_2(const u8 *VAR_0, int VAR_1,
     struct scsi_sense_hdr *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(struct scsi_sense_hdr));

 if (!VAR_0 || !VAR_1)
  return 0;

 VAR_2->response_code = (VAR_0[0] & 0x7f);

 if (!FUNC_1(VAR_2))
  return 0;

 if (VAR_2->response_code >= 0x72) {



  if (VAR_1 > 1)
   VAR_2->sense_key = (VAR_0[1] & 0xf);
  if (VAR_1 > 2)
   VAR_2->asc = VAR_0[2];
  if (VAR_1 > 3)
   VAR_2->ascq = VAR_0[3];
  if (VAR_1 > 7)
   VAR_2->additional_length = VAR_0[7];
 } else {



  if (VAR_1 > 2)
   VAR_2->sense_key = (VAR_0[2] & 0xf);
  if (VAR_1 > 7) {
   VAR_1 = (VAR_1 < (VAR_0[7] + 8)) ?
      VAR_1 : (VAR_0[7] + 8);
   if (VAR_1 > 12)
    VAR_2->asc = VAR_0[12];
   if (VAR_1 > 13)
    VAR_2->ascq = VAR_0[13];
  }
 }

 return 1;
}
