
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct mlxsw_tx_info {int is_emad; } ;
struct TYPE_5__ {struct sk_buff* skb; } ;
struct TYPE_6__ {TYPE_1__ sdq; } ;
struct mlxsw_pci_queue_elem_info {char* elem; TYPE_2__ u; } ;
struct mlxsw_pci_queue {int lock; int producer_counter; } ;
struct mlxsw_pci {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_8__ {struct mlxsw_tx_info tx_info; } ;
struct TYPE_7__ {int nr_frags; int tx_flags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;
 struct mlxsw_pci_queue_elem_info* FUNC_1 (struct mlxsw_pci_queue*) ;
 struct mlxsw_pci_queue* FUNC_2 (struct mlxsw_pci*,struct mlxsw_tx_info const*) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct mlxsw_pci*,char*,int,int ,int ,int ) ;
 int FUNC_6 (struct mlxsw_pci*,char*,int,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int ) ;
 TYPE_4__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 TYPE_3__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(void *VAR_6, struct sk_buff *VAR_7,
      const struct mlxsw_tx_info *VAR_8)
{
 struct mlxsw_pci *VAR_9 = VAR_6;
 struct mlxsw_pci_queue *VAR_10;
 struct mlxsw_pci_queue_elem_info *VAR_11;
 char *VAR_12;
 int VAR_13;
 int VAR_14;

 if (FUNC_14(VAR_7)->nr_frags > VAR_2 - 1) {
  VAR_14 = FUNC_13(VAR_7);
  if (VAR_14)
   return VAR_14;
 }

 VAR_10 = FUNC_2(VAR_9, VAR_8);
 FUNC_15(&VAR_10->lock);
 VAR_11 = FUNC_1(VAR_10);
 if (!VAR_11) {

  VAR_14 = -VAR_1;
  goto unlock;
 }
 FUNC_9(VAR_7)->tx_info = *VAR_8;
 VAR_11->u.sdq.skb = VAR_7;

 VAR_12 = VAR_11->elem;
 FUNC_4(VAR_12, 1);
 FUNC_7(VAR_12, !!VAR_8->is_emad);
 FUNC_8(VAR_12, VAR_3);

 VAR_14 = FUNC_5(VAR_9, VAR_12, 0, VAR_7->data,
         FUNC_12(VAR_7), VAR_0);
 if (VAR_14)
  goto unlock;

 for (VAR_13 = 0; VAR_13 < FUNC_14(VAR_7)->nr_frags; VAR_13++) {
  const skb_frag_t *VAR_15 = &FUNC_14(VAR_7)->frags[VAR_13];

  VAR_14 = FUNC_5(VAR_9, VAR_12, VAR_13 + 1,
          FUNC_10(VAR_15),
          FUNC_11(VAR_15),
          VAR_0);
  if (VAR_14)
   goto unmap_frags;
 }

 if (FUNC_17(FUNC_14(VAR_7)->tx_flags & VAR_4))
  FUNC_14(VAR_7)->tx_flags |= VAR_5;


 for (VAR_13++; VAR_13 < VAR_2; VAR_13++)
  FUNC_3(VAR_12, VAR_13, 0);


 VAR_10->producer_counter++;
 FUNC_0(VAR_9, VAR_10);

 goto unlock;

unmap_frags:
 for (; VAR_13 >= 0; VAR_13--)
  FUNC_6(VAR_9, VAR_12, VAR_13, VAR_0);
unlock:
 FUNC_16(&VAR_10->lock);
 return VAR_14;
}
