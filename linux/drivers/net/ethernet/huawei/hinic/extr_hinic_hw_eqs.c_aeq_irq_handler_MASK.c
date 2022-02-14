
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hw_event_cb {unsigned long hwe_state; int handle; int (* hwe_handler ) (int ,int ,int) ;} ;
struct hinic_eq {int q_len; int wrapped; int cons_idx; } ;
struct hinic_aeqs {struct hinic_hw_event_cb* hwe_cb; struct hinic_hwif* hwif; } ;
struct hinic_aeq_elem {int data; int desc; } ;
typedef enum hinic_aeq_type { ____Placeholder_hinic_aeq_type } hinic_aeq_type ;


 struct hinic_aeq_elem* FUNC_0 (struct hinic_eq*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hinic_aeqs* FUNC_2 (struct hinic_eq*) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(struct hinic_eq *VAR_7)
{
 struct hinic_aeqs *VAR_8 = FUNC_2(VAR_7);
 struct hinic_hwif *VAR_9 = VAR_8->hwif;
 struct pci_dev *VAR_10 = VAR_9->pdev;
 struct hinic_aeq_elem *VAR_11;
 struct hinic_hw_event_cb *VAR_12;
 enum hinic_aeq_type VAR_13;
 unsigned long VAR_14;
 u32 VAR_15;
 int VAR_16, VAR_17;

 for (VAR_16 = 0; VAR_16 < VAR_7->q_len; VAR_16++) {
  VAR_11 = FUNC_0(VAR_7);


  VAR_15 = FUNC_3(VAR_11->desc);


  if (FUNC_1(VAR_15, VAR_6) == VAR_7->wrapped)
   break;

  VAR_13 = FUNC_1(VAR_15, VAR_5);
  if (VAR_13 >= VAR_2) {
   FUNC_5(&VAR_10->dev, "Unknown AEQ Event %d\n", VAR_13);
   return;
  }

  if (!FUNC_1(VAR_15, VAR_4)) {
   VAR_12 = &VAR_8->hwe_cb[VAR_13];

   VAR_17 = FUNC_1(VAR_15, VAR_3);

   VAR_14 = FUNC_4(&VAR_12->hwe_state,
         VAR_0,
         VAR_0 |
         VAR_1);
   if ((VAR_14 == VAR_0) &&
       (VAR_12->hwe_handler))
    VAR_12->hwe_handler(VAR_12->handle,
          VAR_11->data, VAR_17);
   else
    FUNC_5(&VAR_10->dev, "Unhandled AEQ Event %d\n",
     VAR_13);

   VAR_12->hwe_state &= ~VAR_1;
  }

  VAR_7->cons_idx++;

  if (VAR_7->cons_idx == VAR_7->q_len) {
   VAR_7->cons_idx = 0;
   VAR_7->wrapped = !VAR_7->wrapped;
  }
 }
}
