
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct port_info {TYPE_5__* adapter; int tx_chan; } ;
struct TYPE_8__ {int auxlinfo32_mtu32; int linkattr32; int lstatus32_to_cbllen32; } ;
struct TYPE_7__ {int mtu; int lstatus_to_modtype; } ;
struct TYPE_9__ {TYPE_3__ info32; TYPE_2__ info; } ;
struct fw_port_cmd {TYPE_4__ u; void* action_to_len16; void* op_to_portid; } ;
typedef int port_cmd ;
typedef void* fw_port_cap32_t ;
struct TYPE_6__ {unsigned int fw_caps_support; } ;
struct TYPE_10__ {int mbox; TYPE_1__ params; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fw_port_cmd) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int) ;
 unsigned int FUNC_8 (void*) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct fw_port_cmd*,int ,int) ;
 int FUNC_11 (TYPE_5__*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

int FUNC_12(struct port_info *VAR_8, unsigned int *VAR_9,
         unsigned int *VAR_10, unsigned int *VAR_11)
{
 unsigned int VAR_12 = VAR_8->adapter->params.fw_caps_support;
 struct fw_port_cmd VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;
 fw_port_cap32_t VAR_17;
 int VAR_18;

 FUNC_10(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.op_to_portid = FUNC_7(FUNC_0(VAR_5) |
         VAR_2 | VAR_1 |
         FUNC_4(VAR_8->tx_chan));
 VAR_14 = (VAR_12 == VAR_0
    ? VAR_3
    : VAR_4);
 VAR_13.action_to_len16 = FUNC_7(
  FUNC_2(VAR_14) |
  FUNC_1(VAR_13));
 VAR_18 = FUNC_11(VAR_8->adapter, VAR_8->adapter->mbox,
    &VAR_13, sizeof(VAR_13), &VAR_13);
 if (VAR_18)
  return VAR_18;

 if (VAR_14 == VAR_3) {
  u32 VAR_19 = FUNC_6(VAR_13.u.info.lstatus_to_modtype);

  VAR_15 = !!(VAR_19 & VAR_7);
  VAR_17 = FUNC_9(VAR_19);
  VAR_16 = FUNC_5(VAR_13.u.info.mtu);
 } else {
  u32 VAR_20 =
      FUNC_6(VAR_13.u.info32.lstatus32_to_cbllen32);

  VAR_15 = !!(VAR_20 & VAR_6);
  VAR_17 = FUNC_6(VAR_13.u.info32.linkattr32);
  VAR_16 = FUNC_3(
   FUNC_6(VAR_13.u.info32.auxlinfo32_mtu32));
 }

 *VAR_9 = VAR_15;
 *VAR_10 = FUNC_8(VAR_17);
 *VAR_11 = VAR_16;

 return 0;
}
