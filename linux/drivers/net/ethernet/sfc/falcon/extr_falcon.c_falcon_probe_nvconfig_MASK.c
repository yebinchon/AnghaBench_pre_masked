
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int board_revision; int port0_phy_addr; int port0_phy_type; } ;
struct TYPE_5__ {int * spi_device_type; } ;
struct falcon_nvconfig {TYPE_3__ board_v2; int * mac_address; TYPE_1__ board_v3; int board_struct_ver; } ;
struct falcon_nic_data {int spi_eeprom; int spi_flash; } ;
struct TYPE_6__ {int prtad; } ;
struct ef4_nic {TYPE_2__ mdio; int phy_type; TYPE_4__* net_dev; struct falcon_nic_data* nic_data; } ;
struct TYPE_8__ {int perm_addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ef4_nic*,int) ;
 int FUNC_2 (struct ef4_nic*,struct falcon_nvconfig*) ;
 int FUNC_3 (struct ef4_nic*,int *,size_t,int ) ;
 int FUNC_4 (struct falcon_nvconfig*) ;
 struct falcon_nvconfig* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ef4_nic*,int ,TYPE_4__*,char*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct ef4_nic *VAR_5)
{
 struct falcon_nic_data *VAR_6 = VAR_5->nic_data;
 struct falcon_nvconfig *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_5, VAR_7);
 if (VAR_8)
  goto out;

 VAR_5->phy_type = VAR_7->board_v2.port0_phy_type;
 VAR_5->mdio.prtad = VAR_7->board_v2.port0_phy_addr;

 if (FUNC_6(VAR_7->board_struct_ver) >= 3) {
  FUNC_3(
   VAR_5, &VAR_6->spi_flash, VAR_2,
   FUNC_7(VAR_7->board_v3
        .spi_device_type[VAR_2]));
  FUNC_3(
   VAR_5, &VAR_6->spi_eeprom, VAR_1,
   FUNC_7(VAR_7->board_v3
        .spi_device_type[VAR_1]));
 }


 FUNC_0(VAR_5->net_dev->perm_addr, VAR_7->mac_address[0]);

 FUNC_8(VAR_5, VAR_4, VAR_5->net_dev, "PHY is %d phy_id %d\n",
    VAR_5->phy_type, VAR_5->mdio.prtad);

 VAR_8 = FUNC_1(VAR_5,
    FUNC_6(VAR_7->board_v2.board_revision));
out:
 FUNC_4(VAR_7);
 return VAR_8;
}
