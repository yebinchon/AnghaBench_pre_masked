
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tg3_rx_prodring_set {struct ring_info* rx_jmb_buffers; TYPE_2__* rx_jmb; struct ring_info* rx_std_buffers; struct tg3_rx_buffer_desc* rx_std; } ;
struct tg3_rx_buffer_desc {int addr_lo; int addr_hi; } ;
struct tg3_napi {struct tg3* tp; } ;
struct tg3 {int rx_std_ring_mask; int rx_jmb_ring_mask; TYPE_1__* napi; } ;
struct ring_info {int * data; } ;
struct TYPE_4__ {struct tg3_rx_buffer_desc std; } ;
struct TYPE_3__ {struct tg3_rx_prodring_set prodring; } ;




 int FUNC_0 (struct ring_info*,int ) ;
 int FUNC_1 (struct ring_info*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct tg3_napi *VAR_1,
      struct tg3_rx_prodring_set *VAR_2,
      u32 VAR_3, int VAR_4,
      u32 VAR_5)
{
 struct tg3 *VAR_6 = VAR_1->tp;
 struct tg3_rx_buffer_desc *VAR_7, *VAR_8;
 struct ring_info *VAR_9, *VAR_10;
 struct tg3_rx_prodring_set *VAR_11 = &VAR_6->napi[0].prodring;
 int VAR_12;

 switch (VAR_3) {
 case 128:
  VAR_12 = VAR_5 & VAR_6->rx_std_ring_mask;
  VAR_8 = &VAR_2->rx_std[VAR_12];
  VAR_10 = &VAR_2->rx_std_buffers[VAR_12];
  VAR_7 = &VAR_11->rx_std[VAR_4];
  VAR_9 = &VAR_11->rx_std_buffers[VAR_4];
  break;

 case 129:
  VAR_12 = VAR_5 & VAR_6->rx_jmb_ring_mask;
  VAR_8 = &VAR_2->rx_jmb[VAR_12].std;
  VAR_10 = &VAR_2->rx_jmb_buffers[VAR_12];
  VAR_7 = &VAR_11->rx_jmb[VAR_4].std;
  VAR_9 = &VAR_11->rx_jmb_buffers[VAR_4];
  break;

 default:
  return;
 }

 VAR_10->data = VAR_9->data;
 FUNC_1(VAR_10, VAR_0,
      FUNC_0(VAR_9, VAR_0));
 VAR_8->addr_hi = VAR_7->addr_hi;
 VAR_8->addr_lo = VAR_7->addr_lo;




 FUNC_2();

 VAR_9->data = ((void*)0);
}
