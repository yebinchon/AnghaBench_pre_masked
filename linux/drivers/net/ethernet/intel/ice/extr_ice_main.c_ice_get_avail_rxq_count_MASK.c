
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_pf {int max_pf_rxqs; int avail_q_mutex; int avail_rxqs; } ;


 int FUNC_0 (int ,int *,int ) ;

u16 FUNC_1(struct ice_pf *VAR_0)
{
 return FUNC_0(VAR_0->avail_rxqs, &VAR_0->avail_q_mutex,
         VAR_0->max_pf_rxqs);
}
