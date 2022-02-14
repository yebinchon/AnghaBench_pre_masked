
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_6__ {int MsgLen; } ;
typedef TYPE_3__ nsp_hw_data ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct scsi_cmnd*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static void FUNC_4(struct scsi_cmnd *VAR_4)
{
 nsp_hw_data *VAR_5 = (nsp_hw_data *)VAR_4->device->host->hostdata;
 int VAR_6 = 1;
 int VAR_7 = VAR_5->MsgLen;
 FUNC_0(VAR_3, "msgout loop");
 do {
  if (FUNC_3(VAR_4, VAR_1)) {
   FUNC_2(VAR_2, "msgout: xfer short");
  }


  VAR_6 = FUNC_1(VAR_4, VAR_1, VAR_0);
 } while (VAR_6 > 0 && VAR_7-- > 0);

}
