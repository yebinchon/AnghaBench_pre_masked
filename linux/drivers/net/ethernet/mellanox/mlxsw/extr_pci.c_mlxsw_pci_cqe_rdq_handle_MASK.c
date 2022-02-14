
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_6__ {int sys_port; int lag_id; } ;
struct mlxsw_rx_info {int is_lag; int trap_id; TYPE_3__ u; int lag_port_index; } ;
struct TYPE_4__ {struct sk_buff* skb; } ;
struct TYPE_5__ {TYPE_1__ sdq; } ;
struct mlxsw_pci_queue_elem_info {char* elem; TYPE_2__ u; } ;
struct mlxsw_pci_queue {int producer_counter; int elem_size; int consumer_counter; } ;
struct mlxsw_pci {int core; struct pci_dev* pdev; } ;
typedef enum mlxsw_pci_cqe_v { ____Placeholder_mlxsw_pci_cqe_v } mlxsw_pci_cqe_v ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,struct sk_buff*,struct mlxsw_rx_info*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;
 struct mlxsw_pci_queue_elem_info* FUNC_11 (struct mlxsw_pci_queue*) ;
 int FUNC_12 (struct mlxsw_pci*,struct mlxsw_pci_queue_elem_info*) ;
 int FUNC_13 (struct mlxsw_pci*,char*,int ,int ) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct mlxsw_pci *VAR_2,
         struct mlxsw_pci_queue *VAR_3,
         u16 VAR_4,
         enum mlxsw_pci_cqe_v VAR_5, char *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_2->pdev;
 struct mlxsw_pci_queue_elem_info *VAR_8;
 char *VAR_9;
 struct sk_buff *VAR_10;
 struct mlxsw_rx_info VAR_11;
 u16 VAR_12;
 int VAR_13;

 VAR_8 = FUNC_11(VAR_3);
 VAR_10 = VAR_8->u.sdq.skb;
 if (!VAR_10)
  return;
 VAR_9 = VAR_8->elem;
 FUNC_13(VAR_2, VAR_9, 0, VAR_0);

 if (VAR_3->consumer_counter++ != VAR_4)
  FUNC_0(&VAR_7->dev, "Consumer counter does not match limit in RDQ\n");

 if (FUNC_5(VAR_5, VAR_6)) {
  VAR_11.is_lag = 1;
  VAR_11.u.lag_id = FUNC_6(VAR_5, VAR_6);
  VAR_11.lag_port_index =
   FUNC_7(VAR_5, VAR_6);
 } else {
  VAR_11.is_lag = 0;
  VAR_11.u.sys_port = FUNC_8(VAR_6);
 }

 VAR_11.trap_id = FUNC_9(VAR_6);

 VAR_12 = FUNC_3(VAR_6);
 if (FUNC_4(VAR_5, VAR_6))
  VAR_12 -= VAR_1;
 FUNC_14(VAR_10, VAR_12);
 FUNC_2(VAR_2->core, VAR_10, &VAR_11);

 FUNC_1(VAR_9, 0, VAR_3->elem_size);
 VAR_13 = FUNC_12(VAR_2, VAR_8);
 if (VAR_13)
  FUNC_0(&VAR_7->dev, "Failed to alloc skb for RDQ\n");

 VAR_3->producer_counter++;
 FUNC_10(VAR_2, VAR_3);
 return;
}
