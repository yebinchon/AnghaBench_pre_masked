
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {size_t vol_id; int dev; int cdev; } ;
struct ubi_device {int ** volumes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ubi_device *VAR_0, struct ubi_volume *VAR_1)
{
 FUNC_1("free volume %d", VAR_1->vol_id);

 VAR_0->volumes[VAR_1->vol_id] = ((void*)0);
 FUNC_0(&VAR_1->cdev);
 FUNC_2(&VAR_1->dev);
}
