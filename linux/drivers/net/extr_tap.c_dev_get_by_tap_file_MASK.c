
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_dev {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct major_info {int minor_lock; int minor_idr; } ;


 int FUNC_0 (struct net_device*) ;
 struct tap_dev* FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct major_info* FUNC_6 (int) ;

__attribute__((used)) static struct tap_dev *FUNC_7(int VAR_0, int VAR_1)
{
 struct net_device *VAR_2 = ((void*)0);
 struct tap_dev *VAR_3;
 struct major_info *VAR_4;

 FUNC_2();
 VAR_4 = FUNC_6(VAR_0);
 if (!VAR_4) {
  VAR_3 = ((void*)0);
  goto unlock;
 }

 FUNC_4(&VAR_4->minor_lock);
 VAR_3 = FUNC_1(&VAR_4->minor_idr, VAR_1);
 if (VAR_3) {
  VAR_2 = VAR_3->dev;
  FUNC_0(VAR_2);
 }
 FUNC_5(&VAR_4->minor_lock);

unlock:
 FUNC_3();
 return VAR_3;
}
