
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rio_mport {TYPE_1__* ops; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* map_inb ) (struct rio_mport*,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct rio_mport*,int ,int ,int ,int ) ;

int FUNC_3(struct rio_mport *VAR_1, dma_addr_t VAR_2,
   u64 VAR_3, u32 VAR_4, u32 VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 if (!VAR_1->ops->map_inb)
  return -1;
 FUNC_0(&VAR_0, VAR_7);
 VAR_6 = VAR_1->ops->map_inb(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_0, VAR_7);
 return VAR_6;
}
