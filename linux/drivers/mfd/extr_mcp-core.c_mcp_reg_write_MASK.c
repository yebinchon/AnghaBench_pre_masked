
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reg_write ) (struct mcp*,unsigned int,unsigned int) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct mcp*,unsigned int,unsigned int) ;

void FUNC_3(struct mcp *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 VAR_0->ops->reg_write(VAR_0, VAR_1, VAR_2);
 FUNC_1(&VAR_0->lock, VAR_3);
}
