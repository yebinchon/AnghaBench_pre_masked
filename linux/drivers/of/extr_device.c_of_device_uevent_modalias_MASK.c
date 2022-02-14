
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int buflen; int * buf; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*) ;
 int FUNC_1 (struct device*,int *,int) ;

int FUNC_2(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 int VAR_4;

 if ((!VAR_2) || (!VAR_2->of_node))
  return -VAR_0;


 if (FUNC_0(VAR_3, "MODALIAS="))
  return -VAR_1;

 VAR_4 = FUNC_1(VAR_2, &VAR_3->buf[VAR_3->buflen-1],
        sizeof(VAR_3->buf) - VAR_3->buflen);
 if (VAR_4 >= (sizeof(VAR_3->buf) - VAR_3->buflen))
  return -VAR_1;
 VAR_3->buflen += VAR_4;

 return 0;
}
