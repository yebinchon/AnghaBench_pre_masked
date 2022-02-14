
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct pci_dev {int dummy; } ;
struct atl1c_tpd_ring {size_t count; scalar_t__ next_to_use; int next_to_clean; int desc; struct atl1c_buffer* buffer_info; } ;
struct atl1c_tpd_desc {int dummy; } ;
struct atl1c_buffer {int dummy; } ;
struct atl1c_adapter {int netdev; struct pci_dev* pdev; struct atl1c_tpd_ring* tpd_ring; } ;
typedef enum atl1c_trans_queue { ____Placeholder_atl1c_trans_queue } atl1c_trans_queue ;


 int FUNC_0 (struct pci_dev*,struct atl1c_buffer*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct atl1c_adapter *VAR_0,
    enum atl1c_trans_queue VAR_1)
{
 struct atl1c_tpd_ring *VAR_2 = &VAR_0->tpd_ring[VAR_1];
 struct atl1c_buffer *VAR_3;
 struct pci_dev *VAR_4 = VAR_0->pdev;
 u16 VAR_5, VAR_6;

 VAR_6 = VAR_2->count;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_3 = &VAR_2->buffer_info[VAR_5];
  FUNC_0(VAR_4, VAR_3);
 }

 FUNC_3(VAR_0->netdev);


 FUNC_2(VAR_2->desc, 0, sizeof(struct atl1c_tpd_desc) *
  VAR_6);
 FUNC_1(&VAR_2->next_to_clean, 0);
 VAR_2->next_to_use = 0;
}
