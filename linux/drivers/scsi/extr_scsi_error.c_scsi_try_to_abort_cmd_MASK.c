
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int (* eh_abort_handler ) (struct scsi_cmnd*) ;} ;
struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_1(struct scsi_host_template *VAR_1,
     struct scsi_cmnd *VAR_2)
{
 if (!VAR_1->eh_abort_handler)
  return VAR_0;

 return VAR_1->eh_abort_handler(VAR_2);
}
