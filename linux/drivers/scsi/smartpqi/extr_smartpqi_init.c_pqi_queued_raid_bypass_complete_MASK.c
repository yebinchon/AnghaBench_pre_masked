
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct pqi_io_request {struct scsi_cmnd* scmd; } ;


 int FUNC_0 (struct pqi_io_request*) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_2(struct pqi_io_request *VAR_0,
 void *VAR_1)
{
 struct scsi_cmnd *VAR_2;

 VAR_2 = VAR_0->scmd;
 FUNC_0(VAR_0);
 FUNC_1(VAR_2);
}
