
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct ubi_device {int ubi_num; TYPE_1__ cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ubi_device** VAR_2 ;
 int VAR_3 ;

int FUNC_3(int VAR_4)
{
 int VAR_5, VAR_6 = -VAR_0;

 FUNC_1(&VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct ubi_device *VAR_7 = VAR_2[VAR_5];

  if (VAR_7 && FUNC_0(VAR_7->cdev.dev) == VAR_4) {
   VAR_6 = VAR_7->ubi_num;
   break;
  }
 }
 FUNC_2(&VAR_3);

 return VAR_6;
}
