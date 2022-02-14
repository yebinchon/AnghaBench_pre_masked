
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int data_direction; int t_data_nents; int t_data_sg; struct sbc_ops* protocol_data; } ;
struct sbc_ops {int (* execute_rw ) (struct se_cmd*,int ,int ,int ) ;} ;
typedef int sense_reason_t ;


 int FUNC_0 (struct se_cmd*,int ,int ,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_0)
{
 struct sbc_ops *VAR_1 = VAR_0->protocol_data;

 return VAR_1->execute_rw(VAR_0, VAR_0->t_data_sg, VAR_0->t_data_nents,
          VAR_0->data_direction);
}
