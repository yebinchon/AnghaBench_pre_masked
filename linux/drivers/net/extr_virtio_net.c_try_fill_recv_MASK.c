
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtnet_info {scalar_t__ big_packets; scalar_t__ mergeable_rx_bufs; } ;
struct TYPE_4__ {int syncp; int kicks; } ;
struct receive_queue {TYPE_1__ stats; TYPE_2__* vq; } ;
typedef int gfp_t ;
struct TYPE_5__ {scalar_t__ num_free; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtnet_info*,struct receive_queue*,int ) ;
 int FUNC_1 (struct virtnet_info*,struct receive_queue*,int ) ;
 int FUNC_2 (struct virtnet_info*,struct receive_queue*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_7(struct virtnet_info *VAR_1, struct receive_queue *VAR_2,
     gfp_t VAR_3)
{
 int VAR_4;
 bool VAR_5;

 do {
  if (VAR_1->mergeable_rx_bufs)
   VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  else if (VAR_1->big_packets)
   VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  else
   VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

  VAR_5 = VAR_4 == -VAR_0;
  if (VAR_4)
   break;
 } while (VAR_2->vq->num_free);
 if (FUNC_5(VAR_2->vq) && FUNC_6(VAR_2->vq)) {
  FUNC_3(&VAR_2->stats.syncp);
  VAR_2->stats.kicks++;
  FUNC_4(&VAR_2->stats.syncp);
 }

 return !VAR_5;
}
