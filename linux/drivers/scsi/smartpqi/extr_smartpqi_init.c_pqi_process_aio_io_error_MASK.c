
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int underflow; int result; int sense_buffer; int device; } ;
struct pqi_io_request {int raid_bypass; int status; struct pqi_aio_error_info* error_info; struct scsi_cmnd* scmd; } ;
struct pqi_aio_error_info {int service_response; int data; int data_length; scalar_t__ data_present; int residual_count; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (struct pqi_io_request*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (int ,int ,int ,int,int) ;
 int FUNC_7 (struct scsi_cmnd*,int) ;
 int FUNC_8 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static void FUNC_9(struct pqi_io_request *VAR_9)
{
 u8 VAR_10;
 u8 VAR_11;
 struct scsi_cmnd *VAR_12;
 struct pqi_aio_error_info *VAR_13;
 size_t VAR_14;
 int VAR_15;
 int VAR_16;
 bool VAR_17;

 VAR_12 = VAR_9->scmd;
 VAR_13 = VAR_9->error_info;
 VAR_11 = VAR_1;
 VAR_14 = 0;
 VAR_17 = 0;

 switch (VAR_13->service_response) {
 case 140:
  VAR_10 = VAR_13->status;
  break;
 case 139:
  switch (VAR_13->status) {
  case 132:
   VAR_10 = VAR_7;
   break;
  case 128:
   VAR_10 = VAR_6;
   VAR_15 = FUNC_1(
      &VAR_13->residual_count);
   FUNC_7(VAR_12, VAR_15);
   VAR_16 = FUNC_5(VAR_12) - VAR_15;
   if (VAR_16 < VAR_12->underflow)
    VAR_11 = VAR_2;
   break;
  case 129:
   VAR_10 = VAR_6;
   break;
  case 134:
   FUNC_3(VAR_9);
   VAR_10 = VAR_6;
   VAR_9->status = -VAR_3;
   break;
  case 130:
  case 133:
   if (!VAR_9->raid_bypass) {
    VAR_17 = 1;
    FUNC_4(VAR_12->device, "AIO");
    VAR_11 = VAR_0;
   }
   VAR_10 = VAR_5;
   break;
  case 131:
  default:
   VAR_10 = VAR_5;
   break;
  }
  break;
 case 138:
 case 135:
  VAR_10 = VAR_6;
  break;
 case 136:
 case 137:
 default:
  VAR_10 = VAR_5;
  break;
 }

 if (VAR_13->data_present) {
  VAR_14 =
   FUNC_0(&VAR_13->data_length);
  if (VAR_14) {
   if (VAR_14 > sizeof(VAR_13->data))
    VAR_14 = sizeof(VAR_13->data);
   if (VAR_14 > VAR_8)
    VAR_14 = VAR_8;
   FUNC_2(VAR_12->sense_buffer, VAR_13->data,
    VAR_14);
  }
 }

 if (VAR_17 && VAR_14 == 0)
  FUNC_6(0, VAR_12->sense_buffer, VAR_4,
   0x3e, 0x1);

 VAR_12->result = VAR_10;
 FUNC_8(VAR_12, VAR_11);
}
