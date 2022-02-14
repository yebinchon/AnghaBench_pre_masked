
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {unsigned char* t_task_cdb; int data_length; } ;
typedef int sense_reason_t ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct se_cmd*) ;

sense_reason_t FUNC_3(struct se_cmd *VAR_2)
{
 unsigned char *VAR_3 = &VAR_2->t_task_cdb[0];
 int VAR_4 = (VAR_3[1] & 0x1f), VAR_5 = VAR_3[2];
 sense_reason_t VAR_6 = VAR_1;

 FUNC_0("Entering target_do_receive_copy_results: SA: 0x%02x, List ID:"
  " 0x%02x, AL: %u\n", VAR_4, VAR_5, VAR_2->data_length);

 if (VAR_5 != 0) {
  FUNC_1("Receive Copy Results with non zero list identifier"
         " not supported\n");
  return VAR_0;
 }

 switch (VAR_4) {
 case 129:
  VAR_6 = FUNC_2(VAR_2);
  break;
 case 131:
 case 128:
 case 130:
 default:
  FUNC_1("Unsupported SA for receive copy results: 0x%02x\n", VAR_4);
  return VAR_0;
 }

 return VAR_6;
}
