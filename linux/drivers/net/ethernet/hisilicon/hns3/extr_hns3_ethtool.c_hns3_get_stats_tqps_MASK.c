
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
struct hns3_nic_priv {TYPE_1__* ring_data; } ;
struct hns3_enet_ring {int dummy; } ;
struct hnae3_knic_private_info {int num_tqps; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; scalar_t__ priv; } ;
struct TYPE_6__ {int stats_offset; } ;
struct TYPE_5__ {int stats_offset; } ;
struct TYPE_4__ {struct hns3_enet_ring* ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static u64 *FUNC_0(struct hnae3_handle *VAR_4, u64 *VAR_5)
{
 struct hns3_nic_priv *VAR_6 = (struct hns3_nic_priv *)VAR_4->priv;
 struct hnae3_knic_private_info *VAR_7 = &VAR_4->kinfo;
 struct hns3_enet_ring *VAR_8;
 u8 *VAR_9;
 int VAR_10, VAR_11;


 for (VAR_10 = 0; VAR_10 < VAR_7->num_tqps; VAR_10++) {
  VAR_8 = VAR_6->ring_data[VAR_10].ring;
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   VAR_9 = (u8 *)VAR_8 + VAR_3[VAR_11].stats_offset;
   *VAR_5++ = *(u64 *)VAR_9;
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_7->num_tqps; VAR_10++) {
  VAR_8 = VAR_6->ring_data[VAR_10 + VAR_7->num_tqps].ring;
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   VAR_9 = (u8 *)VAR_8 + VAR_2[VAR_11].stats_offset;
   *VAR_5++ = *(u64 *)VAR_9;
  }
 }

 return VAR_5;
}
