
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct e1000_ring {int count; struct e1000_buffer* buffer_info; } ;
struct e1000_hw {int dummy; } ;
struct e1000_buffer {int skb; int dma; int length; } ;
struct e1000_adapter {struct e1000_hw hw; struct pci_dev* pdev; struct e1000_ring test_rx_ring; struct e1000_ring test_tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 unsigned long VAR_2 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct e1000_adapter *VAR_3)
{
 struct e1000_ring *VAR_4 = &VAR_3->test_tx_ring;
 struct e1000_ring *VAR_5 = &VAR_3->test_rx_ring;
 struct pci_dev *VAR_6 = VAR_3->pdev;
 struct e1000_hw *VAR_7 = &VAR_3->hw;
 struct e1000_buffer *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 unsigned long VAR_16;

 FUNC_7(FUNC_0(0), VAR_5->count - 1);






 if (VAR_5->count <= VAR_4->count)
  VAR_13 = ((VAR_4->count / 64) * 2) + 1;
 else
  VAR_13 = ((VAR_5->count / 64) * 2) + 1;

 VAR_11 = 0;
 VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 <= VAR_13; VAR_10++) {

  for (VAR_9 = 0; VAR_9 < 64; VAR_9++) {
   VAR_8 = &VAR_4->buffer_info[VAR_11];

   FUNC_5(VAR_8->skb, 1024);
   FUNC_3(&VAR_6->dev,
         VAR_8->dma,
         VAR_8->length,
         VAR_1);
   VAR_11++;
   if (VAR_11 == VAR_4->count)
    VAR_11 = 0;
  }
  FUNC_7(FUNC_1(0), VAR_11);
  FUNC_6();
  FUNC_8(200);
  VAR_16 = VAR_2;
  VAR_14 = 0;

  do {
   VAR_8 = &VAR_5->buffer_info[VAR_12];

   FUNC_2(&VAR_6->dev,
      VAR_8->dma, 2048,
      VAR_0);

   VAR_15 = FUNC_4(VAR_8->skb,
          1024);
   if (!VAR_15)
    VAR_14++;
   VAR_12++;
   if (VAR_12 == VAR_5->count)
    VAR_12 = 0;




  } while ((VAR_14 < 64) && !FUNC_9(VAR_2, VAR_16 + 20));
  if (VAR_14 != 64) {
   VAR_15 = 13;
   break;
  }
  if (FUNC_9(VAR_2, VAR_16 + 20)) {
   VAR_15 = 14;
   break;
  }
 }
 return VAR_15;
}
