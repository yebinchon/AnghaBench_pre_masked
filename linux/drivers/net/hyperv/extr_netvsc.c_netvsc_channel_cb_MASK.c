
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_ring_buffer_info {scalar_t__ priv_read_index; } ;
struct vmbus_channel {struct hv_ring_buffer_info inbound; } ;
struct netvsc_channel {int napi; struct vmbus_channel* channel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hv_ring_buffer_info*) ;
 scalar_t__ FUNC_2 (struct hv_ring_buffer_info*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(void *VAR_0)
{
 struct netvsc_channel *VAR_1 = VAR_0;
 struct vmbus_channel *VAR_2 = VAR_1->channel;
 struct hv_ring_buffer_info *VAR_3 = &VAR_2->inbound;


 FUNC_4(FUNC_2(VAR_3) + VAR_3->priv_read_index);

 if (FUNC_3(&VAR_1->napi)) {

  FUNC_1(VAR_3);

  FUNC_0(&VAR_1->napi);
 }
}
