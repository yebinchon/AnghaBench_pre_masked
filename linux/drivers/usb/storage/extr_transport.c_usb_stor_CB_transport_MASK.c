
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int* iobuf; unsigned int recv_bulk_pipe; unsigned int send_bulk_pipe; scalar_t__ protocol; scalar_t__ subclass; int ifnum; int send_ctrl_pipe; } ;
struct scsi_cmnd {scalar_t__* cmnd; scalar_t__ sc_data_direction; int cmd_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int*,scalar_t__*,int ) ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct us_data*,unsigned int,struct scsi_cmnd*) ;
 int FUNC_3 (struct us_data*,unsigned int) ;
 int FUNC_4 (struct us_data*,int ,int ,int,int ,int ,int*,int ) ;
 int FUNC_5 (struct us_data*,char*,int,...) ;
 int FUNC_6 (struct us_data*,int*,int) ;

int FUNC_7(struct scsi_cmnd *VAR_13, struct us_data *VAR_14)
{
 unsigned int VAR_15 = FUNC_1(VAR_13);
 unsigned int VAR_16 = 0;
 int VAR_17;







 FUNC_0(VAR_14->iobuf, VAR_13->cmnd, VAR_13->cmd_len);
 VAR_17 = FUNC_4(VAR_14, VAR_14->send_ctrl_pipe,
          VAR_12,
          VAR_11 | VAR_4, 0,
          VAR_14->ifnum, VAR_14->iobuf, VAR_13->cmd_len);


 FUNC_5(VAR_14, "Call to usb_stor_ctrl_transfer() returned %d\n",
       VAR_17);


 if (VAR_17 == VAR_10) {
  return VAR_7;
 }


 if (VAR_17 != VAR_9) {
  return VAR_6;
 }



 if (VAR_15) {
  VAR_16 = VAR_13->sc_data_direction == VAR_0 ?
    VAR_14->recv_bulk_pipe : VAR_14->send_bulk_pipe;
  VAR_17 = FUNC_2(VAR_14, VAR_16, VAR_13);
  FUNC_5(VAR_14, "CBI data stage result is 0x%x\n", VAR_17);


  if (VAR_17 == VAR_10)
   return VAR_7;
  if (VAR_17 > VAR_10)
   return VAR_6;
 }







 if (VAR_14->protocol != VAR_3)
  return VAR_8;

 VAR_17 = FUNC_6(VAR_14, VAR_14->iobuf, 2);
 FUNC_5(VAR_14, "Got interrupt data (0x%x, 0x%x)\n",
       VAR_14->iobuf[0], VAR_14->iobuf[1]);
 if (VAR_17 != VAR_9)
  return VAR_6;
 if (VAR_14->subclass == VAR_5) {
  if (VAR_13->cmnd[0] == VAR_2 ||
      VAR_13->cmnd[0] == VAR_1)
   return VAR_8;
  if (VAR_14->iobuf[0])
   goto Failed;
  return VAR_8;
 }
 if (VAR_14->iobuf[0]) {
  FUNC_5(VAR_14, "CBI IRQ data showed reserved bType 0x%x\n",
        VAR_14->iobuf[0]);
  goto Failed;

 }


 switch (VAR_14->iobuf[1] & 0x0F) {
  case 0x00:
   return VAR_8;
  case 0x01:
   goto Failed;
 }
 return VAR_6;





  Failed:
 if (VAR_16)
  FUNC_3(VAR_14, VAR_16);
 return VAR_7;
}
