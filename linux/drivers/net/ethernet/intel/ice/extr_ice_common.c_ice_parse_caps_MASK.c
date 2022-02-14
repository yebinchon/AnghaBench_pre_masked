
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ice_hw_common_caps {int sr_iov_1_1; int dcb; scalar_t__ max_mtu; scalar_t__ msix_vector_first_id; scalar_t__ num_msix_vectors; scalar_t__ txq_first_id; scalar_t__ num_txq; scalar_t__ rxq_first_id; scalar_t__ num_rxq; scalar_t__ rss_table_entry_width; scalar_t__ rss_table_size; scalar_t__ maxtc; scalar_t__ active_tc_bitmap; scalar_t__ valid_functions; } ;
struct ice_hw_func_caps {int guar_num_vsi; scalar_t__ vf_base_id; scalar_t__ num_allocd_vfs; struct ice_hw_common_caps common_cap; } ;
struct ice_hw_dev_caps {scalar_t__ num_vsi_allocd_to_host; scalar_t__ num_vfs_exposed; struct ice_hw_common_caps common_cap; } ;
struct ice_hw {struct ice_hw_func_caps func_caps; struct ice_hw_dev_caps dev_caps; } ;
struct ice_aqc_list_caps_elem {int cap; int number; int phys_id; int logical_id; } ;
typedef enum ice_adminq_opc { ____Placeholder_ice_adminq_opc } ice_adminq_opc ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ice_hw*,int ,char*,...) ;
 int FUNC_1 (struct ice_hw*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ice_hw *VAR_4, void *VAR_5, u32 VAR_6,
        enum ice_adminq_opc VAR_7)
{
 struct ice_aqc_list_caps_elem *VAR_8;
 struct ice_hw_func_caps *VAR_9 = ((void*)0);
 struct ice_hw_dev_caps *VAR_10 = ((void*)0);
 struct ice_hw_common_caps *VAR_11;
 char const *VAR_12;
 u32 VAR_13;

 if (!VAR_5)
  return;

 VAR_8 = (struct ice_aqc_list_caps_elem *)VAR_5;

 if (VAR_7 == VAR_2) {
  VAR_10 = &VAR_4->dev_caps;
  VAR_11 = &VAR_10->common_cap;
  VAR_12 = "dev cap";
 } else if (VAR_7 == VAR_3) {
  VAR_9 = &VAR_4->func_caps;
  VAR_11 = &VAR_9->common_cap;
  VAR_12 = "func cap";
 } else {
  FUNC_0(VAR_4, VAR_0, "wrong opcode\n");
  return;
 }

 for (VAR_13 = 0; VAR_11 && VAR_13 < VAR_6; VAR_13++, VAR_8++) {
  u32 VAR_14 = FUNC_3(VAR_8->logical_id);
  u32 VAR_15 = FUNC_3(VAR_8->phys_id);
  u32 VAR_16 = FUNC_3(VAR_8->number);
  u16 VAR_17 = FUNC_2(VAR_8->cap);

  switch (VAR_17) {
  case 130:
   VAR_11->valid_functions = VAR_16;
   FUNC_0(VAR_4, VAR_0,
      "%s: valid_functions (bitmap) = %d\n", VAR_12,
      VAR_11->valid_functions);
   break;
  case 132:
   VAR_11->sr_iov_1_1 = (VAR_16 == 1);
   FUNC_0(VAR_4, VAR_0,
      "%s: sr_iov_1_1 = %d\n", VAR_12,
      VAR_11->sr_iov_1_1);
   break;
  case 129:
   if (VAR_10) {
    VAR_10->num_vfs_exposed = VAR_16;
    FUNC_0(VAR_4, VAR_0,
       "%s: num_vfs_exposed = %d\n", VAR_12,
       VAR_10->num_vfs_exposed);
   } else if (VAR_9) {
    VAR_9->num_allocd_vfs = VAR_16;
    VAR_9->vf_base_id = VAR_14;
    FUNC_0(VAR_4, VAR_0,
       "%s: num_allocd_vfs = %d\n", VAR_12,
       VAR_9->num_allocd_vfs);
    FUNC_0(VAR_4, VAR_0,
       "%s: vf_base_id = %d\n", VAR_12,
       VAR_9->vf_base_id);
   }
   break;
  case 128:
   if (VAR_10) {
    VAR_10->num_vsi_allocd_to_host = VAR_16;
    FUNC_0(VAR_4, VAR_0,
       "%s: num_vsi_allocd_to_host = %d\n",
       VAR_12,
       VAR_10->num_vsi_allocd_to_host);
   } else if (VAR_9) {
    VAR_9->guar_num_vsi =
     FUNC_1(VAR_4, VAR_1);
    FUNC_0(VAR_4, VAR_0,
       "%s: guar_num_vsi (fw) = %d\n",
       VAR_12, VAR_16);
    FUNC_0(VAR_4, VAR_0,
       "%s: guar_num_vsi = %d\n",
       VAR_12, VAR_9->guar_num_vsi);
   }
   break;
  case 137:
   VAR_11->dcb = (VAR_16 == 1);
   VAR_11->active_tc_bitmap = VAR_14;
   VAR_11->maxtc = VAR_15;
   FUNC_0(VAR_4, VAR_0,
      "%s: dcb = %d\n", VAR_12, VAR_11->dcb);
   FUNC_0(VAR_4, VAR_0,
      "%s: active_tc_bitmap = %d\n", VAR_12,
      VAR_11->active_tc_bitmap);
   FUNC_0(VAR_4, VAR_0,
      "%s: maxtc = %d\n", VAR_12, VAR_11->maxtc);
   break;
  case 134:
   VAR_11->rss_table_size = VAR_16;
   VAR_11->rss_table_entry_width = VAR_14;
   FUNC_0(VAR_4, VAR_0,
      "%s: rss_table_size = %d\n", VAR_12,
      VAR_11->rss_table_size);
   FUNC_0(VAR_4, VAR_0,
      "%s: rss_table_entry_width = %d\n", VAR_12,
      VAR_11->rss_table_entry_width);
   break;
  case 133:
   VAR_11->num_rxq = VAR_16;
   VAR_11->rxq_first_id = VAR_15;
   FUNC_0(VAR_4, VAR_0,
      "%s: num_rxq = %d\n", VAR_12,
      VAR_11->num_rxq);
   FUNC_0(VAR_4, VAR_0,
      "%s: rxq_first_id = %d\n", VAR_12,
      VAR_11->rxq_first_id);
   break;
  case 131:
   VAR_11->num_txq = VAR_16;
   VAR_11->txq_first_id = VAR_15;
   FUNC_0(VAR_4, VAR_0,
      "%s: num_txq = %d\n", VAR_12,
      VAR_11->num_txq);
   FUNC_0(VAR_4, VAR_0,
      "%s: txq_first_id = %d\n", VAR_12,
      VAR_11->txq_first_id);
   break;
  case 135:
   VAR_11->num_msix_vectors = VAR_16;
   VAR_11->msix_vector_first_id = VAR_15;
   FUNC_0(VAR_4, VAR_0,
      "%s: num_msix_vectors = %d\n", VAR_12,
      VAR_11->num_msix_vectors);
   FUNC_0(VAR_4, VAR_0,
      "%s: msix_vector_first_id = %d\n", VAR_12,
      VAR_11->msix_vector_first_id);
   break;
  case 136:
   VAR_11->max_mtu = VAR_16;
   FUNC_0(VAR_4, VAR_0, "%s: max_mtu = %d\n",
      VAR_12, VAR_11->max_mtu);
   break;
  default:
   FUNC_0(VAR_4, VAR_0,
      "%s: unknown capability[%d]: 0x%x\n", VAR_12,
      VAR_13, VAR_17);
   break;
  }
 }
}
