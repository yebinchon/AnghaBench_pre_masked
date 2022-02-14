
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct pci_dev {int dev; } ;
struct mlxsw_tx_info {int local_port; int is_emad; } ;
struct TYPE_5__ {struct sk_buff* skb; } ;
struct TYPE_6__ {TYPE_1__ sdq; } ;
struct mlxsw_pci_queue_elem_info {char* elem; TYPE_2__ u; } ;
struct mlxsw_pci_queue {int lock; int consumer_counter; } ;
struct mlxsw_pci {int core; struct pci_dev* pdev; } ;
struct TYPE_8__ {struct mlxsw_tx_info tx_info; } ;
struct TYPE_7__ {int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*,int ) ;
 struct mlxsw_pci_queue_elem_info* FUNC_3 (struct mlxsw_pci_queue*) ;
 int FUNC_4 (struct mlxsw_pci*,char*,int,int ) ;
 TYPE_4__* FUNC_5 (struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct mlxsw_pci *VAR_3,
         struct mlxsw_pci_queue *VAR_4,
         u16 VAR_5,
         char *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_3->pdev;
 struct mlxsw_pci_queue_elem_info *VAR_8;
 struct mlxsw_tx_info VAR_9;
 char *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12;

 FUNC_7(&VAR_4->lock);
 VAR_8 = FUNC_3(VAR_4);
 VAR_9 = FUNC_5(VAR_8->u.sdq.skb)->tx_info;
 VAR_11 = VAR_8->u.sdq.skb;
 VAR_10 = VAR_8->elem;
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
  FUNC_4(VAR_3, VAR_10, VAR_12, VAR_0);

 if (FUNC_9(!VAR_9.is_emad &&
       FUNC_6(VAR_11)->tx_flags & VAR_2)) {
  FUNC_2(VAR_3->core, VAR_11,
        VAR_9.local_port);
  VAR_11 = ((void*)0);
 }

 if (VAR_11)
  FUNC_1(VAR_11);
 VAR_8->u.sdq.skb = ((void*)0);

 if (VAR_4->consumer_counter++ != VAR_5)
  FUNC_0(&VAR_7->dev, "Consumer counter does not match limit in SDQ\n");
 FUNC_8(&VAR_4->lock);
}
