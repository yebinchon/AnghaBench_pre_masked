
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct hns3_nic_priv {TYPE_2__* ring_data; struct hnae3_handle* ae_handle; } ;
struct TYPE_6__ {int num_tqps; void* num_rx_desc; void* num_tx_desc; } ;
struct hnae3_handle {TYPE_3__ kinfo; } ;
struct TYPE_5__ {TYPE_1__* ring; } ;
struct TYPE_4__ {void* desc_num; } ;



__attribute__((used)) static void FUNC_0(struct hns3_nic_priv *VAR_0,
     u32 VAR_1, u32 VAR_2)
{
 struct hnae3_handle *VAR_3 = VAR_0->ae_handle;
 int VAR_4;

 VAR_3->kinfo.num_tx_desc = VAR_1;
 VAR_3->kinfo.num_rx_desc = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_3->kinfo.num_tqps; VAR_4++) {
  VAR_0->ring_data[VAR_4].ring->desc_num = VAR_1;
  VAR_0->ring_data[VAR_4 + VAR_3->kinfo.num_tqps].ring->desc_num =
   VAR_2;
 }
}
