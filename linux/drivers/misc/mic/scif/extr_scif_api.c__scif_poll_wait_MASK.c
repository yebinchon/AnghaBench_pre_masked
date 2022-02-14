
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct scif_endpt {int lock; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct file *VAR_0, wait_queue_head_t *VAR_1,
       poll_table *VAR_2, struct scif_endpt *VAR_3)
{







 FUNC_2(&VAR_3->lock);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(&VAR_3->lock);
}
