
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_driver {int (* uninit_command ) (struct scsi_cmnd*) ;} ;
struct scsi_cmnd {int request; } ;


 int FUNC_0 (int ) ;
 struct scsi_driver* FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct scsi_cmnd *VAR_0)
{
 if (!FUNC_0(VAR_0->request)) {
  struct scsi_driver *VAR_1 = FUNC_1(VAR_0);

  if (VAR_1->uninit_command)
   VAR_1->uninit_command(VAR_0);
 }
}
