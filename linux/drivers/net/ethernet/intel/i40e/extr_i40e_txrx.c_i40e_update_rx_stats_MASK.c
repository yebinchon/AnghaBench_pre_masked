
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int packets; unsigned int bytes; } ;
struct i40e_ring {TYPE_2__* q_vector; int syncp; TYPE_1__ stats; } ;
struct TYPE_6__ {unsigned int total_packets; unsigned int total_bytes; } ;
struct TYPE_5__ {TYPE_3__ rx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct i40e_ring *VAR_0,
     unsigned int VAR_1,
     unsigned int VAR_2)
{
 FUNC_0(&VAR_0->syncp);
 VAR_0->stats.packets += VAR_2;
 VAR_0->stats.bytes += VAR_1;
 FUNC_1(&VAR_0->syncp);
 VAR_0->q_vector->rx.total_packets += VAR_2;
 VAR_0->q_vector->rx.total_bytes += VAR_1;
}
