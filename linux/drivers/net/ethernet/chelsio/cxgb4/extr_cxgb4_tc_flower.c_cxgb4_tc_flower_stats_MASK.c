
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct flow_cls_offload {int stats; int cookie; } ;
struct ch_tc_flower_stats {scalar_t__ packet_count; scalar_t__ prev_packet_count; scalar_t__ byte_count; int last_used; } ;
struct TYPE_2__ {int hash; } ;
struct ch_tc_flower_entry {int lock; struct ch_tc_flower_stats stats; TYPE_1__ fs; int filter_id; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 struct ch_tc_flower_entry* FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct net_device*,int ,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ) ;
 int VAR_1 ;
 struct adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct net_device *VAR_2,
     struct flow_cls_offload *VAR_3)
{
 struct adapter *VAR_4 = FUNC_3(VAR_2);
 struct ch_tc_flower_stats *VAR_5;
 struct ch_tc_flower_entry *VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_4, VAR_3->cookie);
 if (!VAR_6) {
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_9 = FUNC_1(VAR_2, VAR_6->filter_id,
     &VAR_7, &VAR_8,
     VAR_6->fs.hash);
 if (VAR_9 < 0)
  goto err;

 FUNC_4(&VAR_6->lock);
 VAR_5 = &VAR_6->stats;
 if (VAR_5->packet_count != VAR_7) {
  if (VAR_5->prev_packet_count != VAR_7)
   VAR_5->last_used = VAR_1;
  FUNC_2(&VAR_3->stats, VAR_8 - VAR_5->byte_count,
      VAR_7 - VAR_5->packet_count,
      VAR_5->last_used);

  VAR_5->packet_count = VAR_7;
  VAR_5->byte_count = VAR_8;
  VAR_5->prev_packet_count = VAR_7;
 }
 FUNC_5(&VAR_6->lock);
 return 0;

err:
 return VAR_9;
}
