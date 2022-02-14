
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_type {int * devices_kobj; } ;
struct device {int kobj; } ;


 char* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(struct device *VAR_1, struct mdev_type *VAR_2)
{
 FUNC_1(&VAR_1->kobj, VAR_0);
 FUNC_2(&VAR_1->kobj, "mdev_type");
 FUNC_2(VAR_2->devices_kobj, FUNC_0(VAR_1));
}
