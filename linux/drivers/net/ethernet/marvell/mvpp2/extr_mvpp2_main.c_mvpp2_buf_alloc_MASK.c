
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvpp2_port {TYPE_2__* dev; } ;
struct mvpp2_bm_pool {int pkt_size; } ;
typedef int phys_addr_t ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (struct mvpp2_bm_pool*) ;
 int FUNC_4 (struct mvpp2_bm_pool*,void*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void *FUNC_7(struct mvpp2_port *VAR_1,
        struct mvpp2_bm_pool *VAR_2,
        dma_addr_t *VAR_3,
        phys_addr_t *VAR_4,
        gfp_t VAR_5)
{
 dma_addr_t VAR_6;
 void *VAR_7;

 VAR_7 = FUNC_3(VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_1->dev->dev.parent, VAR_7,
      FUNC_0(VAR_2->pkt_size),
      VAR_0);
 if (FUNC_5(FUNC_2(VAR_1->dev->dev.parent, VAR_6))) {
  FUNC_4(VAR_2, VAR_7);
  return ((void*)0);
 }
 *VAR_3 = VAR_6;
 *VAR_4 = FUNC_6(VAR_7);

 return VAR_7;
}
