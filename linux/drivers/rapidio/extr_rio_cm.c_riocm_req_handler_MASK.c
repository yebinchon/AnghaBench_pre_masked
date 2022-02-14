
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct rio_channel {scalar_t__ state; int comp; int lock; int accept_queue; } ;
struct TYPE_2__ {int src_id; } ;
struct rio_ch_chan_hdr {int src_ch; TYPE_1__ bhdr; int dst_ch; } ;
struct conn_req {int node; struct cm_dev* cmdev; void* chan; int destid; } ;
struct cm_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct conn_req* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,void*) ;
 struct rio_channel* FUNC_6 (void*) ;
 int FUNC_7 (struct rio_channel*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct cm_dev *VAR_6, void *VAR_7)
{
 struct rio_channel *VAR_8;
 struct conn_req *VAR_9;
 struct rio_ch_chan_hdr *VAR_10 = VAR_7;
 u16 VAR_11;

 VAR_11 = FUNC_4(VAR_10->dst_ch);

 VAR_8 = FUNC_6(VAR_11);

 if (!VAR_8)
  return -VAR_1;

 if (VAR_8->state != VAR_4) {
  FUNC_5(VAR_5, "channel %d is not in listen state", VAR_11);
  FUNC_7(VAR_8);
  return -VAR_0;
 }

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  FUNC_7(VAR_8);
  return -VAR_2;
 }

 VAR_9->destid = FUNC_3(VAR_10->bhdr.src_id);
 VAR_9->chan = FUNC_4(VAR_10->src_ch);
 VAR_9->cmdev = VAR_6;

 FUNC_8(&VAR_8->lock);
 FUNC_2(&VAR_9->node, &VAR_8->accept_queue);
 FUNC_9(&VAR_8->lock);
 FUNC_0(&VAR_8->comp);
 FUNC_7(VAR_8);

 return 0;
}
