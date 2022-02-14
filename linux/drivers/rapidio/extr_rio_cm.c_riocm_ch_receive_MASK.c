
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inuse_cnt; size_t tail; int ** inuse; int count; int ** buf; } ;
struct rio_channel {int lock; TYPE_1__ rx_ring; int id; int comp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (struct rio_channel*,int ) ;
 int FUNC_2 (int ,char*,int ,long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (int *,long) ;

__attribute__((used)) static int FUNC_6(struct rio_channel *VAR_9, void **VAR_10, long VAR_11)
{
 void *VAR_12 = ((void*)0);
 int VAR_13, VAR_14 = 0;
 long VAR_15;

 if (!FUNC_1(VAR_9, VAR_7)) {
  VAR_14 = -VAR_0;
  goto out;
 }

 if (VAR_9->rx_ring.inuse_cnt == VAR_6) {



  VAR_14 = -VAR_3;
  goto out;
 }

 VAR_15 = FUNC_5(&VAR_9->comp, VAR_11);

 FUNC_2(VAR_8, "wait on %d returned %ld", VAR_9->id, VAR_15);

 if (!VAR_15)
  VAR_14 = -VAR_5;
 else if (VAR_15 == -VAR_4)
  VAR_14 = -VAR_2;
 else
  VAR_14 = FUNC_1(VAR_9, VAR_7) ? 0 : -VAR_1;

 if (VAR_14)
  goto out;

 FUNC_3(&VAR_9->lock);

 VAR_12 = VAR_9->rx_ring.buf[VAR_9->rx_ring.tail];
 VAR_9->rx_ring.buf[VAR_9->rx_ring.tail] = ((void*)0);
 VAR_9->rx_ring.count--;
 VAR_9->rx_ring.tail++;
 VAR_9->rx_ring.tail %= VAR_6;
 VAR_14 = -VAR_3;

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  if (VAR_9->rx_ring.inuse[VAR_13] == ((void*)0)) {
   VAR_9->rx_ring.inuse[VAR_13] = VAR_12;
   VAR_9->rx_ring.inuse_cnt++;
   VAR_14 = 0;
   break;
  }
 }

 if (VAR_14) {

  FUNC_0(VAR_12);
  VAR_12 = ((void*)0);
 }

 FUNC_4(&VAR_9->lock);
out:
 *VAR_10 = VAR_12;
 return VAR_14;
}
