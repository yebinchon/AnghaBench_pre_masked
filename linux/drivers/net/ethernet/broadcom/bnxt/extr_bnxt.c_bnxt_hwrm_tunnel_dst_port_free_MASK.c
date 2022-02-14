
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hwrm_tunnel_dst_port_free_input {int tunnel_type; int tunnel_dst_port_id; int member_0; } ;
struct bnxt {int dev; int nge_fw_dst_port_id; int vxlan_fw_dst_port_id; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct bnxt*,struct hwrm_tunnel_dst_port_free_input*,int ,int,int) ;
 int FUNC_1 (struct bnxt*,struct hwrm_tunnel_dst_port_free_input*,int,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_2, u8 VAR_3)
{
 u32 VAR_4 = 0;
 struct hwrm_tunnel_dst_port_free_input VAR_5 = {0};

 FUNC_0(VAR_2, &VAR_5, VAR_1, -1, -1);
 VAR_5.tunnel_type = VAR_3;

 switch (VAR_3) {
 case 128:
  VAR_5.tunnel_dst_port_id = VAR_2->vxlan_fw_dst_port_id;
  break;
 case 129:
  VAR_5.tunnel_dst_port_id = VAR_2->nge_fw_dst_port_id;
  break;
 default:
  break;
 }

 VAR_4 = FUNC_1(VAR_2, &VAR_5, sizeof(VAR_5), VAR_0);
 if (VAR_4)
  FUNC_2(VAR_2->dev, "hwrm_tunnel_dst_port_free failed. rc:%d\n",
      VAR_4);
 return VAR_4;
}
