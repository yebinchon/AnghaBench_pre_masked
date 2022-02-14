
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct rio_mport {TYPE_1__* ops; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* map_outb ) (struct rio_mport*,int ,int ,int ,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct rio_mport*,int ,int ,int ,int ,int *) ;

int FUNC_3(struct rio_mport *VAR_2, u16 VAR_3, u64 VAR_4,
   u32 VAR_5, u32 VAR_6, dma_addr_t *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;

 if (!VAR_2->ops->map_outb)
  return -VAR_0;

 FUNC_0(&VAR_1, VAR_9);
 VAR_8 = VAR_2->ops->map_outb(VAR_2, VAR_3, VAR_4, VAR_5,
  VAR_6, VAR_7);
 FUNC_1(&VAR_1, VAR_9);

 return VAR_8;
}
