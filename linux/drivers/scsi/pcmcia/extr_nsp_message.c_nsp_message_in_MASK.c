
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_6__ {unsigned char* MsgBuffer; int MsgLen; } ;
typedef TYPE_3__ nsp_hw_data ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {unsigned int io_port; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct scsi_cmnd*,int ,int ) ;
 unsigned char FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ,unsigned char) ;
 int FUNC_4 (struct scsi_cmnd*,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_7)
{
 unsigned int VAR_8 = VAR_7->device->host->io_port;
 nsp_hw_data *VAR_9 = (nsp_hw_data *)VAR_7->device->host->hostdata;
 unsigned char VAR_10, VAR_11;
 int VAR_12, VAR_13;







 VAR_12 = 16;
 VAR_13 = 0;

 FUNC_0(VAR_3, "msgin loop");
 do {

  VAR_10 = FUNC_2(VAR_8, VAR_5);


  VAR_11 = FUNC_2(VAR_8, VAR_4);
  VAR_11 |= VAR_6;
  FUNC_3(VAR_8, VAR_4, VAR_11);
  FUNC_4(VAR_7, VAR_0, "msgin<REQ>");

  VAR_9->MsgBuffer[VAR_13] = VAR_10; VAR_13++;


  VAR_11 = FUNC_2(VAR_8, VAR_4);
  VAR_11 &= ~VAR_6;
  FUNC_3(VAR_8, VAR_4, VAR_11);


  VAR_12 = FUNC_1(VAR_7, VAR_1, VAR_0);
 } while (VAR_12 > 0 && VAR_2 > VAR_13);

 VAR_9->MsgLen = VAR_13;

}
