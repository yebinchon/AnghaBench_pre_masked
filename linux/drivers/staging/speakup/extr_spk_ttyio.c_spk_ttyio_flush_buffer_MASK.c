
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* flush_buffer ) (TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_1(&VAR_1);
 if (FUNC_0(VAR_0)) {
  FUNC_2(&VAR_1);
  return;
 }

 if (VAR_0->ops->flush_buffer)
  VAR_0->ops->flush_buffer(VAR_0);

 FUNC_2(&VAR_1);
}
