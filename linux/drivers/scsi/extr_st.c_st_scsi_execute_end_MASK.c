
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_request {scalar_t__ waiting; int sense; struct bio* bio; int result; struct scsi_tape* stp; } ;
struct scsi_tape {TYPE_2__* buffer; } ;
struct scsi_request {int sense; scalar_t__ sense_len; int resid_len; int result; } ;
struct request {struct st_request* end_io_data; } ;
struct bio {int dummy; } ;
typedef int blk_status_t ;
struct TYPE_3__ {int residual; int midlevel_result; } ;
struct TYPE_4__ {TYPE_1__ cmdstat; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 struct scsi_request* FUNC_4 (struct request*) ;
 int FUNC_5 (struct scsi_tape*,struct request*) ;

__attribute__((used)) static void FUNC_6(struct request *VAR_1, blk_status_t VAR_2)
{
 struct st_request *VAR_3 = VAR_1->end_io_data;
 struct scsi_request *VAR_4 = FUNC_4(VAR_1);
 struct scsi_tape *VAR_5 = VAR_3->stp;
 struct bio *VAR_6;

 VAR_5->buffer->cmdstat.midlevel_result = VAR_3->result = VAR_4->result;
 VAR_5->buffer->cmdstat.residual = VAR_4->resid_len;

 FUNC_5(VAR_5, VAR_1);

 VAR_6 = VAR_3->bio;
 if (VAR_4->sense_len)
  FUNC_3(VAR_3->sense, VAR_4->sense, VAR_0);
 if (VAR_3->waiting)
  FUNC_2(VAR_3->waiting);

 FUNC_1(VAR_6);
 FUNC_0(VAR_1);
}
