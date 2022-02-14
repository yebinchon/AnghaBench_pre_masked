
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct port_info {int viid; int tx_chan; int lport; unsigned int rss_size; int port_type; int mdio_addr; int link_cfg; int mod_type; void* vin; void* vivld; struct adapter* adapter; int rx_cchan; } ;
struct TYPE_6__ {int acaps32; int pcaps32; int lstatus32_to_cbllen32; } ;
struct TYPE_5__ {int acap; int pcap; int lstatus_to_modtype; } ;
struct TYPE_7__ {TYPE_2__ info32; TYPE_1__ info; } ;
struct fw_port_cmd {TYPE_3__ u; void* action_to_len16; void* op_to_portid; } ;
struct TYPE_8__ {unsigned int fw_caps_support; scalar_t__ viid_smt_extn_support; } ;
struct adapter {TYPE_4__ params; } ;
typedef void* fw_port_cap32_t ;
typedef enum fw_port_type { ____Placeholder_fw_port_type } fw_port_type ;
typedef int cmd ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fw_port_cmd) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_12 ;
 void* FUNC_10 (int) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;
 void* FUNC_14 (int) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int *,void*,void*) ;
 int FUNC_17 (struct fw_port_cmd*,int ,int) ;
 int FUNC_18 (struct adapter*,int,int,int,int,int,void**,unsigned int*,void**,void**) ;
 int FUNC_19 (struct adapter*,int) ;
 int FUNC_20 (struct adapter*,int,int,int,int,int*,int*) ;
 int FUNC_21 (struct adapter*,int,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

int FUNC_22(struct port_info *VAR_13, int VAR_14,
       int VAR_15, int VAR_16, int VAR_17, u8 VAR_18[])
{
 struct adapter *VAR_19 = VAR_13->adapter;
 unsigned int VAR_20 = VAR_19->params.fw_caps_support;
 struct fw_port_cmd VAR_21;
 unsigned int VAR_22;
 enum fw_port_type VAR_23;
 int VAR_24;
 fw_port_cap32_t VAR_25, VAR_26;
 u8 VAR_27 = 0, VAR_28 = 0;
 int VAR_29;







 if (VAR_20 == VAR_2) {
  u32 VAR_30, VAR_31;

  VAR_30 = (FUNC_2(VAR_5) |
    FUNC_3(VAR_6));
  VAR_31 = 1;
  VAR_29 = FUNC_20(VAR_19, VAR_14, VAR_16, VAR_17, 1, &VAR_30, &VAR_31);
  VAR_20 = (VAR_29 == 0 ? VAR_1 : VAR_0);
  VAR_19->params.fw_caps_support = VAR_20;
 }

 FUNC_17(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.op_to_portid = FUNC_14(FUNC_0(VAR_9) |
           VAR_4 | VAR_3 |
           FUNC_7(VAR_15));
 VAR_21.action_to_len16 = FUNC_14(
  FUNC_4(VAR_20 == VAR_0
         ? VAR_7
         : VAR_8) |
  FUNC_1(VAR_21));
 VAR_29 = FUNC_21(VAR_13->adapter, VAR_14, &VAR_21, sizeof(VAR_21), &VAR_21);
 if (VAR_29)
  return VAR_29;



 if (VAR_20 == VAR_0) {
  u32 VAR_32 = FUNC_13(VAR_21.u.info.lstatus_to_modtype);

  VAR_23 = FUNC_9(VAR_32);
  VAR_24 = ((VAR_32 & VAR_11)
        ? FUNC_6(VAR_32)
        : -1);
  VAR_25 = FUNC_15(FUNC_12(VAR_21.u.info.pcap));
  VAR_26 = FUNC_15(FUNC_12(VAR_21.u.info.acap));
 } else {
  u32 VAR_33 = FUNC_13(VAR_21.u.info32.lstatus32_to_cbllen32);

  VAR_23 = FUNC_8(VAR_33);
  VAR_24 = ((VAR_33 & VAR_10)
        ? FUNC_5(VAR_33)
        : -1);
  VAR_25 = FUNC_13(VAR_21.u.info32.pcaps32);
  VAR_26 = FUNC_13(VAR_21.u.info32.acaps32);
 }

 VAR_29 = FUNC_18(VAR_13->adapter, VAR_14, VAR_15, VAR_16, VAR_17, 1, VAR_18, &VAR_22,
     &VAR_27, &VAR_28);
 if (VAR_29 < 0)
  return VAR_29;

 VAR_13->viid = VAR_29;
 VAR_13->tx_chan = VAR_15;
 VAR_13->lport = VAR_15;
 VAR_13->rss_size = VAR_22;
 VAR_13->rx_cchan = FUNC_19(VAR_13->adapter, VAR_15);




 if (VAR_19->params.viid_smt_extn_support) {
  VAR_13->vivld = VAR_27;
  VAR_13->vin = VAR_28;
 } else {

  VAR_13->vivld = FUNC_11(VAR_13->viid);
  VAR_13->vin = FUNC_10(VAR_13->viid);
 }

 VAR_13->port_type = VAR_23;
 VAR_13->mdio_addr = VAR_24;
 VAR_13->mod_type = VAR_12;

 FUNC_16(&VAR_13->link_cfg, VAR_25, VAR_26);
 return 0;
}
