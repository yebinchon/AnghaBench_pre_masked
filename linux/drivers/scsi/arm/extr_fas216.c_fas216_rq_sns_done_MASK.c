
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Status; int Message; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;int sense_buffer; TYPE_2__ SCp; TYPE_1__* device; } ;
struct TYPE_8__ {int ses; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_3__ FAS216_Info ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,char*,unsigned int,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct scsi_cmnd*,int *) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(FAS216_Info *VAR_4, struct scsi_cmnd *VAR_5,
          unsigned int VAR_6)
{
 FUNC_0(VAR_4, VAR_2, VAR_5->device->id,
     "request sense complete, result=0x%04x%02x%02x",
     VAR_6, VAR_5->SCp.Message, VAR_5->SCp.Status);

 if (VAR_6 != VAR_0 || VAR_5->SCp.Status != VAR_1)





  FUNC_1(VAR_5->sense_buffer, 0, VAR_3);
 FUNC_2(VAR_5, &VAR_4->ses);
 VAR_5->scsi_done(VAR_5);
}
