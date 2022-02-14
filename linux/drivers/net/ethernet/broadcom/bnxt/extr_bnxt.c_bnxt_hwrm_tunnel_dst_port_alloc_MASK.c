
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hwrm_tunnel_dst_port_alloc_output {int tunnel_dst_port_id; } ;
struct hwrm_tunnel_dst_port_alloc_input {int tunnel_type; int tunnel_dst_port_val; int member_0; } ;
struct bnxt {int hwrm_cmd_lock; int nge_fw_dst_port_id; int vxlan_fw_dst_port_id; int dev; struct hwrm_tunnel_dst_port_alloc_output* hwrm_cmd_resp_addr; } ;
typedef int req ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct bnxt*,struct hwrm_tunnel_dst_port_alloc_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_tunnel_dst_port_alloc_input*,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_2, __be16 VAR_3,
        u8 VAR_4)
{
 u32 VAR_5 = 0;
 struct hwrm_tunnel_dst_port_alloc_input VAR_6 = {0};
 struct hwrm_tunnel_dst_port_alloc_output *VAR_7 = VAR_2->hwrm_cmd_resp_addr;

 FUNC_1(VAR_2, &VAR_6, VAR_1, -1, -1);

 VAR_6.tunnel_type = VAR_4;
 VAR_6.tunnel_dst_port_val = VAR_3;

 FUNC_2(&VAR_2->hwrm_cmd_lock);
 VAR_5 = FUNC_0(VAR_2, &VAR_6, sizeof(VAR_6), VAR_0);
 if (VAR_5) {
  FUNC_4(VAR_2->dev, "hwrm_tunnel_dst_port_alloc failed. rc:%d\n",
      VAR_5);
  goto err_out;
 }

 switch (VAR_4) {
 case 128:
  VAR_2->vxlan_fw_dst_port_id = VAR_7->tunnel_dst_port_id;
  break;
 case 129:
  VAR_2->nge_fw_dst_port_id = VAR_7->tunnel_dst_port_id;
  break;
 default:
  break;
 }

err_out:
 FUNC_3(&VAR_2->hwrm_cmd_lock);
 return VAR_5;
}
