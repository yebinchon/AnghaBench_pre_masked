
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb {TYPE_1__* cm_ops; } ;
struct TYPE_2__ {int (* complete ) (struct tb*) ;} ;


 int FUNC_0 (struct tb*) ;

void FUNC_1(struct tb *VAR_0)
{
 if (VAR_0->cm_ops->complete)
  VAR_0->cm_ops->complete(VAR_0);
}
