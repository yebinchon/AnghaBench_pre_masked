
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {scalar_t__ xdp_queue_pairs; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct virtnet_info *VAR_1)
{
 return VAR_1->xdp_queue_pairs ? VAR_0 : 0;
}
