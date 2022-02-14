
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rio_mport {TYPE_2__* outb_msg; TYPE_1__* ops; } ;
struct TYPE_4__ {int * res; int * mcback; } ;
struct TYPE_3__ {int (* close_outb_mbox ) (struct rio_mport*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rio_mport*,int) ;

int FUNC_3(struct rio_mport *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_1->ops->close_outb_mbox || !VAR_1->outb_msg[VAR_2].res)
  return -VAR_0;

 VAR_1->ops->close_outb_mbox(VAR_1, VAR_2);
 VAR_1->outb_msg[VAR_2].mcback = ((void*)0);

 VAR_3 = FUNC_1(VAR_1->outb_msg[VAR_2].res);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_1->outb_msg[VAR_2].res);
 VAR_1->outb_msg[VAR_2].res = ((void*)0);

 return 0;
}
