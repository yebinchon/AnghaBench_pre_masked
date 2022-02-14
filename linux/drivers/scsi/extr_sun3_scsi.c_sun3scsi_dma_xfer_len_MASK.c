
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int this_residual; } ;
struct scsi_cmnd {int request; TYPE_1__ SCp; } ;
struct NCR5380_hostdata {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct NCR5380_hostdata *VAR_1,
                                 struct scsi_cmnd *VAR_2)
{
 int VAR_3 = VAR_2->SCp.this_residual;

 if (VAR_3 < VAR_0 || FUNC_0(VAR_2->request))
  return 0;

 return VAR_3;
}
