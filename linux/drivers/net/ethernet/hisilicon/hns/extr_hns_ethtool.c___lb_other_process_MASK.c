
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {unsigned int len; int* data; struct net_device* dev; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_6__ {unsigned int rx_bytes; int rx_frame_errors; int rx_packets; } ;
struct net_device {TYPE_3__ stats; int dev_addr; } ;
struct TYPE_5__ {struct net_device* dev; } ;
struct hns_nic_ring_data {int queue_index; TYPE_2__ napi; struct hnae_ring* ring; } ;
struct hns_nic_priv {TYPE_1__* ae_handle; int enet_ver; } ;
struct hnae_ring {int dummy; } ;
struct TYPE_4__ {scalar_t__ port_type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct hnae_ring*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int*,int,unsigned int) ;
 struct netdev_queue* FUNC_5 (struct net_device*,int ) ;
 struct hns_nic_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (char*,char*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_11(struct hns_nic_ring_data *VAR_2,
          struct sk_buff *VAR_3)
{
 struct net_device *VAR_4;
 struct hns_nic_priv *VAR_5;
 struct hnae_ring *VAR_6;
 struct netdev_queue *VAR_7;
 struct sk_buff *VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 u32 VAR_11;
 char VAR_12[33];

 if (!VAR_2) {
  VAR_4 = VAR_3->dev;
  VAR_5 = FUNC_6(VAR_4);

  VAR_9 = VAR_3->len;
  FUNC_4(VAR_3->data, 0xFF, VAR_9);
  if ((!FUNC_0(VAR_5->enet_ver)) &&
      (VAR_5->ae_handle->port_type == VAR_1)) {
   FUNC_3(VAR_3->data, VAR_4->dev_addr, 6);
   VAR_3->data[5] += 0x1f;
  }

  VAR_9 &= ~1ul;
  FUNC_4(&VAR_3->data[VAR_9 / 2], 0xAA, VAR_9 / 2 - 1);
  FUNC_4(&VAR_3->data[VAR_9 / 2 + 10], 0xBE,
         VAR_9 / 2 - 11);
  FUNC_4(&VAR_3->data[VAR_9 / 2 + 12], 0xAF,
         VAR_9 / 2 - 13);
  return;
 }

 VAR_6 = VAR_2->ring;
 VAR_4 = VAR_2->napi.dev;
 if (FUNC_2(VAR_6)) {
  VAR_7 = FUNC_5(VAR_4, VAR_2->queue_index);
  FUNC_7(VAR_7);
  return;
 }

 VAR_9 = VAR_3->len;
 VAR_9 &= ~1ul;

 VAR_8 = FUNC_9(VAR_3, VAR_0);
 FUNC_1(VAR_3);
 VAR_3 = VAR_8;

 VAR_10 = 0;
 if (*(VAR_3->data + 10) == 0xFF) {
  if ((*(VAR_3->data + VAR_9 / 2 + 10) == 0xBE) &&
      (*(VAR_3->data + VAR_9 / 2 + 12) == 0xAF))
   VAR_10 = 1;
 }

 if (VAR_10) {
  VAR_4->stats.rx_packets++;
  VAR_4->stats.rx_bytes += VAR_3->len;
 } else {
  VAR_4->stats.rx_frame_errors++;
  for (VAR_11 = 0; VAR_11 < VAR_3->len; VAR_11++) {
   FUNC_10(VAR_12 + VAR_11 % 16 * 2, 3,
     "%02x", *(VAR_3->data + VAR_11));
   if ((VAR_11 % 16 == 15) || (VAR_11 == VAR_3->len - 1))
    FUNC_8("%s\n", VAR_12);
  }
 }
 FUNC_1(VAR_3);
}
