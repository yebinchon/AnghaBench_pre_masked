
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_notification {int vi; int di; } ;
struct ubi_device {int vtbl_slots; int device_mutex; int * volumes; } ;
struct notifier_block {int (* notifier_call ) (struct notifier_block*,int,struct ubi_notification*) ;} ;


 int FUNC_0 (int *,int,struct ubi_notification*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct notifier_block*,int,struct ubi_notification*) ;
 int FUNC_4 (struct ubi_device*,int *) ;
 int FUNC_5 (struct ubi_device*,int ,int *) ;
 int VAR_0 ;

int FUNC_6(struct ubi_device *VAR_1, int VAR_2, struct notifier_block *VAR_3)
{
 struct ubi_notification VAR_4;
 int VAR_5, VAR_6 = 0;

 FUNC_4(VAR_1, &VAR_4.di);

 FUNC_1(&VAR_1->device_mutex);
 for (VAR_5 = 0; VAR_5 < VAR_1->vtbl_slots; VAR_5++) {





  if (!VAR_1->volumes[VAR_5])
   continue;

  FUNC_5(VAR_1, VAR_1->volumes[VAR_5], &VAR_4.vi);
  if (VAR_3)
   VAR_3->notifier_call(VAR_3, VAR_2, &VAR_4);
  else
   FUNC_0(&VAR_0, VAR_2,
           &VAR_4);
  VAR_6 += 1;
 }
 FUNC_2(&VAR_1->device_mutex);

 return VAR_6;
}
