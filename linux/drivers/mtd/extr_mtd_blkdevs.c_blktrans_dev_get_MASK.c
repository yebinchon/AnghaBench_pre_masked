
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_blktrans_dev {int ref; } ;
struct gendisk {struct mtd_blktrans_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mtd_blktrans_dev *FUNC_3(struct gendisk *VAR_1)
{
 struct mtd_blktrans_dev *VAR_2;

 FUNC_1(&VAR_0);
 VAR_2 = VAR_1->private_data;

 if (!VAR_2)
  goto unlock;
 FUNC_0(&VAR_2->ref);
unlock:
 FUNC_2(&VAR_0);
 return VAR_2;
}
