
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int groups; int devt; struct device* parent; int release; } ;
struct pwm_export {TYPE_1__ child; int lock; struct pwm_device* pwm; } ;
struct pwm_device {int hwpwm; int flags; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,char**) ;
 struct pwm_export* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_7, struct pwm_device *VAR_8)
{
 struct pwm_export *VAR_9;
 char *VAR_10[2];
 int VAR_11;

 if (FUNC_10(VAR_4, &VAR_8->flags))
  return -VAR_0;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  FUNC_1(VAR_4, &VAR_8->flags);
  return -VAR_1;
 }

 VAR_9->pwm = VAR_8;
 FUNC_8(&VAR_9->lock);

 VAR_9->child.release = VAR_5;
 VAR_9->child.parent = VAR_7;
 VAR_9->child.devt = FUNC_0(0, 0);
 VAR_9->child.groups = VAR_6;
 FUNC_2(&VAR_9->child, "pwm%u", VAR_8->hwpwm);

 VAR_11 = FUNC_3(&VAR_9->child);
 if (VAR_11) {
  FUNC_1(VAR_4, &VAR_8->flags);
  FUNC_9(&VAR_9->child);
  VAR_9 = ((void*)0);
  return VAR_11;
 }
 VAR_10[0] = FUNC_4(VAR_2, "EXPORT=pwm%u", VAR_8->hwpwm);
 VAR_10[1] = ((void*)0);
 FUNC_6(&VAR_7->kobj, VAR_3, VAR_10);
 FUNC_5(VAR_10[0]);

 return 0;
}
