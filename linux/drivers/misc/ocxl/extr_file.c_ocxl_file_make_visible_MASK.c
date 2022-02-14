
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devt; } ;
struct ocxl_file_info {TYPE_1__ dev; int cdev; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct ocxl_file_info *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->cdev, &VAR_0);
 VAR_2 = FUNC_0(&VAR_1->cdev, VAR_1->dev.devt, 1);
 if (VAR_2) {
  FUNC_2(&VAR_1->dev, "Unable to add afu char device: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
