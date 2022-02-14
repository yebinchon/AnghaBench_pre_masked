
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct pqi_io_request {int status; struct scsi_cmnd* scmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pqi_io_request*) ;
 int FUNC_1 (struct pqi_io_request*) ;
 scalar_t__ FUNC_2 (struct pqi_io_request*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static void FUNC_6(struct pqi_io_request *VAR_2,
 void *VAR_3)
{
 struct scsi_cmnd *VAR_4;

 VAR_4 = VAR_2->scmd;
 FUNC_4(VAR_4);
 if (VAR_2->status == -VAR_1)
  FUNC_5(VAR_4, VAR_0);
 else if (FUNC_2(VAR_2)) {
  FUNC_1(VAR_2);
  return;
 }
 FUNC_0(VAR_2);
 FUNC_3(VAR_4);
}
