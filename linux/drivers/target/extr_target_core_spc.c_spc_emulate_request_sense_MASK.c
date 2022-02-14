
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct se_cmd {unsigned char* t_task_cdb; int data_length; int se_dev; } ;
typedef int sense_reason_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct se_cmd*,int*,int*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,unsigned char*,int ,int,int) ;
 int FUNC_6 (struct se_cmd*,int ) ;
 int FUNC_7 (int ) ;
 unsigned char* FUNC_8 (struct se_cmd*) ;
 int FUNC_9 (struct se_cmd*) ;
 int VAR_6 ;

__attribute__((used)) static sense_reason_t FUNC_10(struct se_cmd *VAR_7)
{
 unsigned char *VAR_8 = VAR_7->t_task_cdb;
 unsigned char *VAR_9;
 u8 VAR_10 = 0, VAR_11 = 0;
 unsigned char VAR_12[VAR_2];
 bool VAR_13 = FUNC_7(VAR_7->se_dev);

 FUNC_2(VAR_12, 0, VAR_2);

 if (VAR_8[1] & 0x01) {
  FUNC_4("REQUEST_SENSE description emulation not"
   " supported\n");
  return VAR_3;
 }

 VAR_9 = FUNC_8(VAR_7);
 if (!VAR_9)
  return VAR_4;

 if (!FUNC_0(VAR_7, &VAR_10, &VAR_11))
  FUNC_5(VAR_13, VAR_12, VAR_5,
     VAR_10, VAR_11);
 else
  FUNC_5(VAR_13, VAR_12, VAR_1, 0x0, 0x0);

 FUNC_1(VAR_9, VAR_12, FUNC_3(VAR_6, sizeof(VAR_12), VAR_7->data_length));
 FUNC_9(VAR_7);

 FUNC_6(VAR_7, VAR_0);
 return 0;
}
