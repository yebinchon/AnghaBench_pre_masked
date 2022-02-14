
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hwbm_pool {int size; scalar_t__ buf_num; } ;
struct mvneta_bm_pool {int port_map; int id; int * virt_addr; int phys_addr; int type; struct hwbm_pool hwbm_pool; } ;
struct mvneta_bm {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (struct mvneta_bm*,struct mvneta_bm_pool*,int) ;
 int FUNC_3 (struct mvneta_bm*,int ) ;

void FUNC_4(struct mvneta_bm *VAR_1,
       struct mvneta_bm_pool *VAR_2, u8 VAR_3)
{
 struct hwbm_pool *VAR_4 = &VAR_2->hwbm_pool;
 VAR_2->port_map &= ~VAR_3;
 if (VAR_2->port_map)
  return;

 VAR_2->type = VAR_0;

 FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4->buf_num)
  FUNC_0(1, "cannot free all buffers in pool %d\n", VAR_2->id);

 if (VAR_2->virt_addr) {
  FUNC_1(&VAR_1->pdev->dev,
      sizeof(u32) * VAR_4->size,
      VAR_2->virt_addr, VAR_2->phys_addr);
  VAR_2->virt_addr = ((void*)0);
 }

 FUNC_3(VAR_1, VAR_2->id);
}
