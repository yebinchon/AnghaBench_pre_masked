
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ sense_buffer; int sc_data_direction; } ;
struct pvscsi_ctx {scalar_t__ sensePA; scalar_t__ dataPA; scalar_t__ sglPA; struct scsi_cmnd* cmd; } ;
struct pvscsi_adapter {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,scalar_t__,unsigned int,int ) ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 unsigned int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(const struct pvscsi_adapter *VAR_4,
     struct pvscsi_ctx *VAR_5)
{
 struct scsi_cmnd *VAR_6;
 unsigned VAR_7;

 VAR_6 = VAR_5->cmd;
 VAR_7 = FUNC_1(VAR_6);

 if (VAR_7 != 0) {
  unsigned VAR_8 = FUNC_3(VAR_6);

  if (VAR_8 != 0) {
   FUNC_2(VAR_6);
   if (VAR_5->sglPA) {
    FUNC_0(&VAR_4->dev->dev, VAR_5->sglPA,
       VAR_3, VAR_1);
    VAR_5->sglPA = 0;
   }
  } else
   FUNC_0(&VAR_4->dev->dev, VAR_5->dataPA,
      VAR_7, VAR_6->sc_data_direction);
 }
 if (VAR_6->sense_buffer)
  FUNC_0(&VAR_4->dev->dev, VAR_5->sensePA,
     VAR_2, VAR_0);
}
