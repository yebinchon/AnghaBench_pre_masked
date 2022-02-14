
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtproc_info {int endpoints_lock; int endpoints; } ;
struct rpmsg_endpoint {int refcount; int cb_lock; int * cb; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct virtproc_info *VAR_1, struct rpmsg_endpoint *VAR_2)
{

 FUNC_2(&VAR_1->endpoints_lock);
 FUNC_0(&VAR_1->endpoints, VAR_2->addr);
 FUNC_3(&VAR_1->endpoints_lock);


 FUNC_2(&VAR_2->cb_lock);
 VAR_2->cb = ((void*)0);
 FUNC_3(&VAR_2->cb_lock);

 FUNC_1(&VAR_2->refcount, VAR_0);
}
