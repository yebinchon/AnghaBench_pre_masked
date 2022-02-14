
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_type {int * devices_kobj; int kobj; } ;
struct device {int kobj; } ;


 char* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,char*) ;

int FUNC_4(struct device *VAR_1, struct mdev_type *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->devices_kobj, &VAR_1->kobj, FUNC_0(VAR_1));
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(&VAR_1->kobj, &VAR_2->kobj, "mdev_type");
 if (VAR_3)
  goto type_link_failed;

 VAR_3 = FUNC_1(&VAR_1->kobj, VAR_0);
 if (VAR_3)
  goto create_files_failed;

 return VAR_3;

create_files_failed:
 FUNC_3(&VAR_1->kobj, "mdev_type");
type_link_failed:
 FUNC_3(VAR_2->devices_kobj, FUNC_0(VAR_1));
 return VAR_3;
}
