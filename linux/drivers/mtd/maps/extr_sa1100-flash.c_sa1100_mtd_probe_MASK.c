
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_info {int mtd; } ;
struct platform_device {int dev; } ;
struct flash_platform_data {int nr_parts; int parts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sa_info*) ;
 int FUNC_1 (struct sa_info*) ;
 struct flash_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct platform_device*,struct sa_info*) ;
 struct sa_info* FUNC_5 (struct platform_device*,struct flash_platform_data*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct flash_platform_data *VAR_3 = FUNC_2(&VAR_2->dev);
 struct sa_info *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto out;
 }




 FUNC_3(VAR_4->mtd, VAR_1, ((void*)0), VAR_3->parts,
      VAR_3->nr_parts);

 FUNC_4(VAR_2, VAR_4);
 VAR_5 = 0;

 out:
 return VAR_5;
}
