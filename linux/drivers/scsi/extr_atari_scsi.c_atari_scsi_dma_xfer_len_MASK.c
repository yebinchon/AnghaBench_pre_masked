
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int this_residual; int ptr; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; TYPE_1__ SCp; } ;
struct NCR5380_hostdata {int dummy; } ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct NCR5380_hostdata *VAR_5,
                                   struct scsi_cmnd *VAR_6)
{
 int VAR_7 = VAR_6->SCp.this_residual;
 int VAR_8, VAR_9;

 if (VAR_7 < VAR_0)
  return 0;

 if (FUNC_0())

  return VAR_7;
 if (VAR_6->sc_data_direction == VAR_1) {




  VAR_8 = VAR_7;
 } else {




  if (VAR_7 & 0x1ff)
   VAR_8 = 0;
  else {


   switch (FUNC_3(VAR_6)) {
   case 129:
    VAR_8 = VAR_7;
    break;
   case 128:
    VAR_8 = 0;
    break;
   case 130:
   default:


    VAR_8 = (VAR_7 < 1024) ? 0 : VAR_7;
    break;
   }
  }
 }


 VAR_9 = (VAR_4 && !FUNC_1(FUNC_4(VAR_6->SCp.ptr))) ?
      VAR_3 : 255*512;
 if (VAR_8 > VAR_9)
  VAR_8 = VAR_9;

 if (VAR_8 != VAR_7)
  FUNC_2(VAR_2, "DMA transfer now %d bytes instead of %d\n",
          VAR_8, VAR_7);

 return VAR_8;
}
