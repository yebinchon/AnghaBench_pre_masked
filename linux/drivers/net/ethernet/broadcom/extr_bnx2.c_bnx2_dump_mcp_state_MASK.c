
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bnx2 {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_1 (struct bnx2*,int) ;
 int FUNC_2 (struct bnx2*,int ) ;
 int FUNC_3 (struct bnx2*,int) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct bnx2 *VAR_18)
{
 struct net_device *VAR_19 = VAR_18->dev;
 u32 VAR_20, VAR_21;

 FUNC_4(VAR_19, "<--- start MCP states dump --->\n");
 if (FUNC_0(VAR_18) == VAR_3) {
  VAR_20 = VAR_14;
  VAR_21 = VAR_16;
 } else {
  VAR_20 = VAR_15;
  VAR_21 = VAR_17;
 }
 FUNC_4(VAR_19, "DEBUG: MCP_STATE_P0[%08x] MCP_STATE_P1[%08x]\n",
     FUNC_2(VAR_18, VAR_20), FUNC_2(VAR_18, VAR_21));
 FUNC_4(VAR_19, "DEBUG: MCP mode[%08x] state[%08x] evt_mask[%08x]\n",
     FUNC_2(VAR_18, VAR_11),
     FUNC_2(VAR_18, VAR_13),
     FUNC_2(VAR_18, VAR_9));
 FUNC_4(VAR_19, "DEBUG: pc[%08x] pc[%08x] instr[%08x]\n",
     FUNC_2(VAR_18, VAR_12),
     FUNC_2(VAR_18, VAR_12),
     FUNC_2(VAR_18, VAR_10));
 FUNC_4(VAR_19, "DEBUG: shmem states:\n");
 FUNC_4(VAR_19, "DEBUG: drv_mb[%08x] fw_mb[%08x] link_status[%08x]",
     FUNC_3(VAR_18, VAR_5),
     FUNC_3(VAR_18, VAR_7),
     FUNC_3(VAR_18, VAR_8));
 FUNC_5(" drv_pulse_mb[%08x]\n", FUNC_3(VAR_18, VAR_6));
 FUNC_4(VAR_19, "DEBUG: dev_info_signature[%08x] reset_type[%08x]",
     FUNC_3(VAR_18, VAR_4),
     FUNC_3(VAR_18, VAR_2));
 FUNC_5(" condition[%08x]\n",
  FUNC_3(VAR_18, VAR_1));
 FUNC_1(VAR_18, VAR_0);
 FUNC_1(VAR_18, 0x3cc);
 FUNC_1(VAR_18, 0x3dc);
 FUNC_1(VAR_18, 0x3ec);
 FUNC_4(VAR_19, "DEBUG: 0x3fc[%08x]\n", FUNC_3(VAR_18, 0x3fc));
 FUNC_4(VAR_19, "<--- end MCP states dump --->\n");
}
