
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct eventfd_ctx {scalar_t__ count; TYPE_1__ wqh; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__u64 FUNC_4(struct eventfd_ctx *VAR_2, __u64 VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_2->wqh.lock, VAR_4);
 if (VAR_1 - VAR_2->count < VAR_3)
  VAR_3 = VAR_1 - VAR_2->count;
 VAR_2->count += VAR_3;
 if (FUNC_2(&VAR_2->wqh))
  FUNC_3(&VAR_2->wqh, VAR_0);
 FUNC_1(&VAR_2->wqh.lock, VAR_4);

 return VAR_3;
}
