
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rndis_indicate_status {int status_buf_offset; int status; } ;
struct TYPE_2__ {struct rndis_indicate_status indicate_status; } ;
struct rndis_message {TYPE_1__ msg; } ;
struct netvsc_reconfig {int list; int event; } ;
struct net_device_context {int speed; int dwork; int lock; int reconfig_events; } ;
struct net_device {scalar_t__ reg_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct netvsc_reconfig* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct net_device *VAR_6,
    struct rndis_message *VAR_7)
{
 struct rndis_indicate_status *VAR_8 = &VAR_7->msg.indicate_status;
 struct net_device_context *VAR_9 = FUNC_2(VAR_6);
 struct netvsc_reconfig *VAR_10;
 unsigned long VAR_11;


 if (VAR_8->status == VAR_2) {
  u32 VAR_12;

  VAR_12 = *(u32 *)((void *)VAR_8
     + VAR_8->status_buf_offset) / 10000;
  VAR_9->speed = VAR_12;
  return;
 }


 if (VAR_8->status != VAR_5 &&
     VAR_8->status != VAR_3 &&
     VAR_8->status != VAR_4)
  return;

 if (VAR_6->reg_state != VAR_1)
  return;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_0);
 if (!VAR_10)
  return;
 VAR_10->event = VAR_8->status;

 FUNC_4(&VAR_9->lock, VAR_11);
 FUNC_1(&VAR_10->list, &VAR_9->reconfig_events);
 FUNC_5(&VAR_9->lock, VAR_11);

 FUNC_3(&VAR_9->dwork, 0);
}
