
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rq_list_lock; } ;
struct TYPE_5__ {int done; } ;
typedef TYPE_1__ Sg_request ;
typedef TYPE_2__ Sg_fd ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(Sg_fd *VAR_0, Sg_request *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(&VAR_0->rq_list_lock, VAR_2);
 VAR_3 = VAR_1->done;
 FUNC_1(&VAR_0->rq_list_lock, VAR_2);
 return VAR_3;
}
