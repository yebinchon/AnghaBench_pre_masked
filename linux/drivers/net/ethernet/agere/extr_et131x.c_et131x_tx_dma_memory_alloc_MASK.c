
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tx_ring {void* tx_status; int tx_status_pa; void* tx_desc_ring; int tx_desc_ring_pa; int tcb_ring; } ;
struct tx_desc {int dummy; } ;
struct tcb {int dummy; } ;
struct et131x_adapter {TYPE_1__* pdev; struct tx_ring tx_ring; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct et131x_adapter *VAR_5)
{
 int VAR_6 = 0;
 struct tx_ring *VAR_7 = &VAR_5->tx_ring;


 VAR_7->tcb_ring = FUNC_2(VAR_4, sizeof(struct tcb),
        VAR_2 | VAR_1);
 if (!VAR_7->tcb_ring)
  return -VAR_0;

 VAR_6 = (sizeof(struct tx_desc) * VAR_3);
 VAR_7->tx_desc_ring = FUNC_1(&VAR_5->pdev->dev,
         VAR_6,
         &VAR_7->tx_desc_ring_pa,
         VAR_2);
 if (!VAR_7->tx_desc_ring) {
  FUNC_0(&VAR_5->pdev->dev,
   "Cannot alloc memory for Tx Ring\n");
  return -VAR_0;
 }

 VAR_7->tx_status = FUNC_1(&VAR_5->pdev->dev,
          sizeof(u32),
          &VAR_7->tx_status_pa,
          VAR_2);
 if (!VAR_7->tx_status) {
  FUNC_0(&VAR_5->pdev->dev,
   "Cannot alloc memory for Tx status block\n");
  return -VAR_0;
 }
 return 0;
}
