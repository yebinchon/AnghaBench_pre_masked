
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_port_cap {int max_vl; int ib_mtu; int max_port_width; int max_gids; int max_pkeys; int link_state; int supported_port_types; int suggested_type; int default_sense; int dmfs_optimized_state; int max_tc_eth; int log_max_macs; int log_max_vlans; int eth_mtu; int def_mac; int trans_type; int vendor_oui; int wavelength; int trans_code; } ;
struct mlx4_dev {int flags; } ;
struct mlx4_cmd_mailbox {int* buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int*,int ) ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_21, int VAR_22, struct mlx4_port_cap *VAR_23)
{
 struct mlx4_cmd_mailbox *VAR_24;
 u32 *VAR_25;
 u8 VAR_26;
 u32 VAR_27;
 int VAR_28;

 VAR_24 = FUNC_3(VAR_21);
 if (FUNC_0(VAR_24))
  return FUNC_2(VAR_24);
 VAR_25 = VAR_24->buf;

 if (VAR_21->flags & VAR_5) {
  VAR_28 = FUNC_4(VAR_21, 0, VAR_24->dma, 0, 0, VAR_1,
       VAR_3,
       VAR_0);

  if (VAR_28)
   goto out;

  FUNC_1(VAR_26, VAR_25, VAR_9);
  VAR_23->max_vl = VAR_26 >> 4;
  FUNC_1(VAR_26, VAR_25, VAR_8);
  VAR_23->ib_mtu = VAR_26 >> 4;
  VAR_23->max_port_width = VAR_26 & 0xf;
  FUNC_1(VAR_26, VAR_25, VAR_6);
  VAR_23->max_gids = 1 << (VAR_26 & 0xf);
  FUNC_1(VAR_26, VAR_25, VAR_7);
  VAR_23->max_pkeys = 1 << (VAR_26 & 0xf);
 } else {
  VAR_28 = FUNC_4(VAR_21, 0, VAR_24->dma, VAR_22, 0, VAR_2,
       VAR_4, VAR_0);
  if (VAR_28)
   goto out;

  FUNC_1(VAR_26, VAR_25, 0x00);
  VAR_23->link_state = (VAR_26 & 0x80) >> 7;
  VAR_23->supported_port_types = VAR_26 & 3;
  VAR_23->suggested_type = (VAR_26 >> 3) & 1;
  VAR_23->default_sense = (VAR_26 >> 4) & 1;
  VAR_23->dmfs_optimized_state = (VAR_26 >> 5) & 1;
  FUNC_1(VAR_26, VAR_25, 0x01);
  VAR_23->ib_mtu = VAR_26 & 0xf;
  FUNC_1(VAR_26, VAR_25, 0x06);
  VAR_23->max_port_width = VAR_26 & 0xf;
  FUNC_1(VAR_26, VAR_25, 0x07);
  VAR_23->max_gids = 1 << (VAR_26 >> 4);
  VAR_23->max_pkeys = 1 << (VAR_26 & 0xf);
  FUNC_1(VAR_26, VAR_25, 0x0b);
  VAR_23->max_vl = VAR_26 & 0xf;
  VAR_23->max_tc_eth = VAR_26 >> 4;
  FUNC_1(VAR_26, VAR_25, 0x0a);
  VAR_23->log_max_macs = VAR_26 & 0xf;
  VAR_23->log_max_vlans = VAR_26 >> 4;
  FUNC_1(VAR_23->eth_mtu, VAR_25, 0x02);
  FUNC_1(VAR_23->def_mac, VAR_25, 0x10);
  FUNC_1(VAR_27, VAR_25, 0x18);
  VAR_23->trans_type = VAR_27 >> 24;
  VAR_23->vendor_oui = VAR_27 & 0xffffff;
  FUNC_1(VAR_23->wavelength, VAR_25, 0x1c);
  FUNC_1(VAR_23->trans_code, VAR_25, 0x20);
 }

out:
 FUNC_5(VAR_21, VAR_24);
 return VAR_28;
}
