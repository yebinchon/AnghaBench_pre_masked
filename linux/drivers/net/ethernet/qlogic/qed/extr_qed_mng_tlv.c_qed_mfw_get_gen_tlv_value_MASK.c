
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qed_tlv_parsed_buf {int* data; int* p_val; } ;
struct TYPE_2__ {int lso_supported; int ipv4_csum_offload; int b_set; } ;
struct qed_mfw_tlv_generic {int** mac; int rx_frames; int rx_bytes; int tx_frames; int tx_bytes; int tx_bytes_set; int tx_frames_set; int rx_bytes_set; int rx_frames_set; int * mac_set; TYPE_1__ flags; } ;
struct qed_drv_tlv_hdr {int tlv_type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct qed_drv_tlv_hdr *VAR_3,
     struct qed_mfw_tlv_generic *VAR_4,
     struct qed_tlv_parsed_buf *VAR_5)
{
 switch (VAR_3->tlv_type) {
 case 133:
  if (VAR_4->flags.b_set) {
   FUNC_0(VAR_5->data, 0, sizeof(u8) * VAR_2);
   VAR_5->data[0] = VAR_4->flags.ipv4_csum_offload ?
       1 : 0;
   VAR_5->data[0] |= (VAR_4->flags.lso_supported ?
        1 : 0) << 1;
   VAR_5->p_val = VAR_5->data;
   return VAR_1;
  }
  break;

 case 132:
 case 135:
 case 134:
  {
   int VAR_6 = VAR_3->tlv_type - 132;

   if (VAR_4->mac_set[VAR_6]) {
    VAR_5->p_val = VAR_4->mac[VAR_6];
    return VAR_0;
   }
   break;
  }

 case 130:
  if (VAR_4->rx_frames_set) {
   VAR_5->p_val = &VAR_4->rx_frames;
   return sizeof(VAR_4->rx_frames);
  }
  break;
 case 131:
  if (VAR_4->rx_bytes_set) {
   VAR_5->p_val = &VAR_4->rx_bytes;
   return sizeof(VAR_4->rx_bytes);
  }
  break;
 case 128:
  if (VAR_4->tx_frames_set) {
   VAR_5->p_val = &VAR_4->tx_frames;
   return sizeof(VAR_4->tx_frames);
  }
  break;
 case 129:
  if (VAR_4->tx_bytes_set) {
   VAR_5->p_val = &VAR_4->tx_bytes;
   return sizeof(VAR_4->tx_bytes);
  }
  break;
 default:
  break;
 }

 return -1;
}
