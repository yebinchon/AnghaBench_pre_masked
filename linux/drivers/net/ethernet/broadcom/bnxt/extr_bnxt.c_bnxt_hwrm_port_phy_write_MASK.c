
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hwrm_port_phy_mdio_write_input {int phy_addr; int cl45_mdio; void* reg_data; void* reg_addr; int dev_addr; void* port_id; int member_0; } ;
struct TYPE_2__ {int port_id; } ;
struct bnxt {int hwrm_spec_code; TYPE_1__ pf; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_port_phy_mdio_write_input*,int ,int,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct bnxt*,struct hwrm_port_phy_mdio_write_input*,int,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct bnxt *VAR_3, u16 VAR_4, u16 VAR_5,
        u16 VAR_6)
{
 struct hwrm_port_phy_mdio_write_input VAR_7 = {0};

 if (VAR_3->hwrm_spec_code < 0x10a00)
  return -VAR_0;

 FUNC_0(VAR_3, &VAR_7, VAR_2, -1, -1);
 VAR_7.port_id = FUNC_1(VAR_3->pf.port_id);
 VAR_7.phy_addr = VAR_4;
 VAR_7.reg_addr = FUNC_1(VAR_5 & 0x1f);
 if (FUNC_4(VAR_4)) {
  VAR_7.cl45_mdio = 1;
  VAR_7.phy_addr = FUNC_5(VAR_4);
  VAR_7.dev_addr = FUNC_3(VAR_4);
  VAR_7.reg_addr = FUNC_1(VAR_5);
 }
 VAR_7.reg_data = FUNC_1(VAR_6);

 return FUNC_2(VAR_3, &VAR_7, sizeof(VAR_7), VAR_1);
}
