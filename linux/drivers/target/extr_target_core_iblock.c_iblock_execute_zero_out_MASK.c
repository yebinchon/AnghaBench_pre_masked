
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct se_cmd {int t_task_lba; int data_length; struct scatterlist* t_data_sg; struct se_device* se_dev; } ;
struct scatterlist {int offset; } ;
struct block_device {int dummy; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block_device*,int ,int ,int ,int) ;
 unsigned char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned char* FUNC_3 (unsigned char*,int,int ) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (struct se_cmd*,int ) ;
 int FUNC_7 (struct se_device*,int ) ;

__attribute__((used)) static sense_reason_t
FUNC_8(struct block_device *VAR_3, struct se_cmd *VAR_4)
{
 struct se_device *VAR_5 = VAR_4->se_dev;
 struct scatterlist *VAR_6 = &VAR_4->t_data_sg[0];
 unsigned char *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(FUNC_5(VAR_6)) + VAR_6->offset;
 if (!VAR_7)
  return VAR_2;




 VAR_8 = FUNC_3(VAR_7, 0x00, VAR_4->data_length);
 FUNC_2(FUNC_5(VAR_6));

 if (VAR_8)
  return VAR_2;

 VAR_9 = FUNC_0(VAR_3,
    FUNC_7(VAR_5, VAR_4->t_task_lba),
    FUNC_7(VAR_5,
     FUNC_4(VAR_4)),
    VAR_0, 0);
 if (VAR_9)
  return VAR_2;

 FUNC_6(VAR_4, VAR_1);
 return 0;
}
