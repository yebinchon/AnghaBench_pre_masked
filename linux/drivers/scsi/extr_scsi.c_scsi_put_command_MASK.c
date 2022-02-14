
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int abort_work; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_cmnd*) ;

void FUNC_3(struct scsi_cmnd *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_0(FUNC_1(&VAR_0->abort_work));
}
