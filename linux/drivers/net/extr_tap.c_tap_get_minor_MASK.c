
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_dev {int minor; int dev; } ;
struct major_info {int minor_lock; int minor_idr; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,struct tap_dev*,int,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct major_info* FUNC_7 (int ) ;

int FUNC_8(dev_t VAR_5, struct tap_dev *VAR_6)
{
 int VAR_7 = -VAR_1;
 struct major_info *VAR_8;

 FUNC_3();
 VAR_8 = FUNC_7(FUNC_0(VAR_5));
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  goto unlock;
 }

 FUNC_5(&VAR_8->minor_lock);
 VAR_7 = FUNC_1(&VAR_8->minor_idr, VAR_6, 1, VAR_4, VAR_3);
 if (VAR_7 >= 0) {
  VAR_6->minor = VAR_7;
 } else if (VAR_7 == -VAR_2) {
  FUNC_2(VAR_6->dev, "Too many tap devices\n");
  VAR_7 = -VAR_0;
 }
 FUNC_6(&VAR_8->minor_lock);

unlock:
 FUNC_4();
 return VAR_7 < 0 ? VAR_7 : 0;
}
