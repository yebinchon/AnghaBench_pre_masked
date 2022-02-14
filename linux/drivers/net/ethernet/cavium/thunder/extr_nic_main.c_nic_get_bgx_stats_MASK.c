
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t vf_id; int stats; int idx; scalar_t__ rx; int msg; } ;
union nic_mbx {TYPE_1__ bgx_stats; } ;
struct nicpf {int node; int * vf_lmac_map; } ;
struct bgx_stats_msg {size_t vf_id; int idx; scalar_t__ rx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (struct nicpf*,size_t,union nic_mbx*) ;

__attribute__((used)) static void FUNC_5(struct nicpf *VAR_1, struct bgx_stats_msg *VAR_2)
{
 int VAR_3, VAR_4;
 union nic_mbx VAR_5 = {};

 VAR_3 = FUNC_0(VAR_1->vf_lmac_map[VAR_2->vf_id]);
 VAR_4 = FUNC_1(VAR_1->vf_lmac_map[VAR_2->vf_id]);

 VAR_5.bgx_stats.msg = VAR_0;
 VAR_5.bgx_stats.vf_id = VAR_2->vf_id;
 VAR_5.bgx_stats.rx = VAR_2->rx;
 VAR_5.bgx_stats.idx = VAR_2->idx;
 if (VAR_2->rx)
  VAR_5.bgx_stats.stats = FUNC_2(VAR_1->node, VAR_3,
           VAR_4, VAR_2->idx);
 else
  VAR_5.bgx_stats.stats = FUNC_3(VAR_1->node, VAR_3,
           VAR_4, VAR_2->idx);
 FUNC_4(VAR_1, VAR_2->vf_id, &VAR_5);
}
