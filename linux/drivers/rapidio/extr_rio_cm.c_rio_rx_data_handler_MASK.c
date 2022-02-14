
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t count; size_t head; void** buf; } ;
struct rio_channel {scalar_t__ state; int lock; int comp; TYPE_1__ rx_ring; int id; } ;
struct rio_ch_chan_hdr {int dst_ch; } ;
struct cm_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,...) ;
 struct rio_channel* FUNC_4 (int ) ;
 int FUNC_5 (struct rio_channel*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct cm_dev *VAR_6, void *VAR_7)
{
 struct rio_ch_chan_hdr *VAR_8;
 struct rio_channel *VAR_9;

 VAR_8 = VAR_7;

 FUNC_3(VAR_5, "for ch=%d", FUNC_2(VAR_8->dst_ch));

 VAR_9 = FUNC_4(FUNC_2(VAR_8->dst_ch));
 if (!VAR_9) {

  FUNC_1(VAR_7);
  return -VAR_1;
 }


 FUNC_6(&VAR_9->lock);

 if (VAR_9->state != VAR_4) {

  FUNC_3(VAR_5, "ch=%d is in wrong state=%d",
       VAR_9->id, VAR_9->state);
  FUNC_7(&VAR_9->lock);
  FUNC_1(VAR_7);
  FUNC_5(VAR_9);
  return -VAR_0;
 }

 if (VAR_9->rx_ring.count == VAR_3) {

  FUNC_3(VAR_5, "ch=%d is full", VAR_9->id);
  FUNC_7(&VAR_9->lock);
  FUNC_1(VAR_7);
  FUNC_5(VAR_9);
  return -VAR_2;
 }

 VAR_9->rx_ring.buf[VAR_9->rx_ring.head] = VAR_7;
 VAR_9->rx_ring.head++;
 VAR_9->rx_ring.count++;
 VAR_9->rx_ring.head %= VAR_3;

 FUNC_0(&VAR_9->comp);

 FUNC_7(&VAR_9->lock);
 FUNC_5(VAR_9);

 return 0;
}
