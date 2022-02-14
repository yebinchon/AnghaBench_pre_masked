
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct iblock_dev {struct block_device* ibd_bd; } ;
struct block_device {int dummy; } ;


 struct iblock_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 unsigned int FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(struct se_device *VAR_0)
{
 struct iblock_dev *VAR_1 = FUNC_0(VAR_0);
 struct block_device *VAR_2 = VAR_1->ibd_bd;
 int VAR_3 = FUNC_2(VAR_2) / FUNC_1(VAR_2);

 return FUNC_3(VAR_3);
}
