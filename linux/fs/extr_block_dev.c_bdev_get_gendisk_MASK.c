
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct block_device {int bd_inode; int bd_dev; } ;


 struct gendisk* FUNC_0 (int ,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gendisk*) ;

__attribute__((used)) static struct gendisk *FUNC_3(struct block_device *VAR_0, int *VAR_1)
{
 struct gendisk *VAR_2 = FUNC_0(VAR_0->bd_dev, VAR_1);

 if (!VAR_2)
  return ((void*)0);
 if (FUNC_1(VAR_0->bd_inode)) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }
 return VAR_2;
}
