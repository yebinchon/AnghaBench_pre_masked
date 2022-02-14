
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct recv_comp_data {int tid; int status; } ;
struct nvsp_message_header {int msg_type; } ;
struct netvsc_device {scalar_t__ recv_completion_cnt; int destroy; int wait_drain; } ;
struct multi_recv_comp {scalar_t__ first; scalar_t__ next; struct recv_comp_data* slots; } ;
struct netvsc_channel {int channel; struct multi_recv_comp mrc; } ;
struct TYPE_2__ {int rx_comp_busy; } ;
struct net_device_context {TYPE_1__ eth_stats; } ;
struct net_device {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device_context* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct recv_comp_msg*,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
     struct netvsc_device *VAR_3,
     struct netvsc_channel *VAR_4)
{
 struct multi_recv_comp *VAR_5 = &VAR_4->mrc;
 struct recv_comp_msg {
  struct nvsp_message_header hdr;
  u32 status;
 } VAR_6;
 struct recv_comp_msg VAR_7 = {
  .hdr.msg_type = VAR_0,
 };
 int VAR_8;

 while (VAR_5->first != VAR_5->next) {
  const struct recv_comp_data *VAR_9
   = VAR_5->slots + VAR_5->first;

  VAR_7.status = VAR_9->status;
  VAR_8 = FUNC_2(VAR_4->channel, &VAR_7, sizeof(VAR_7),
           VAR_9->tid, VAR_1, 0);
  if (FUNC_1(VAR_8)) {
   struct net_device_context *VAR_10 = FUNC_0(VAR_2);

   ++VAR_10->eth_stats.rx_comp_busy;
   return VAR_8;
  }

  if (++VAR_5->first == VAR_3->recv_completion_cnt)
   VAR_5->first = 0;
 }


 if (FUNC_1(VAR_3->destroy))
  FUNC_3(&VAR_3->wait_drain);

 return 0;
}
