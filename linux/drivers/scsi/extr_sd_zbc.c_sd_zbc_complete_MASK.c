
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; } ;
struct scsi_cmnd {int result; struct request* request; } ;
struct request {int rq_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct request*) ;

void FUNC_1(struct scsi_cmnd *VAR_3, unsigned int VAR_4,
       struct scsi_sense_hdr *VAR_5)
{
 int VAR_6 = VAR_3->result;
 struct request *VAR_7 = VAR_3->request;

 if (FUNC_0(VAR_7) == VAR_1 &&
     VAR_6 &&
     VAR_5->sense_key == VAR_0 &&
     VAR_5->asc == 0x24) {





  VAR_7->rq_flags |= VAR_2;
 }
}
