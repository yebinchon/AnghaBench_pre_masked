
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; int sense_buffer; } ;
struct aac_hba_resp {int status; int sense_response_buf; int sense_response_data_len; int residual_count; } ;
struct aac_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct aac_dev *VAR_8,
     struct scsi_cmnd *VAR_9,
     struct aac_hba_resp *VAR_10) {

 VAR_9->result = VAR_10->status;

 FUNC_3(VAR_9, FUNC_0(VAR_10->residual_count));

 switch (VAR_10->status) {
 case 131:
  VAR_9->result |= VAR_5 << 16 | VAR_1 << 8;
  break;
 case 132:
 {
  int VAR_11;

  VAR_11 = FUNC_2(VAR_7, VAR_10->sense_response_data_len,
   VAR_6);
  if (VAR_11)
   FUNC_1(VAR_9->sense_buffer,
    VAR_10->sense_response_buf, VAR_11);
  VAR_9->result |= VAR_5 << 16 | VAR_1 << 8;
  break;
 }
 case 133:
  VAR_9->result |= VAR_3 << 16 | VAR_1 << 8;
  break;
 case 129:
  VAR_9->result |= VAR_2 << 16 | VAR_0 << 8;
  break;
 case 130:
 case 128:
 default:
  VAR_9->result |= VAR_4 << 16 | VAR_1 << 8;
  break;
 }
}
