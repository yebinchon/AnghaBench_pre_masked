
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int curr_queue_pairs; int xdp_queue_pairs; } ;



__attribute__((used)) static bool FUNC_0(struct virtnet_info *VAR_0, int VAR_1)
{
 if (VAR_1 < (VAR_0->curr_queue_pairs - VAR_0->xdp_queue_pairs))
  return 0;
 else if (VAR_1 < VAR_0->curr_queue_pairs)
  return 1;
 else
  return 0;
}
