
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urdev {int class; } ;
struct ccw_device {int dev; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct ccw_device*) ;
 int FUNC_1 (int *,struct urdev*) ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct urdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 struct urdev* FUNC_10 (struct ccw_device*) ;
 int FUNC_11 (struct urdev*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct ccw_device *VAR_6)
{
 struct urdev *VAR_7;
 int VAR_8;

 FUNC_0("ur_probe: cdev=%p\n", VAR_6);

 FUNC_4(&VAR_5);
 VAR_7 = FUNC_10(VAR_6);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto fail_unlock;
 }

 VAR_8 = FUNC_8(&VAR_6->dev);
 if (VAR_8) {
  VAR_8 = -VAR_2;
  goto fail_urdev_put;
 }
 VAR_6->handler = VAR_4;


 VAR_7->class = FUNC_3(VAR_7);
 if (VAR_7->class < 0) {
  VAR_8 = VAR_7->class;
  goto fail_remove_attr;
 }
 if ((VAR_7->class != VAR_0) && (VAR_7->class != VAR_1)) {
  VAR_8 = -VAR_3;
  goto fail_remove_attr;
 }
 FUNC_6(FUNC_2(VAR_6));
 FUNC_1(&VAR_6->dev, VAR_7);
 FUNC_7(FUNC_2(VAR_6));

 FUNC_5(&VAR_5);
 return 0;

fail_remove_attr:
 FUNC_9(&VAR_6->dev);
fail_urdev_put:
 FUNC_11(VAR_7);
fail_unlock:
 FUNC_5(&VAR_5);
 return VAR_8;
}
