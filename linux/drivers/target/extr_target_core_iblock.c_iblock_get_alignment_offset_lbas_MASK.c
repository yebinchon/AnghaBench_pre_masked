
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct iblock_dev {struct block_device* ibd_bd; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 struct iblock_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;

__attribute__((used)) static sector_t FUNC_3(struct se_device *VAR_0)
{
 struct iblock_dev *VAR_1 = FUNC_0(VAR_0);
 struct block_device *VAR_2 = VAR_1->ibd_bd;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == -1)
  return 0;


 return VAR_3 / FUNC_2(VAR_2);
}
