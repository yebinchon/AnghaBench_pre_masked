
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfifo {int dummy; } ;
struct device {int dummy; } ;
struct ab_task {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,size_t,int ) ;
 int FUNC_1 (struct kfifo*,void*,size_t) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct kfifo *VAR_3)
{
 void *VAR_4;
 size_t VAR_5 = 64 * sizeof(struct ab_task *);

 VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_1);
 if (!VAR_4)
  return -VAR_0;
 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
