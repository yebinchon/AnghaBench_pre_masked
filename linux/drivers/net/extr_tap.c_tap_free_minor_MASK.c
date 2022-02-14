
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_dev {int minor; } ;
struct major_info {int minor_lock; int minor_idr; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct major_info* FUNC_6 (int ) ;

void FUNC_7(dev_t VAR_0, struct tap_dev *VAR_1)
{
 struct major_info *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_6(FUNC_0(VAR_0));
 if (!VAR_2) {
  goto unlock;
 }

 FUNC_4(&VAR_2->minor_lock);
 if (VAR_1->minor) {
  FUNC_1(&VAR_2->minor_idr, VAR_1->minor);
  VAR_1->minor = 0;
 }
 FUNC_5(&VAR_2->minor_lock);

unlock:
 FUNC_3();
}
