
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_pf {int * avail_rxqs; int * avail_txqs; int avail_q_mutex; int sw_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ice_pf*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ice_pf *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->sw_mutex);
 FUNC_2(&VAR_0->avail_q_mutex);

 if (VAR_0->avail_txqs) {
  FUNC_0(VAR_0->avail_txqs);
  VAR_0->avail_txqs = ((void*)0);
 }

 if (VAR_0->avail_rxqs) {
  FUNC_0(VAR_0->avail_rxqs);
  VAR_0->avail_rxqs = ((void*)0);
 }
}
