
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3_tx_ring_info {int dummy; } ;
struct tg3_napi {int tx_ring; int tx_desc_mapping; int tx_buffers; } ;
struct tg3 {int txq_cnt; TYPE_1__* pdev; struct tg3_napi* napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*) ;

__attribute__((used)) static int FUNC_4(struct tg3 *VAR_5)
{
 int VAR_6;
 struct tg3_napi *VAR_7 = &VAR_5->napi[0];




 if (FUNC_2(VAR_5, VAR_0))
  VAR_7++;

 for (VAR_6 = 0; VAR_6 < VAR_5->txq_cnt; VAR_6++, VAR_7++) {
  VAR_7->tx_buffers = FUNC_1(VAR_4,
         sizeof(struct tg3_tx_ring_info),
         VAR_2);
  if (!VAR_7->tx_buffers)
   goto err_out;

  VAR_7->tx_ring = FUNC_0(&VAR_5->pdev->dev,
          VAR_3,
          &VAR_7->tx_desc_mapping,
          VAR_2);
  if (!VAR_7->tx_ring)
   goto err_out;
 }

 return 0;

err_out:
 FUNC_3(VAR_5);
 return -VAR_1;
}
