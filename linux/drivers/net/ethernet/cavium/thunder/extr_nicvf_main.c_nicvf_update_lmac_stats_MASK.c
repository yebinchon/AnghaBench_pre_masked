
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx; int idx; int vf_id; int msg; } ;
union nic_mbx {TYPE_1__ bgx_stats; } ;
struct nicvf {int vf_id; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nicvf*,union nic_mbx*) ;

void FUNC_2(struct nicvf *VAR_3)
{
 int VAR_4 = 0;
 union nic_mbx VAR_5 = {};

 if (!FUNC_0(VAR_3->netdev))
  return;

 VAR_5.bgx_stats.msg = VAR_2;
 VAR_5.bgx_stats.vf_id = VAR_3->vf_id;

 VAR_5.bgx_stats.rx = 1;
 while (VAR_4 < VAR_0) {
  VAR_5.bgx_stats.idx = VAR_4;
  if (FUNC_1(VAR_3, &VAR_5))
   return;
  VAR_4++;
 }

 VAR_4 = 0;


 VAR_5.bgx_stats.rx = 0;
 while (VAR_4 < VAR_1) {
  VAR_5.bgx_stats.idx = VAR_4;
  if (FUNC_1(VAR_3, &VAR_5))
   return;
  VAR_4++;
 }
}
