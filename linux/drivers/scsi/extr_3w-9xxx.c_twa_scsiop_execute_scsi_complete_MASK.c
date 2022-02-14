
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct TYPE_3__ {void** generic_buffer_virt; struct scsi_cmnd** srb; } ;
typedef TYPE_1__ TW_Device_Extension ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*,void*,int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(TW_Device_Extension *VAR_3, int VAR_4)
{
 struct scsi_cmnd *VAR_5 = VAR_3->srb[VAR_4];

 if (!FUNC_2(VAR_5) &&
     (VAR_5->sc_data_direction == VAR_1 ||
      VAR_5->sc_data_direction == VAR_0)) {
  if (FUNC_1(VAR_5) == 1) {
   void *VAR_6 = VAR_3->generic_buffer_virt[VAR_4];

   FUNC_0(VAR_5, VAR_6, VAR_2);
  }
 }
}
