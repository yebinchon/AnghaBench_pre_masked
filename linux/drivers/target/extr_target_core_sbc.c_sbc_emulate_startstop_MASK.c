
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {unsigned char* t_task_cdb; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct se_cmd*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_2)
{
 unsigned char *VAR_3 = VAR_2->t_task_cdb;






 if (!(VAR_3[1] & 1) || VAR_3[2] || VAR_3[3])
  return VAR_1;





 if (VAR_3[4] >> 4 & 0xf)
  return VAR_1;






 if (!(VAR_3[4] & 1) || (VAR_3[4] & 2) || (VAR_3[4] & 4))
  return VAR_1;

 FUNC_0(VAR_2, VAR_0);
 return 0;
}
