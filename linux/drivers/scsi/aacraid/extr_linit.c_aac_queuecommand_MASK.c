
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phase; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_1(struct Scsi_Host *VAR_2,
       struct scsi_cmnd *VAR_3)
{
 int VAR_4 = 0;
 VAR_3->SCp.phase = VAR_0;
 VAR_4 = (FUNC_0(VAR_3) ? VAR_1 : 0);
 return VAR_4;
}
