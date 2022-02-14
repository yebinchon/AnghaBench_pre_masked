
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct pqi_io_request {int context; int (* io_complete_callback ) (struct pqi_io_request*,int ) ;int * error_info; int status; struct scsi_cmnd* scmd; int refcount; } ;
struct pqi_ctrl_info {unsigned int max_io_slots; struct pqi_io_request* io_request_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct scsi_cmnd*,int ) ;
 int FUNC_2 (struct pqi_io_request*,int ) ;

__attribute__((used)) static void FUNC_3(struct pqi_ctrl_info *VAR_3)
{
 unsigned int VAR_4;
 struct pqi_io_request *VAR_5;
 struct scsi_cmnd *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3->max_io_slots; VAR_4++) {
  VAR_5 = &VAR_3->io_request_pool[VAR_4];
  if (FUNC_0(&VAR_5->refcount) == 0)
   continue;

  VAR_6 = VAR_5->scmd;
  if (VAR_6) {
   FUNC_1(VAR_6, VAR_0);
  } else {
   VAR_5->status = -VAR_1;
   VAR_5->error_info =
    &VAR_2;
  }

  VAR_5->io_complete_callback(VAR_5,
   VAR_5->context);
 }
}
