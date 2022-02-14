
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {int status_lock; scalar_t__ status_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct siena_vf *VAR_1)
{
 FUNC_0(&VAR_1->status_lock);
 VAR_1->status_addr = 0;
 FUNC_1(&VAR_1->status_lock);

 return VAR_0;
}
