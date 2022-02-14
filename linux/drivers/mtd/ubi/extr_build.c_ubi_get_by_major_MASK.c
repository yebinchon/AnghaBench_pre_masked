
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct ubi_device {scalar_t__ ref_count; int dev; TYPE_1__ cdev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 struct ubi_device** VAR_1 ;
 int VAR_2 ;

struct ubi_device *FUNC_5(int VAR_3)
{
 int VAR_4;
 struct ubi_device *VAR_5;

 FUNC_2(&VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = VAR_1[VAR_4];
  if (VAR_5 && FUNC_0(VAR_5->cdev.dev) == VAR_3) {
   FUNC_4(VAR_5->ref_count >= 0);
   VAR_5->ref_count += 1;
   FUNC_1(&VAR_5->dev);
   FUNC_3(&VAR_2);
   return VAR_5;
  }
 }
 FUNC_3(&VAR_2);

 return ((void*)0);
}
