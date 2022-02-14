
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb {TYPE_1__* cm_ops; } ;
struct TYPE_2__ {int (* suspend ) (struct tb*) ;} ;


 int FUNC_0 (struct tb*) ;

int FUNC_1(struct tb *VAR_0)
{
 return VAR_0->cm_ops->suspend ? VAR_0->cm_ops->suspend(VAR_0) : 0;
}
