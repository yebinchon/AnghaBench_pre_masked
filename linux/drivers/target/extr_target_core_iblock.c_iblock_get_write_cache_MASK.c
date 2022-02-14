
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct request_queue {int queue_flags; } ;
struct iblock_dev {struct block_device* ibd_bd; } ;
struct block_device {int dummy; } ;


 struct iblock_dev* FUNC_0 (struct se_device*) ;
 int VAR_0 ;
 struct request_queue* FUNC_1 (struct block_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct se_device *VAR_1)
{
 struct iblock_dev *VAR_2 = FUNC_0(VAR_1);
 struct block_device *VAR_3 = VAR_2->ibd_bd;
 struct request_queue *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_0, &VAR_4->queue_flags);
}
