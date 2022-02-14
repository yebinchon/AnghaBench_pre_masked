
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int t_task_lba; struct sbc_ops* protocol_data; } ;
struct sbc_ops {scalar_t__ (* execute_unmap ) (struct se_cmd*,int ,scalar_t__) ;} ;
typedef scalar_t__ sense_reason_t ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct se_cmd*) ;
 scalar_t__ FUNC_1 (struct se_cmd*,int ,scalar_t__) ;
 int FUNC_2 (struct se_cmd*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_3(struct se_cmd *VAR_1)
{
 struct sbc_ops *VAR_2 = VAR_1->protocol_data;
 sector_t VAR_3 = FUNC_0(VAR_1);
 sense_reason_t VAR_4;

 if (VAR_3) {
  VAR_4 = VAR_2->execute_unmap(VAR_1, VAR_1->t_task_lba, VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_2(VAR_1, VAR_0);
 return 0;
}
