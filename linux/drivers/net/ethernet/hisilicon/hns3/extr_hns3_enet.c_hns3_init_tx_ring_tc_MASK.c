
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hns3_nic_priv {TYPE_2__* ring_data; TYPE_3__* ae_handle; } ;
struct hnae3_tc_info {int tqp_count; int tqp_offset; int tc; int enable; } ;
struct hnae3_queue {int dummy; } ;
struct hnae3_knic_private_info {struct hnae3_tc_info* tc_info; } ;
struct TYPE_6__ {struct hnae3_knic_private_info kinfo; } ;
struct TYPE_5__ {TYPE_1__* ring; } ;
struct TYPE_4__ {struct hnae3_queue* tqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hnae3_queue*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hns3_nic_priv *VAR_2)
{
 struct hnae3_knic_private_info *VAR_3 = &VAR_2->ae_handle->kinfo;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct hnae3_tc_info *VAR_5 = &VAR_3->tc_info[VAR_4];
  int VAR_6;

  if (!VAR_5->enable)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_5->tqp_count; VAR_6++) {
   struct hnae3_queue *VAR_7;

   VAR_7 = VAR_2->ring_data[VAR_5->tqp_offset + VAR_6].ring->tqp;
   FUNC_0(VAR_7, VAR_1,
           VAR_5->tc);
  }
 }
}
