
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int mac_id; } ;
struct TYPE_10__ {int macaddr; TYPE_3__ s_mac_id; } ;
struct get_list_macaddr {TYPE_4__ mac_addr_id; int mac_addr_size; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_resp_get_mac_list* va; } ;
struct TYPE_7__ {int macaddr; } ;
struct TYPE_8__ {TYPE_1__ mac_addr_id; } ;
struct TYPE_12__ {int domain; } ;
struct be_cmd_resp_get_mac_list {int perm_override; int true_mac_count; int pseudo_mac_count; struct get_list_macaddr* macaddr_list; TYPE_2__ macid_macaddr; int iface_id; int mac_id; int mac_type; TYPE_6__ hdr; } ;
struct be_cmd_req_get_mac_list {int perm_override; int true_mac_count; int pseudo_mac_count; struct get_list_macaddr* macaddr_list; TYPE_2__ macid_macaddr; int iface_id; int mac_id; int mac_type; TYPE_6__ hdr; } ;
struct be_adapter {TYPE_5__* pdev; int mcc_lock; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 struct be_cmd_resp_get_mac_list* FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (int *,int,struct be_cmd_resp_get_mac_list*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct be_dma_mem*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct be_mcc_wrb* FUNC_13 (struct be_adapter*) ;

int FUNC_14(struct be_adapter *VAR_7, u8 *VAR_8,
        bool *VAR_9, u32 *VAR_10, u32 VAR_11,
        u8 VAR_12)
{
 struct be_mcc_wrb *VAR_13;
 struct be_cmd_req_get_mac_list *VAR_14;
 int VAR_15;
 int VAR_16;
 struct be_dma_mem VAR_17;
 int VAR_18;

 FUNC_10(&VAR_17, 0, sizeof(struct be_dma_mem));
 VAR_17.size = sizeof(struct be_cmd_resp_get_mac_list);
 VAR_17.va = FUNC_5(&VAR_7->pdev->dev,
       VAR_17.size,
       &VAR_17.dma,
       VAR_4);

 if (!VAR_17.va) {
  FUNC_4(&VAR_7->pdev->dev,
   "Memory allocation failure during GET_MAC_LIST\n");
  return -VAR_2;
 }

 FUNC_11(&VAR_7->mcc_lock);

 VAR_13 = FUNC_13(VAR_7);
 if (!VAR_13) {
  VAR_15 = -VAR_1;
  goto out;
 }

 VAR_14 = VAR_17.va;

 FUNC_1(&VAR_14->hdr, VAR_0,
          VAR_6,
          VAR_17.size, VAR_13, &VAR_17);
 VAR_14->hdr.domain = VAR_12;
 VAR_14->mac_type = VAR_5;
 if (*VAR_9) {
  VAR_14->mac_id = FUNC_3(*VAR_10);
  VAR_14->iface_id = FUNC_2(VAR_11);
  VAR_14->perm_override = 0;
 } else {
  VAR_14->perm_override = 1;
 }

 VAR_15 = FUNC_0(VAR_7);
 if (!VAR_15) {
  struct be_cmd_resp_get_mac_list *VAR_19 =
      VAR_17.va;

  if (*VAR_9) {
   FUNC_9(VAR_8, VAR_19->macid_macaddr.mac_addr_id.macaddr,
          VAR_3);
   goto out;
  }

  VAR_16 = VAR_19->true_mac_count + VAR_19->pseudo_mac_count;





  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
   struct get_list_macaddr *VAR_20;
   u16 VAR_21;
   u32 VAR_22;

   VAR_20 = &VAR_19->macaddr_list[VAR_18];
   VAR_21 = FUNC_7(VAR_20->mac_addr_size);



   if (VAR_21 == sizeof(u32)) {
    *VAR_9 = 1;
    VAR_22 = VAR_20->mac_addr_id.s_mac_id.mac_id;
    *VAR_10 = FUNC_8(VAR_22);
    goto out;
   }
  }

  *VAR_9 = 0;
  FUNC_9(VAR_8, VAR_19->macaddr_list[0].mac_addr_id.macaddr,
         VAR_3);
 }

out:
 FUNC_12(&VAR_7->mcc_lock);
 FUNC_6(&VAR_7->pdev->dev, VAR_17.size,
     VAR_17.va, VAR_17.dma);
 return VAR_15;
}
