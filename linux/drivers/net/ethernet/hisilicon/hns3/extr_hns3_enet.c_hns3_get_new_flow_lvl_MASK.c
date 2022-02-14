
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flow_level; } ;
struct hns3_enet_ring_group {int total_packets; int total_bytes; TYPE_2__ coal; TYPE_1__* ring; } ;
struct hns3_enet_tqp_vector {struct hns3_enet_ring_group rx_group; scalar_t__ last_jiffies; } ;
typedef enum hns3_flow_level_range { ____Placeholder_hns3_flow_level_range } hns3_flow_level_range ;
struct TYPE_3__ {struct hns3_enet_tqp_vector* tqp_vector; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct hns3_enet_ring_group *VAR_4)
{




 enum hns3_flow_level_range VAR_5;
 struct hns3_enet_tqp_vector *VAR_6;
 int VAR_7, VAR_8;
 u32 VAR_9;

 VAR_6 = VAR_4->ring->tqp_vector;
 VAR_9 =
  FUNC_1(VAR_3 - VAR_6->last_jiffies);
 if (!VAR_9)
  return 0;

 FUNC_0(VAR_4->total_packets, VAR_9);
 VAR_7 = VAR_4->total_packets;

 FUNC_0(VAR_4->total_bytes, VAR_9);
 VAR_8 = VAR_4->total_bytes;

 VAR_5 = VAR_4->coal.flow_level;







 switch (VAR_5) {
 case 130:
  if (VAR_8 > 10000)
   VAR_5 = 129;
  break;
 case 129:
  if (VAR_8 > 20000)
   VAR_5 = 131;
  else if (VAR_8 <= 10000)
   VAR_5 = 130;
  break;
 case 131:
 case 128:
 default:
  if (VAR_8 <= 20000)
   VAR_5 = 129;
  break;
 }

 if (VAR_7 > 40 &&
     &VAR_6->rx_group == VAR_4)
  VAR_5 = 128;

 VAR_4->total_bytes = 0;
 VAR_4->total_packets = 0;
 VAR_4->coal.flow_level = VAR_5;

 return 1;
}
