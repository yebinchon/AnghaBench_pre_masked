
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct qtnf_hw_info {void* hw_version; int fw_version; void* hw_capab; int total_rx_chain; int total_tx_chain; int mac_bitmap; void* fw_ver; int max_scan_ssids; void* ql_proto_ver; int num_mac; } ;
struct qtnf_bus {struct qtnf_hw_info hw_info; } ;
struct qlink_tlv_hdr {int * val; int len; int type; } ;
struct qlink_resp_get_hw_info {scalar_t__ info; int hw_ver; int plat_id; int bld_tmstamp; int hw_capab; int total_rx_chain; int total_tx_chain; int ql_proto_ver; int fw_ver; int mac_bitmap; int num_mac; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*,char const*,char const*,unsigned long,...) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_5(struct qtnf_bus *VAR_1,
      const struct qlink_resp_get_hw_info *VAR_2,
      size_t VAR_3)
{
 struct qtnf_hw_info *VAR_4 = &VAR_1->hw_info;
 const struct qlink_tlv_hdr *VAR_5;
 const char *VAR_6 = ((void*)0);
 const char *VAR_7 = ((void*)0);
 const char *VAR_8 = ((void*)0);
 const char *VAR_9 = ((void*)0);
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 const char *VAR_12 = ((void*)0);
 const char *VAR_13 = ((void*)0);
 const char *VAR_14 = ((void*)0);
 u32 VAR_15 = 0;
 u16 VAR_16;
 u16 VAR_17;

 VAR_4->num_mac = VAR_2->num_mac;
 VAR_4->mac_bitmap = VAR_2->mac_bitmap;
 VAR_4->fw_ver = FUNC_1(VAR_2->fw_ver);
 VAR_4->ql_proto_ver = FUNC_0(VAR_2->ql_proto_ver);
 VAR_4->total_tx_chain = VAR_2->total_tx_chain;
 VAR_4->total_rx_chain = VAR_2->total_rx_chain;
 VAR_4->hw_capab = FUNC_1(VAR_2->hw_capab);

 VAR_10 = FUNC_1(VAR_2->bld_tmstamp);
 VAR_11 = FUNC_1(VAR_2->plat_id);
 VAR_15 = FUNC_1(VAR_2->hw_ver);

 VAR_5 = (const struct qlink_tlv_hdr *)VAR_2->info;

 while (VAR_3 >= sizeof(*VAR_5)) {
  VAR_16 = FUNC_0(VAR_5->type);
  VAR_17 = FUNC_0(VAR_5->len);

  if (VAR_17 + sizeof(*VAR_5) > VAR_3) {
   FUNC_3("malformed TLV 0x%.2X; LEN: %u\n",
    VAR_16, VAR_17);
   return -VAR_0;
  }

  switch (VAR_16) {
  case 134:
   VAR_6 = (const void *)VAR_5->val;
   break;
  case 133:
   VAR_7 = (const void *)VAR_5->val;
   break;
  case 132:
   VAR_8 = (const void *)VAR_5->val;
   break;
  case 135:
   VAR_9 = (const void *)VAR_5->val;
   break;
  case 130:
   VAR_12 = (const void *)VAR_5->val;
   break;
  case 131:
   VAR_13 = (const void *)VAR_5->val;
   break;
  case 128:
   VAR_14 = (const void *)VAR_5->val;
   break;
  case 129:
   VAR_4->max_scan_ssids = *VAR_5->val;
   break;
  default:
   break;
  }

  VAR_3 -= VAR_17 + sizeof(*VAR_5);
  VAR_5 = (struct qlink_tlv_hdr *)(VAR_5->val + VAR_17);
 }

 FUNC_2("fw_version=%d, MACs map %#x, chains Tx=%u Rx=%u, capab=0x%x\n",
  VAR_4->fw_ver, VAR_4->mac_bitmap,
  VAR_4->total_tx_chain, VAR_4->total_rx_chain,
  VAR_4->hw_capab);

 FUNC_2("\nBuild name:            %s" "\nBuild revision:        %s" "\nBuild type:            %s" "\nBuild label:           %s" "\nBuild timestamp:       %lu" "\nPlatform ID:           %lu" "\nHardware ID:           %s" "\nCalibration version:   %s" "\nU-Boot version:        %s" "\nHardware version:      0x%08x\n",
  VAR_6, VAR_7, VAR_8, VAR_9,
  (unsigned long)VAR_10,
  (unsigned long)VAR_11,
  VAR_12, VAR_13, VAR_14, VAR_15);

 FUNC_4(VAR_4->fw_version, VAR_9, sizeof(VAR_4->fw_version));
 VAR_4->hw_version = VAR_15;

 return 0;
}
