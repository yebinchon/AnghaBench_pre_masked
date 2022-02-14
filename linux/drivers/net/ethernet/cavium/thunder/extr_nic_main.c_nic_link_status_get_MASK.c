
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_type; int speed; int duplex; int link_up; int msg; } ;
union nic_mbx {TYPE_1__ link_status; } ;
typedef size_t u8 ;
struct nicpf {int node; int * vf_lmac_map; } ;
struct bgx_link_status {int mac_type; int speed; int duplex; int link_up; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,size_t,size_t,struct bgx_link_status*) ;
 int FUNC_3 (struct nicpf*,size_t,union nic_mbx*) ;

__attribute__((used)) static void FUNC_4(struct nicpf *VAR_1, u8 VAR_2)
{
 union nic_mbx VAR_3 = {};
 struct bgx_link_status VAR_4;
 u8 VAR_5, VAR_6;

 VAR_3.link_status.msg = VAR_0;


 VAR_5 = FUNC_0(VAR_1->vf_lmac_map[VAR_2]);
 VAR_6 = FUNC_1(VAR_1->vf_lmac_map[VAR_2]);


 FUNC_2(VAR_1->node, VAR_5, VAR_6, &VAR_4);


 VAR_3.link_status.link_up = VAR_4.link_up;
 VAR_3.link_status.duplex = VAR_4.duplex;
 VAR_3.link_status.speed = VAR_4.speed;
 VAR_3.link_status.mac_type = VAR_4.mac_type;


 FUNC_3(VAR_1, VAR_2, &VAR_3);
}
