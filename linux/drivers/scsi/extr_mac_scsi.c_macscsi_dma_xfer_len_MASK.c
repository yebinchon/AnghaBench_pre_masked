
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ this_residual; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct NCR5380_hostdata {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct NCR5380_hostdata *VAR_2,
                                struct scsi_cmnd *VAR_3)
{
 if (VAR_2->flags & VAR_0 ||
     VAR_3->SCp.this_residual < VAR_1)
  return 0;

 return VAR_3->SCp.this_residual;
}
