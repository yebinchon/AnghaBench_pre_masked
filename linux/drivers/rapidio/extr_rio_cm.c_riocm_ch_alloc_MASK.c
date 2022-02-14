
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ inuse_cnt; scalar_t__ count; scalar_t__ tail; scalar_t__ head; } ;
struct rio_channel {int id; TYPE_1__ rx_ring; int ref; int comp_close; int comp; int ch_node; int accept_queue; int lock; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rio_channel* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,struct rio_channel*,int,int,int ) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rio_channel*) ;
 int FUNC_7 (int *) ;
 struct rio_channel* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct rio_channel *FUNC_12(u16 VAR_10)
{
 int VAR_11;
 int VAR_12, VAR_13;
 struct rio_channel *VAR_14;

 VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return FUNC_0(-VAR_1);

 if (VAR_10) {

  VAR_12 = VAR_10;
  VAR_13 = VAR_10 + 1;
 } else {

  VAR_12 = VAR_8;
  VAR_13 = VAR_5 + 1;
 }

 FUNC_3(VAR_3);
 FUNC_9(&VAR_9);
 VAR_11 = FUNC_2(&VAR_7, VAR_14, VAR_12, VAR_13, VAR_4);
 FUNC_11(&VAR_9);
 FUNC_4();

 if (VAR_11 < 0) {
  FUNC_6(VAR_14);
  return FUNC_0(VAR_11 == -VAR_2 ? -VAR_0 : VAR_11);
 }

 VAR_14->id = (u16)VAR_11;
 VAR_14->state = VAR_6;
 FUNC_10(&VAR_14->lock);
 FUNC_1(&VAR_14->accept_queue);
 FUNC_1(&VAR_14->ch_node);
 FUNC_5(&VAR_14->comp);
 FUNC_5(&VAR_14->comp_close);
 FUNC_7(&VAR_14->ref);
 VAR_14->rx_ring.head = 0;
 VAR_14->rx_ring.tail = 0;
 VAR_14->rx_ring.count = 0;
 VAR_14->rx_ring.inuse_cnt = 0;

 return VAR_14;
}
