
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct pci_dev {int dev; } ;
struct msix_entry {int vector; int entry; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_eq_work {int work; } ;
struct hinic_eq {int type; int q_id; scalar_t__ num_pages; int num_elem_in_pg; struct msix_entry msix_entry; struct hinic_hwif* hwif; int ceq_tasklet; struct hinic_eq_work aeq_work; int elem_size; scalar_t__ wrapped; scalar_t__ cons_idx; void* page_size; void* q_len; } ;
typedef enum hinic_eq_type { ____Placeholder_hinic_eq_type } hinic_eq_type ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_eq*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct hinic_eq*) ;
 int FUNC_2 (struct hinic_eq*,void*) ;
 scalar_t__ FUNC_3 (struct hinic_eq*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,int ) ;
 int VAR_11 ;
 int FUNC_5 (struct hinic_eq*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *,char*) ;
 int VAR_14 ;
 int FUNC_7 (struct hinic_eq*) ;
 int FUNC_8 (struct hinic_eq*) ;
 int FUNC_9 (struct hinic_hwif*,int ,int ) ;
 int FUNC_10 (struct hinic_hwif*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,char*,struct hinic_eq*) ;
 int FUNC_12 (struct hinic_eq*) ;
 int FUNC_13 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct hinic_eq *VAR_15, struct hinic_hwif *VAR_16,
     enum hinic_eq_type VAR_17, int VAR_18, u32 VAR_19, u32 VAR_20,
     struct msix_entry VAR_21)
{
 struct pci_dev *VAR_22 = VAR_16->pdev;
 int VAR_23;

 VAR_15->hwif = VAR_16;
 VAR_15->type = VAR_17;
 VAR_15->q_id = VAR_18;
 VAR_15->q_len = VAR_19;
 VAR_15->page_size = VAR_20;


 FUNC_9(VAR_15->hwif, FUNC_0(VAR_15), 0);
 FUNC_9(VAR_15->hwif, FUNC_1(VAR_15), 0);

 VAR_15->cons_idx = 0;
 VAR_15->wrapped = 0;

 if (VAR_17 == VAR_2) {
  VAR_15->elem_size = VAR_3;
 } else if (VAR_17 == VAR_4) {
  VAR_15->elem_size = VAR_5;
 } else {
  FUNC_6(&VAR_22->dev, "Invalid EQ type\n");
  return -VAR_0;
 }

 VAR_15->num_pages = FUNC_3(VAR_15, VAR_20);
 VAR_15->num_elem_in_pg = FUNC_2(VAR_15, VAR_20);

 VAR_15->msix_entry = VAR_21;

 if (VAR_15->num_elem_in_pg & (VAR_15->num_elem_in_pg - 1)) {
  FUNC_6(&VAR_22->dev, "num elements in eq page != power of 2\n");
  return -VAR_0;
 }

 if (VAR_15->num_pages > VAR_1) {
  FUNC_6(&VAR_22->dev, "too many pages for eq\n");
  return -VAR_0;
 }

 FUNC_12(VAR_15);
 FUNC_7(VAR_15);

 VAR_23 = FUNC_5(VAR_15);
 if (VAR_23) {
  FUNC_6(&VAR_22->dev, "Failed to allocate pages for eq\n");
  return VAR_23;
 }

 if (VAR_17 == VAR_2) {
  struct hinic_eq_work *VAR_24 = &VAR_15->aeq_work;

  FUNC_4(&VAR_24->work, VAR_14);
 } else if (VAR_17 == VAR_4) {
  FUNC_13(&VAR_15->ceq_tasklet, VAR_13,
        (unsigned long)VAR_15);
 }


 FUNC_10(VAR_15->hwif, VAR_15->msix_entry.entry,
       VAR_9,
       VAR_6,
       VAR_8,
       VAR_7,
       VAR_10);

 if (VAR_17 == VAR_2)
  VAR_23 = FUNC_11(VAR_21.vector, VAR_11, 0,
      "hinic_aeq", VAR_15);
 else if (VAR_17 == VAR_4)
  VAR_23 = FUNC_11(VAR_21.vector, VAR_12, 0,
      "hinic_ceq", VAR_15);

 if (VAR_23) {
  FUNC_6(&VAR_22->dev, "Failed to request irq for the EQ\n");
  goto err_req_irq;
 }

 return 0;

err_req_irq:
 FUNC_8(VAR_15);
 return VAR_23;
}
