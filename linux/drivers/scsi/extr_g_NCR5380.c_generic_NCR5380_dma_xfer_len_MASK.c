
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int this_residual; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; TYPE_1__ SCp; } ;
struct NCR5380_hostdata {int flags; scalar_t__ board; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct NCR5380_hostdata *VAR_4,
                                        struct scsi_cmnd *VAR_5)
{
 int VAR_6 = VAR_5->SCp.this_residual;

 if (VAR_4->flags & VAR_3)
  return 0;


 if (VAR_6 % 128)
  return 0;


 if (VAR_4->board == VAR_0 &&
     VAR_5->sc_data_direction == VAR_2)
  VAR_6 = FUNC_0(VAR_5->SCp.this_residual, 512);

 return FUNC_0(VAR_6, VAR_1);
}
