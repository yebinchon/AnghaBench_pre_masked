
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct kfifo {int dummy; } ;
struct ab_task {int result; int done; } ;
typedef int spinlock_t ;


 int FUNC_0 (struct ab_task*,struct kfifo*,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct ab_task *VAR_0, struct kfifo *VAR_1, spinlock_t *VAR_2,
       wait_queue_head_t *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(&VAR_0->done);
 if (VAR_4)
  return VAR_4;
 return VAR_0->result;
}
