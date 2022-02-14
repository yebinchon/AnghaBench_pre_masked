
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ice_sched_node {size_t tc_num; } ;
struct ice_port_info {struct ice_sched_node*** sib_head; } ;



__attribute__((used)) static struct ice_sched_node *
FUNC_0(struct ice_port_info *VAR_0,
    struct ice_sched_node *VAR_1, u8 VAR_2)
{
 return VAR_0->sib_head[VAR_1->tc_num][VAR_2];
}
