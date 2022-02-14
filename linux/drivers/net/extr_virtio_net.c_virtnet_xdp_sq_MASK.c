
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {unsigned int curr_queue_pairs; unsigned int xdp_queue_pairs; struct send_queue* sq; } ;
struct send_queue {int dummy; } ;


 unsigned int FUNC_0 () ;

__attribute__((used)) static struct send_queue *FUNC_1(struct virtnet_info *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = VAR_0->curr_queue_pairs - VAR_0->xdp_queue_pairs + FUNC_0();
 return &VAR_0->sq[VAR_1];
}
