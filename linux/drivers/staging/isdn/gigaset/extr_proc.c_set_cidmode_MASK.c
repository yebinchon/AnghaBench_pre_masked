
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cardstate {int waiting; int mutex; int waitqueue; int at_state; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct cardstate* FUNC_0 (struct device*) ;
 int FUNC_1 (struct cardstate*,int *,int ,int *,long,int *) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (char const*,char**,int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4, struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct cardstate *VAR_8 = FUNC_0(VAR_4);
 long int VAR_9;
 char *VAR_10;

 VAR_9 = FUNC_6(VAR_6, &VAR_10, 0);
 while (*VAR_10)
  if (!FUNC_3(*VAR_10++))
   return -VAR_0;
 if (VAR_9 < 0 || VAR_9 > 1)
  return -VAR_0;

 if (FUNC_4(&VAR_8->mutex))
  return -VAR_2;

 VAR_8->waiting = 1;
 if (!FUNC_1(VAR_8, &VAR_8->at_state, VAR_3,
          ((void*)0), VAR_9, ((void*)0))) {
  VAR_8->waiting = 0;
  FUNC_5(&VAR_8->mutex);
  return -VAR_1;
 }
 FUNC_2(VAR_8);

 FUNC_7(VAR_8->waitqueue, !VAR_8->waiting);

 FUNC_5(&VAR_8->mutex);

 return VAR_7;
}
