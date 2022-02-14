
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int result; } ;
struct response_iu {int response_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct scsi_cmnd*,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct response_iu *VAR_4, struct scsi_cmnd *VAR_5)
{
 u8 VAR_6 = VAR_4->response_code;

 switch (VAR_6) {
 case 130:
  VAR_5->result = VAR_0 << 16;
  break;
 case 128:
  VAR_5->result = VAR_2 << 16;
  break;
 case 129:
  VAR_5->result = VAR_3 << 16;
  break;
 default:
  FUNC_0(VAR_5, "response iu", VAR_6);
  VAR_5->result = VAR_1 << 16;
  break;
 }

 return VAR_6 == 128;
}
