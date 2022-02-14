
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rio_mport {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* unmap_outb ) (struct rio_mport*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct rio_mport*,int ,int ) ;

void FUNC_3(struct rio_mport *VAR_1, u16 VAR_2, u64 VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_1->ops->unmap_outb)
  return;

 FUNC_0(&VAR_0, VAR_4);
 VAR_1->ops->unmap_outb(VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0, VAR_4);
}
