
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct e1000_tx_ring {int count; TYPE_1__* buffer_info; } ;
struct e1000_rx_ring {int count; TYPE_3__* buffer_info; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct pci_dev* pdev; struct e1000_rx_ring test_rx_ring; struct e1000_tx_ring test_tx_ring; struct e1000_hw hw; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__ rxbuf; int dma; } ;
struct TYPE_4__ {int length; int dma; int skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 unsigned long VAR_7 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct e1000_adapter *VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 struct e1000_tx_ring *VAR_10 = &VAR_8->test_tx_ring;
 struct e1000_rx_ring *VAR_11 = &VAR_8->test_rx_ring;
 struct pci_dev *VAR_12 = VAR_8->pdev;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 0;
 unsigned long VAR_20;

 FUNC_5(VAR_5, VAR_11->count - 1);






 if (VAR_11->count <= VAR_10->count)
  VAR_17 = ((VAR_10->count / 64) * 2) + 1;
 else
  VAR_17 = ((VAR_11->count / 64) * 2) + 1;

 VAR_15 = VAR_16 = 0;
 for (VAR_14 = 0; VAR_14 <= VAR_17; VAR_14++) {
  for (VAR_13 = 0; VAR_13 < 64; VAR_13++) {
   FUNC_4(VAR_10->buffer_info[VAR_13].skb,
        1024);
   FUNC_2(&VAR_12->dev,
         VAR_10->buffer_info[VAR_15].dma,
         VAR_10->buffer_info[VAR_15].length,
         VAR_1);
   if (FUNC_9(++VAR_15 == VAR_10->count))
    VAR_15 = 0;
  }
  FUNC_5(VAR_6, VAR_15);
  FUNC_0();
  FUNC_6(200);
  VAR_20 = VAR_7;
  VAR_18 = 0;
  do {
   FUNC_1(&VAR_12->dev,
      VAR_11->buffer_info[VAR_16].dma,
      VAR_2,
      VAR_0);

   VAR_19 = FUNC_3(
     VAR_11->buffer_info[VAR_16].rxbuf.data +
     VAR_4 + VAR_3,
     1024);
   if (!VAR_19)
    VAR_18++;
   if (FUNC_9(++VAR_16 == VAR_11->count))
    VAR_16 = 0;




  } while (VAR_18 < 64 && FUNC_7(VAR_20 + 20, VAR_7));

  if (VAR_18 != 64) {
   VAR_19 = 13;
   break;
  }
  if (FUNC_8(VAR_7, VAR_20 + 2)) {
   VAR_19 = 14;
   break;
  }
 }
 return VAR_19;
}
