
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hns_nic_ring_data {scalar_t__ queue_index; struct hnae_ring* ring; } ;
struct hnae_ring {scalar_t__ coal_param; scalar_t__ coal_rx_rate; TYPE_1__* q; } ;
struct hnae_handle {scalar_t__ coal_param; scalar_t__ coal_ring_idx; void* coal_last_jiffies; TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_coalesce_frames ) (struct hnae_handle*,int,scalar_t__) ;int (* set_coalesce_usecs ) (struct hnae_handle*,scalar_t__) ;} ;
struct TYPE_4__ {struct hnae_handle* handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct hnae_handle*,scalar_t__) ;
 int FUNC_2 (struct hnae_handle*,int,scalar_t__) ;
 scalar_t__ FUNC_3 (void*,void*) ;

__attribute__((used)) static void FUNC_4(struct hns_nic_ring_data *VAR_7)
{
 struct hnae_ring *VAR_8 = VAR_7->ring;
 struct hnae_handle *VAR_9 = VAR_8->q->handle;
 u32 VAR_10, VAR_11 = VAR_8->coal_param;

 if (VAR_8->coal_rx_rate < VAR_3)
  VAR_10 = VAR_1;
 else if (VAR_8->coal_rx_rate < VAR_4)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_0;

 if (VAR_10 == VAR_11 &&
     VAR_10 == VAR_9->coal_param)
  return;

 VAR_10 = FUNC_0(VAR_10, VAR_11);
 VAR_8->coal_param = VAR_10;
 if (VAR_10 == VAR_9->coal_param) {
  VAR_9->coal_last_jiffies = VAR_6;
  VAR_9->coal_ring_idx = VAR_7->queue_index;
 } else if (VAR_10 > VAR_9->coal_param ||
     VAR_9->coal_ring_idx == VAR_7->queue_index ||
     FUNC_3(VAR_6, VAR_9->coal_last_jiffies + (VAR_5 >> 4))) {
  VAR_9->dev->ops->set_coalesce_usecs(VAR_9,
     VAR_10);
  VAR_9->dev->ops->set_coalesce_frames(VAR_9,
     1, VAR_10);
  VAR_9->coal_param = VAR_10;
  VAR_9->coal_ring_idx = VAR_7->queue_index;
  VAR_9->coal_last_jiffies = VAR_6;
 }
}
