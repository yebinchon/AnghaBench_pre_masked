
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb_switch {int dev; TYPE_2__* tb; TYPE_1__* nvm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int authenticating; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tb_switch*) ;
 int FUNC_4 (struct tb_switch*) ;
 int FUNC_5 (struct tb_switch*) ;
 int FUNC_6 (struct tb_switch*) ;
 int FUNC_7 (struct tb_switch*) ;
 int FUNC_8 (struct tb_switch*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (struct tb_switch*) ;
 struct tb_switch* FUNC_14 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_15(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct tb_switch *VAR_6 = FUNC_14(VAR_2);
 bool VAR_7;
 int VAR_8;

 FUNC_9(&VAR_6->dev);

 if (!FUNC_1(&VAR_6->tb->lock)) {
  VAR_8 = FUNC_12();
  goto exit_rpm;
 }


 if (!VAR_6->nvm) {
  VAR_8 = -VAR_0;
  goto exit_unlock;
 }

 VAR_8 = FUNC_0(VAR_4, &VAR_7);
 if (VAR_8)
  goto exit_unlock;


 FUNC_7(VAR_6);

 if (VAR_7) {
  if (!VAR_6->nvm->buf) {
   VAR_8 = -VAR_1;
   goto exit_unlock;
  }

  VAR_8 = FUNC_8(VAR_6);
  if (VAR_8)
   goto exit_unlock;

  VAR_6->nvm->authenticating = 1;

  if (!FUNC_13(VAR_6)) {




   FUNC_6(VAR_6);
   VAR_8 = FUNC_5(VAR_6);
   if (VAR_8)
    FUNC_3(VAR_6);
  } else {
   VAR_8 = FUNC_4(VAR_6);
  }
 }

exit_unlock:
 FUNC_2(&VAR_6->tb->lock);
exit_rpm:
 FUNC_10(&VAR_6->dev);
 FUNC_11(&VAR_6->dev);

 if (VAR_8)
  return VAR_8;
 return VAR_5;
}
