
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_cmnd {scalar_t__* sense_buffer; struct request* request; } ;
struct request {int rq_flags; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int sense_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct scsi_cmnd*,struct scsi_sense_hdr*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 TYPE_1__* FUNC_5 (struct request*) ;
 int FUNC_6 (struct scsi_cmnd*,int) ;
 int FUNC_7 (struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_4, int VAR_5,
     blk_status_t *VAR_6)
{
 bool VAR_7;
 bool VAR_8 = 1;
 struct request *VAR_9 = VAR_4->request;
 struct scsi_sense_hdr VAR_10;

 VAR_7 = FUNC_3(VAR_4, &VAR_10);
 if (VAR_7)
  VAR_8 = !FUNC_7(&VAR_10);

 if (FUNC_1(VAR_9)) {
  if (VAR_7) {



   FUNC_5(VAR_9)->sense_len =
    FUNC_2(8 + VAR_4->sense_buffer[7],
        VAR_3);
  }
  if (VAR_8)
   *VAR_6 = FUNC_6(VAR_4, VAR_5);
 } else if (FUNC_0(VAR_9) == 0 && VAR_8) {





  *VAR_6 = FUNC_6(VAR_4, VAR_5);
 }






 if (VAR_7 && (VAR_10.sense_key == VAR_1)) {
  bool VAR_11 = 1;





  if ((VAR_10.asc == 0x0) && (VAR_10.ascq == 0x1d))
   VAR_11 = 0;
  else if (VAR_9->rq_flags & VAR_2)
   VAR_11 = 0;
  if (VAR_11)
   FUNC_4(VAR_4);
  VAR_5 = 0;

  *VAR_6 = VAR_0;
 }







 if (FUNC_9(VAR_5) && FUNC_8(VAR_5)) {
  VAR_5 = 0;
  *VAR_6 = VAR_0;
 }
 return VAR_5;
}
