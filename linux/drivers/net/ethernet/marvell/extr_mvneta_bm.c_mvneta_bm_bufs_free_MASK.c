
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int buf_num; } ;
struct mvneta_bm_pool {int port_map; TYPE_2__ hwbm_pool; int buf_size; } ;
struct mvneta_bm {TYPE_1__* pdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (struct mvneta_bm*,int ) ;
 int FUNC_3 (struct mvneta_bm*,int ) ;
 scalar_t__ FUNC_4 (struct mvneta_bm*,struct mvneta_bm_pool*) ;
 int * FUNC_5 (scalar_t__) ;

void FUNC_6(struct mvneta_bm *VAR_2, struct mvneta_bm_pool *VAR_3,
    u8 VAR_4)
{
 int VAR_5;

 VAR_3->port_map &= ~VAR_4;
 if (VAR_3->port_map)
  return;

 FUNC_3(VAR_2, VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_3->hwbm_pool.buf_num; VAR_5++) {
  dma_addr_t VAR_6;
  u32 *VAR_7;


  VAR_6 = FUNC_4(VAR_2, VAR_3);




  if (VAR_6 == 0)
   continue;

  VAR_7 = FUNC_5(VAR_6);
  if (!VAR_7)
   break;

  FUNC_0(&VAR_2->pdev->dev, VAR_6,
     VAR_3->buf_size, VAR_0);
  FUNC_1(&VAR_3->hwbm_pool, VAR_7);
 }

 FUNC_2(VAR_2, VAR_1);


 VAR_3->hwbm_pool.buf_num -= VAR_5;
}
