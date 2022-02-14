
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wait_queue_entry_t ;
struct TYPE_4__ {int lock; } ;
struct eventfd_ctx {TYPE_1__ wqh; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct eventfd_ctx*,scalar_t__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;

int FUNC_6(struct eventfd_ctx *VAR_2, wait_queue_entry_t *VAR_3,
      __u64 *VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_2->wqh.lock, VAR_5);
 FUNC_1(VAR_2, VAR_4);
 FUNC_0(&VAR_2->wqh, VAR_3);
 if (*VAR_4 != 0 && FUNC_4(&VAR_2->wqh))
  FUNC_5(&VAR_2->wqh, VAR_1);
 FUNC_3(&VAR_2->wqh.lock, VAR_5);

 return *VAR_4 != 0 ? 0 : -VAR_0;
}
