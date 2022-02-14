
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinand_device {int lock; } ;
struct mtd_info {int dummy; } ;
struct erase_info {int dummy; } ;


 struct spinand_device* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mtd_info*,struct erase_info*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_0,
        struct erase_info *VAR_1)
{
 struct spinand_device *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_3(VAR_0, VAR_1);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
