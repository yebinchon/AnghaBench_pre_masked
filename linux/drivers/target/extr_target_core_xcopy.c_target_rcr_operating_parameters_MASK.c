
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int data_length; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,unsigned char*) ;
 int FUNC_2 (int,unsigned char*) ;
 int FUNC_3 (struct se_cmd*,int ) ;
 unsigned char* FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*) ;

__attribute__((used)) static sense_reason_t FUNC_6(struct se_cmd *VAR_13)
{
 unsigned char *VAR_14;

 VAR_14 = FUNC_4(VAR_13);
 if (!VAR_14) {
  FUNC_0("transport_kmap_data_sg failed in"
         " target_rcr_operating_parameters\n");
  return VAR_12;
 }

 if (VAR_13->data_length < 54) {
  FUNC_0("Receive Copy Results Op Parameters length"
         " too small: %u\n", VAR_13->data_length);
  FUNC_5(VAR_13);
  return VAR_10;
 }



 VAR_14[4] = 0x1;



 FUNC_1(VAR_8, &VAR_14[8]);



 FUNC_1(VAR_7, &VAR_14[10]);



 FUNC_2(VAR_5, &VAR_14[12]);



 FUNC_2(VAR_6, &VAR_14[16]);



 FUNC_2(0x0, &VAR_14[20]);



 FUNC_2(0x0, &VAR_14[24]);



 FUNC_2(0x0, &VAR_14[28]);



 FUNC_1(VAR_9, &VAR_14[34]);



 VAR_14[36] = VAR_4;



 VAR_14[37] = VAR_1;



 VAR_14[38] = VAR_3;



 VAR_14[39] = VAR_2;



 VAR_14[43] = 0x2;



 VAR_14[44] = 0x02;
 VAR_14[45] = 0xe4;




 FUNC_2(42, &VAR_14[0]);

 FUNC_5(VAR_13);
 FUNC_3(VAR_13, VAR_0);

 return VAR_11;
}
