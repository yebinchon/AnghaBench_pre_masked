
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int dummy; } ;
struct scsi_cmnd {int sense_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct scsi_sense_hdr*) ;

bool FUNC_1(const struct scsi_cmnd *VAR_1,
      struct scsi_sense_hdr *VAR_2)
{
 return FUNC_0(VAR_1->sense_buffer,
   VAR_0, VAR_2);
}
