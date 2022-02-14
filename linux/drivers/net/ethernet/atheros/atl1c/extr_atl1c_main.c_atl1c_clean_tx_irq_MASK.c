
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct pci_dev {int dummy; } ;
struct atl1c_tpd_ring {size_t count; int next_to_clean; struct atl1c_buffer* buffer_info; } ;
struct atl1c_buffer {TYPE_1__* skb; } ;
struct atl1c_adapter {int netdev; int hw; struct pci_dev* pdev; struct atl1c_tpd_ring* tpd_ring; } ;
typedef enum atl1c_trans_queue { ____Placeholder_atl1c_trans_queue } atl1c_trans_queue ;
struct TYPE_2__ {scalar_t__ len; } ;


 int FUNC_0 (int *,size_t,size_t*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct pci_dev*,struct atl1c_buffer*) ;
 int VAR_2 ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct atl1c_adapter *VAR_3,
    enum atl1c_trans_queue VAR_4)
{
 struct atl1c_tpd_ring *VAR_5 = &VAR_3->tpd_ring[VAR_4];
 struct atl1c_buffer *VAR_6;
 struct pci_dev *VAR_7 = VAR_3->pdev;
 u16 VAR_8 = FUNC_2(&VAR_5->next_to_clean);
 u16 VAR_9;
 u16 VAR_10;
 unsigned int VAR_11 = 0, VAR_12 = 0;

 VAR_10 = VAR_4 == VAR_2 ? VAR_1 : VAR_0;

 FUNC_0(&VAR_3->hw, VAR_10, &VAR_9);

 while (VAR_8 != VAR_9) {
  VAR_6 = &VAR_5->buffer_info[VAR_8];
  if (VAR_6->skb) {
   VAR_11 += VAR_6->skb->len;
   VAR_12++;
  }
  FUNC_1(VAR_7, VAR_6);
  if (++VAR_8 == VAR_5->count)
   VAR_8 = 0;
  FUNC_3(&VAR_5->next_to_clean, VAR_8);
 }

 FUNC_4(VAR_3->netdev, VAR_12, VAR_11);

 if (FUNC_6(VAR_3->netdev) &&
   FUNC_5(VAR_3->netdev)) {
  FUNC_7(VAR_3->netdev);
 }

 return 1;
}
