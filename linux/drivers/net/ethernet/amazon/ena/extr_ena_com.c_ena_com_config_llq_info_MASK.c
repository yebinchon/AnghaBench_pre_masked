
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_llq_configurations {int llq_header_location; int llq_stride_ctrl; int llq_ring_entry_size; int llq_ring_entry_size_value; int llq_num_decs_before_header; } ;
struct ena_eth_io_tx_desc {int dummy; } ;
struct ena_com_llq_info {scalar_t__ header_location_ctrl; int desc_stride_ctrl; int desc_list_entry_size_ctrl; int desc_list_entry_size; int descs_per_entry; int descs_num_before_header; int max_entries_in_tx_burst; } ;
struct ena_com_dev {struct ena_com_llq_info llq_info; } ;
struct ena_admin_feature_llq_desc {int header_location_ctrl_supported; int descriptors_stride_ctrl_supported; int entry_size_ctrl_supported; int desc_num_before_header_supported; int max_tx_burst_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ena_com_dev*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ena_com_llq_info*,int ,int) ;
 int FUNC_3 (char*,int,...) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ena_com_dev *VAR_11,
       struct ena_admin_feature_llq_desc *VAR_12,
       struct ena_llq_configurations *VAR_13)
{
 struct ena_com_llq_info *VAR_14 = &VAR_11->llq_info;
 u16 VAR_15;
 int VAR_16;

 FUNC_2(VAR_14, 0, sizeof(*VAR_14));

 VAR_15 = VAR_12->header_location_ctrl_supported;

 if (FUNC_1(VAR_15 & VAR_13->llq_header_location)) {
  VAR_14->header_location_ctrl =
   VAR_13->llq_header_location;
 } else {
  FUNC_3("Invalid header location control, supported: 0x%x\n",
         VAR_15);
  return -VAR_0;
 }

 if (FUNC_1(VAR_14->header_location_ctrl == VAR_1)) {
  VAR_15 = VAR_12->descriptors_stride_ctrl_supported;
  if (FUNC_1(VAR_15 & VAR_13->llq_stride_ctrl)) {
   VAR_14->desc_stride_ctrl = VAR_13->llq_stride_ctrl;
  } else {
   if (VAR_15 & VAR_9) {
    VAR_14->desc_stride_ctrl = VAR_9;
   } else if (VAR_15 & VAR_10) {
    VAR_14->desc_stride_ctrl = VAR_10;
   } else {
    FUNC_3("Invalid desc_stride_ctrl, supported: 0x%x\n",
           VAR_15);
    return -VAR_0;
   }

   FUNC_3("Default llq stride ctrl is not supported, performing fallback, default: 0x%x, supported: 0x%x, used: 0x%x\n",
          VAR_13->llq_stride_ctrl, VAR_15,
          VAR_14->desc_stride_ctrl);
  }
 } else {
  VAR_14->desc_stride_ctrl = 0;
 }

 VAR_15 = VAR_12->entry_size_ctrl_supported;
 if (FUNC_1(VAR_15 & VAR_13->llq_ring_entry_size)) {
  VAR_14->desc_list_entry_size_ctrl = VAR_13->llq_ring_entry_size;
  VAR_14->desc_list_entry_size = VAR_13->llq_ring_entry_size_value;
 } else {
  if (VAR_15 & VAR_2) {
   VAR_14->desc_list_entry_size_ctrl = VAR_2;
   VAR_14->desc_list_entry_size = 128;
  } else if (VAR_15 & VAR_3) {
   VAR_14->desc_list_entry_size_ctrl = VAR_3;
   VAR_14->desc_list_entry_size = 192;
  } else if (VAR_15 & VAR_4) {
   VAR_14->desc_list_entry_size_ctrl = VAR_4;
   VAR_14->desc_list_entry_size = 256;
  } else {
   FUNC_3("Invalid entry_size_ctrl, supported: 0x%x\n",
          VAR_15);
   return -VAR_0;
  }

  FUNC_3("Default llq ring entry size is not supported, performing fallback, default: 0x%x, supported: 0x%x, used: 0x%x\n",
         VAR_13->llq_ring_entry_size, VAR_15,
         VAR_14->desc_list_entry_size);
 }
 if (FUNC_4(VAR_14->desc_list_entry_size & 0x7)) {



  FUNC_3("illegal entry size %d\n",
         VAR_14->desc_list_entry_size);
  return -VAR_0;
 }

 if (VAR_14->desc_stride_ctrl == VAR_9)
  VAR_14->descs_per_entry = VAR_14->desc_list_entry_size /
   sizeof(struct ena_eth_io_tx_desc);
 else
  VAR_14->descs_per_entry = 1;

 VAR_15 = VAR_12->desc_num_before_header_supported;
 if (FUNC_1(VAR_15 & VAR_13->llq_num_decs_before_header)) {
  VAR_14->descs_num_before_header = VAR_13->llq_num_decs_before_header;
 } else {
  if (VAR_15 & VAR_6) {
   VAR_14->descs_num_before_header = VAR_6;
  } else if (VAR_15 & VAR_5) {
   VAR_14->descs_num_before_header = VAR_5;
  } else if (VAR_15 & VAR_7) {
   VAR_14->descs_num_before_header = VAR_7;
  } else if (VAR_15 & VAR_8) {
   VAR_14->descs_num_before_header = VAR_8;
  } else {
   FUNC_3("Invalid descs_num_before_header, supported: 0x%x\n",
          VAR_15);
   return -VAR_0;
  }

  FUNC_3("Default llq num descs before header is not supported, performing fallback, default: 0x%x, supported: 0x%x, used: 0x%x\n",
         VAR_13->llq_num_decs_before_header,
         VAR_15, VAR_14->descs_num_before_header);
 }

 VAR_14->max_entries_in_tx_burst =
  (u16)(VAR_12->max_tx_burst_size / VAR_13->llq_ring_entry_size_value);

 VAR_16 = FUNC_0(VAR_11);
 if (VAR_16)
  FUNC_3("Cannot set LLQ configuration: %d\n", VAR_16);

 return VAR_16;
}
