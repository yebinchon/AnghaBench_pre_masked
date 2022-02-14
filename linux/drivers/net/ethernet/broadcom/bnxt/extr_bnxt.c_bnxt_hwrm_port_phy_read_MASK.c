
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hwrm_port_phy_mdio_read_output {int reg_data; } ;
struct hwrm_port_phy_mdio_read_input {int phy_addr; int cl45_mdio; void* reg_addr; int dev_addr; void* port_id; int member_0; } ;
struct TYPE_2__ {int port_id; } ;
struct bnxt {int hwrm_spec_code; int hwrm_cmd_lock; TYPE_1__ pf; struct hwrm_port_phy_mdio_read_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_port_phy_mdio_read_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_port_phy_mdio_read_input*,int ,int,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct bnxt *VAR_3, u16 VAR_4, u16 VAR_5,
       u16 *VAR_6)
{
 struct hwrm_port_phy_mdio_read_output *VAR_7 = VAR_3->hwrm_cmd_resp_addr;
 struct hwrm_port_phy_mdio_read_input VAR_8 = {0};
 int VAR_9;

 if (VAR_3->hwrm_spec_code < 0x10a00)
  return -VAR_0;

 FUNC_1(VAR_3, &VAR_8, VAR_2, -1, -1);
 VAR_8.port_id = FUNC_2(VAR_3->pf.port_id);
 VAR_8.phy_addr = VAR_4;
 VAR_8.reg_addr = FUNC_2(VAR_5 & 0x1f);
 if (FUNC_5(VAR_4)) {
  VAR_8.cl45_mdio = 1;
  VAR_8.phy_addr = FUNC_6(VAR_4);
  VAR_8.dev_addr = FUNC_4(VAR_4);
  VAR_8.reg_addr = FUNC_2(VAR_5);
 }

 FUNC_7(&VAR_3->hwrm_cmd_lock);
 VAR_9 = FUNC_0(VAR_3, &VAR_8, sizeof(VAR_8), VAR_1);
 if (!VAR_9)
  *VAR_6 = FUNC_3(VAR_7->reg_data);
 FUNC_8(&VAR_3->hwrm_cmd_lock);
 return VAR_9;
}
