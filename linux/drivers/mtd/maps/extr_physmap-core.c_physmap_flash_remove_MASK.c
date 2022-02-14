
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct physmap_flash_info {scalar_t__ cmtd; scalar_t__* mtds; int nmaps; } ;
struct physmap_flash_data {int (* exit ) (struct platform_device*) ;} ;


 struct physmap_flash_data* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct physmap_flash_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct physmap_flash_info *VAR_1;
 struct physmap_flash_data *VAR_2;
 int VAR_3, VAR_4;

 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1)
  return 0;

 if (VAR_1->cmtd) {
  VAR_4 = FUNC_3(VAR_1->cmtd);
  if (VAR_4)
   return VAR_4;

  if (VAR_1->cmtd != VAR_1->mtds[0])
   FUNC_2(VAR_1->cmtd);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->nmaps; VAR_3++) {
  if (VAR_1->mtds[VAR_3])
   FUNC_1(VAR_1->mtds[VAR_3]);
 }

 VAR_2 = FUNC_0(&VAR_0->dev);
 if (VAR_2 && VAR_2->exit)
  VAR_2->exit(VAR_0);

 return 0;
}
