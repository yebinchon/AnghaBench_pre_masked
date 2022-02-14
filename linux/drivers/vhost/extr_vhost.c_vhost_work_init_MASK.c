
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vhost_work_fn_t ;
struct vhost_work {int fn; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct vhost_work *VAR_1, vhost_work_fn_t VAR_2)
{
 FUNC_0(VAR_0, &VAR_1->flags);
 VAR_1->fn = VAR_2;
}
