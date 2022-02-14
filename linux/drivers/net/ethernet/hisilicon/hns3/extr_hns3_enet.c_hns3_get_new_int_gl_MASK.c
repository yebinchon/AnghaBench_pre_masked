
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hns3_enet_tqp_vector {int last_jiffies; } ;
struct TYPE_3__ {scalar_t__ int_gl; int flow_level; } ;
struct hns3_enet_ring_group {scalar_t__ total_packets; TYPE_1__ coal; TYPE_2__* ring; } ;
struct TYPE_4__ {struct hns3_enet_tqp_vector* tqp_vector; } ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hns3_enet_ring_group*) ;

__attribute__((used)) static bool FUNC_1(struct hns3_enet_ring_group *VAR_4)
{
 struct hns3_enet_tqp_vector *VAR_5;
 u16 VAR_6;

 if (!VAR_4->ring)
  return 0;

 VAR_5 = VAR_4->ring->tqp_vector;
 if (!VAR_5->last_jiffies)
  return 0;

 if (VAR_4->total_packets == 0) {
  VAR_4->coal.int_gl = VAR_2;
  VAR_4->coal.flow_level = 130;
  return 1;
 }

 if (!FUNC_0(VAR_4))
  return 0;

 VAR_6 = VAR_4->coal.int_gl;
 switch (VAR_4->coal.flow_level) {
 case 130:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 131:
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_6 = VAR_3;
  break;
 default:
  break;
 }

 if (VAR_6 != VAR_4->coal.int_gl) {
  VAR_4->coal.int_gl = VAR_6;
  return 1;
 }
 return 0;
}
