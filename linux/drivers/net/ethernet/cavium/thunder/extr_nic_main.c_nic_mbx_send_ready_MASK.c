
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vf_id; int sqs_mode; int loopback_supported; int node_id; int mac_addr; int tns_mode; int msg; } ;
union nic_mbx {TYPE_1__ nic_cfg; } ;
typedef int u8 ;
struct nicpf {int num_vf_en; int node; int * vf_lmac_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (struct nicpf*,int,union nic_mbx*) ;

__attribute__((used)) static void FUNC_5(struct nicpf *VAR_2, int VAR_3)
{
 union nic_mbx VAR_4 = {};
 int VAR_5, VAR_6;
 const char *VAR_7;

 VAR_4.nic_cfg.msg = VAR_0;
 VAR_4.nic_cfg.vf_id = VAR_3;

 VAR_4.nic_cfg.tns_mode = VAR_1;

 if (VAR_3 < VAR_2->num_vf_en) {
  VAR_5 = FUNC_0(VAR_2->vf_lmac_map[VAR_3]);
  VAR_6 = FUNC_1(VAR_2->vf_lmac_map[VAR_3]);

  VAR_7 = FUNC_2(VAR_2->node, VAR_5, VAR_6);
  if (VAR_7)
   FUNC_3((u8 *)&VAR_4.nic_cfg.mac_addr, VAR_7);
 }
 VAR_4.nic_cfg.sqs_mode = (VAR_3 >= VAR_2->num_vf_en) ? 1 : 0;
 VAR_4.nic_cfg.node_id = VAR_2->node;

 VAR_4.nic_cfg.loopback_supported = VAR_3 < VAR_2->num_vf_en;

 FUNC_4(VAR_2, VAR_3, &VAR_4);
}
