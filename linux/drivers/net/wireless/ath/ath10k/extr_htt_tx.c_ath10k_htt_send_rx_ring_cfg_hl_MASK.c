
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct htt_rx_ring_setup_ring32 {void* flags; void* rx_ring_bufsize; void* rx_ring_len; } ;
struct TYPE_5__ {int num_rings; } ;
struct TYPE_6__ {TYPE_2__ hdr; struct htt_rx_ring_setup_ring32* rings; } ;
struct TYPE_4__ {int msg_type; } ;
struct htt_cmd {TYPE_3__ rx_setup_32; TYPE_1__ hdr; } ;
struct ath10k_htt {int eid; struct ath10k* ar; } ;
struct ath10k {int htc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (int *,int ,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct htt_rx_ring_setup_ring32*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct ath10k_htt *VAR_8)
{
 struct ath10k *VAR_9 = VAR_8->ar;
 struct sk_buff *VAR_10;
 struct htt_cmd *VAR_11;
 struct htt_rx_ring_setup_ring32 *VAR_12;
 const int VAR_13 = 1;
 u16 VAR_14;
 int VAR_15;
 int VAR_16;





 FUNC_0(!FUNC_1(VAR_3, 4));
 FUNC_0((VAR_3 & VAR_2) != 0);

 VAR_15 = sizeof(VAR_11->hdr) + sizeof(VAR_11->rx_setup_32.hdr)
     + (sizeof(*VAR_12) * VAR_13);
 VAR_10 = FUNC_3(VAR_9, VAR_15);
 if (!VAR_10)
  return -VAR_0;

 FUNC_7(VAR_10, VAR_15);

 VAR_11 = (struct htt_cmd *)VAR_10->data;
 VAR_12 = &VAR_11->rx_setup_32.rings[0];

 VAR_11->hdr.msg_type = VAR_1;
 VAR_11->rx_setup_32.hdr.num_rings = 1;

 VAR_14 = 0;
 VAR_14 |= VAR_4;
 VAR_14 |= VAR_6;
 VAR_14 |= VAR_5;

 FUNC_6(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->rx_ring_len = FUNC_2(VAR_7);
 VAR_12->rx_ring_bufsize = FUNC_2(VAR_3);
 VAR_12->flags = FUNC_2(VAR_14);

 VAR_16 = FUNC_4(&VAR_8->ar->htc, VAR_8->eid, VAR_10);
 if (VAR_16) {
  FUNC_5(VAR_10);
  return VAR_16;
 }

 return 0;
}
