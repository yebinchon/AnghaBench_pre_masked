
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_work {int anchor; int * func; } ;
struct ubi_device {int wl_scheduled; int wl_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubi_device*,struct ubi_work*) ;
 struct ubi_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

int FUNC_4(struct ubi_device *VAR_3)
{
 struct ubi_work *VAR_4;

 FUNC_2(&VAR_3->wl_lock);
 if (VAR_3->wl_scheduled) {
  FUNC_3(&VAR_3->wl_lock);
  return 0;
 }
 VAR_3->wl_scheduled = 1;
 FUNC_3(&VAR_3->wl_lock);

 VAR_4 = FUNC_1(sizeof(struct ubi_work), VAR_1);
 if (!VAR_4) {
  FUNC_2(&VAR_3->wl_lock);
  VAR_3->wl_scheduled = 0;
  FUNC_3(&VAR_3->wl_lock);
  return -VAR_0;
 }

 VAR_4->anchor = 1;
 VAR_4->func = &VAR_2;
 FUNC_0(VAR_3, VAR_4);
 return 0;
}
