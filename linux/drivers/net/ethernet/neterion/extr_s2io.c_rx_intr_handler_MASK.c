
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct rx_curr_get_info {int block_index; size_t offset; } ;
struct ring_info {size_t rxd_mode; int block_count; TYPE_5__* nic; struct lro* lro0_n; scalar_t__ lro; TYPE_3__* rx_blocks; struct rx_curr_get_info rx_curr_get_info; scalar_t__ mtu; int pdev; TYPE_1__* dev; int rx_curr_put_info; } ;
struct lro {int vlan_tag; int parent; scalar_t__ in_use; } ;
struct RxD_t {scalar_t__ Host_Control; } ;
struct RxD3 {scalar_t__ Buffer2_ptr; scalar_t__ Buffer0_ptr; } ;
struct RxD1 {scalar_t__ Buffer0_ptr; } ;
typedef int put_info ;
typedef int dma_addr_t ;
struct TYPE_9__ {scalar_t__ napi; } ;
struct TYPE_10__ {TYPE_4__ config; } ;
struct TYPE_8__ {struct RxD_t* block_virt_addr; TYPE_2__* rxds; } ;
struct TYPE_7__ {struct RxD_t* virt_addr; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct RxD_t*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (struct lro*) ;
 int VAR_10 ;
 int FUNC_3 (struct rx_curr_get_info*,int *,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ring_info*,struct RxD_t*) ;
 size_t* VAR_11 ;
 int FUNC_9 (TYPE_5__*,struct lro*) ;

__attribute__((used)) static int FUNC_10(struct ring_info *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15;
 struct rx_curr_get_info VAR_16, VAR_17;
 struct RxD_t *VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20 = 0, VAR_21 = 0;
 int VAR_22;
 struct RxD1 *VAR_23;
 struct RxD3 *VAR_24;

 if (VAR_13 <= 0)
  return VAR_21;

 VAR_16 = VAR_12->rx_curr_get_info;
 VAR_14 = VAR_16.block_index;
 FUNC_3(&VAR_17, &VAR_12->rx_curr_put_info, sizeof(VAR_17));
 VAR_15 = VAR_17.block_index;
 VAR_18 = VAR_12->rx_blocks[VAR_14].rxds[VAR_16.offset].virt_addr;

 while (FUNC_1(VAR_18)) {




  if ((VAR_14 == VAR_15) &&
      (VAR_16.offset + 1) == VAR_17.offset) {
   FUNC_0(VAR_5, "%s: Ring Full\n",
      VAR_12->dev->name);
   break;
  }
  VAR_19 = (struct sk_buff *)((unsigned long)VAR_18->Host_Control);
  if (VAR_19 == ((void*)0)) {
   FUNC_0(VAR_1, "%s: NULL skb in Rx Intr\n",
      VAR_12->dev->name);
   return 0;
  }
  if (VAR_12->rxd_mode == VAR_8) {
   VAR_23 = (struct RxD1 *)VAR_18;
   FUNC_5(VAR_12->pdev, (dma_addr_t)
      VAR_23->Buffer0_ptr,
      VAR_12->mtu +
      VAR_3 +
      VAR_2 +
      VAR_4,
      VAR_7);
  } else if (VAR_12->rxd_mode == VAR_9) {
   VAR_24 = (struct RxD3 *)VAR_18;
   FUNC_4(VAR_12->pdev,
          (dma_addr_t)VAR_24->Buffer0_ptr,
          VAR_0,
          VAR_7);
   FUNC_5(VAR_12->pdev,
      (dma_addr_t)VAR_24->Buffer2_ptr,
      VAR_12->mtu + 4,
      VAR_7);
  }
  FUNC_6(VAR_19->data);
  FUNC_8(VAR_12, VAR_18);
  VAR_16.offset++;
  VAR_12->rx_curr_get_info.offset = VAR_16.offset;
  VAR_18 = VAR_12->rx_blocks[VAR_14].
   rxds[VAR_16.offset].virt_addr;
  if (VAR_16.offset == VAR_11[VAR_12->rxd_mode]) {
   VAR_16.offset = 0;
   VAR_12->rx_curr_get_info.offset = VAR_16.offset;
   VAR_14++;
   if (VAR_14 == VAR_12->block_count)
    VAR_14 = 0;
   VAR_12->rx_curr_get_info.block_index = VAR_14;
   VAR_18 = VAR_12->rx_blocks[VAR_14].block_virt_addr;
  }

  if (VAR_12->nic->config.napi) {
   VAR_13--;
   VAR_21++;
   if (!VAR_13)
    break;
  }
  VAR_20++;
  if ((VAR_10) && (VAR_20 > VAR_10))
   break;
 }
 if (VAR_12->lro) {

  for (VAR_22 = 0; VAR_22 < VAR_6; VAR_22++) {
   struct lro *VAR_25 = &VAR_12->lro0_n[VAR_22];
   if (VAR_25->in_use) {
    FUNC_9(VAR_12->nic, VAR_25);
    FUNC_7(VAR_25->parent, VAR_25->vlan_tag);
    FUNC_2(VAR_25);
   }
  }
 }
 return VAR_21;
}
