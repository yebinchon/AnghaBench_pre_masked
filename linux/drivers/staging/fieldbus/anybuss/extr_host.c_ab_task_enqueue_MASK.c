
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
typedef int t ;
struct kfifo {int dummy; } ;
struct ab_task {int start_jiffies; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (struct ab_task*) ;
 int FUNC_1 (struct ab_task*) ;
 int VAR_1 ;
 int FUNC_2 (struct kfifo*,struct ab_task**,int,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct ab_task *VAR_2, struct kfifo *VAR_3, spinlock_t *VAR_4,
  wait_queue_head_t *VAR_5)
{
 int VAR_6;

 VAR_2->start_jiffies = VAR_1;
 FUNC_0(VAR_2);
 VAR_6 = FUNC_2(VAR_3, &VAR_2, sizeof(VAR_2), VAR_4);
 if (!VAR_6) {
  FUNC_1(VAR_2);
  return -VAR_0;
 }
 FUNC_3(VAR_5);
 return 0;
}
