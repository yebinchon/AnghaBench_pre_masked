
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {char* name; } ;
struct msix_entry {int vector; int entry; } ;
struct TYPE_6__ {scalar_t__ count; } ;
struct TYPE_5__ {scalar_t__ count; } ;
struct fm10k_q_vector {int * itr; TYPE_3__ rx; TYPE_2__ tx; int affinity_mask; int name; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {int num_q_vectors; struct fm10k_q_vector** q_vector; int * uc_addr; struct msix_entry* msix_entries; struct fm10k_hw hw; struct net_device* netdev; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,struct fm10k_q_vector*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct fm10k_intfc*,int ,struct net_device*,char*,int) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *,int ,int ,struct fm10k_q_vector*) ;
 int FUNC_6 (int ,int,char*,char*,int ) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct fm10k_intfc *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->netdev;
 struct fm10k_hw *VAR_8 = &VAR_6->hw;
 struct msix_entry *VAR_9;
 unsigned int VAR_10 = 0, VAR_11 = 0;
 int VAR_12, VAR_13;

 VAR_9 = &VAR_6->msix_entries[VAR_2];

 for (VAR_12 = 0; VAR_12 < VAR_6->num_q_vectors; VAR_12++) {
  struct fm10k_q_vector *VAR_14 = VAR_6->q_vector[VAR_12];


  if (VAR_14->tx.count && VAR_14->rx.count) {
   FUNC_6(VAR_14->name, sizeof(VAR_14->name),
     "%s-TxRx-%u", VAR_7->name, VAR_10++);
   VAR_11++;
  } else if (VAR_14->rx.count) {
   FUNC_6(VAR_14->name, sizeof(VAR_14->name),
     "%s-rx-%u", VAR_7->name, VAR_10++);
  } else if (VAR_14->tx.count) {
   FUNC_6(VAR_14->name, sizeof(VAR_14->name),
     "%s-tx-%u", VAR_7->name, VAR_11++);
  } else {

   continue;
  }


  VAR_14->itr = (VAR_8->mac.type == VAR_3) ?
    &VAR_6->uc_addr[FUNC_0(VAR_9->entry)] :
    &VAR_6->uc_addr[FUNC_1(VAR_9->entry)];


  VAR_13 = FUNC_5(VAR_9->vector, &VAR_4, 0,
      VAR_14->name, VAR_14);
  if (VAR_13) {
   FUNC_4(VAR_6, VAR_5, VAR_7,
      "request_irq failed for MSIX interrupt Error: %d\n",
      VAR_13);
   goto err_out;
  }


  FUNC_3(VAR_9->vector, &VAR_14->affinity_mask);


  FUNC_7(VAR_0, VAR_14->itr);

  VAR_9++;
 }

 return 0;

err_out:

 while (VAR_12) {
  struct fm10k_q_vector *VAR_15;

  VAR_9--;
  VAR_12--;
  VAR_15 = VAR_6->q_vector[VAR_12];

  if (!VAR_15->tx.count && !VAR_15->rx.count)
   continue;


  FUNC_3(VAR_9->vector, ((void*)0));


  FUNC_7(VAR_1, VAR_15->itr);

  FUNC_2(VAR_9->vector, VAR_15);
 }

 return VAR_13;
}
