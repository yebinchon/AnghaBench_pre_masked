
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int dummy; } ;
typedef int __le32 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,void*) ;
 int FUNC_2 (struct pm8001_hba_info*,void*) ;
 int FUNC_3 (struct pm8001_hba_info*,void*) ;
 int FUNC_4 (struct pm8001_hba_info*,void*) ;
 int FUNC_5 (struct pm8001_hba_info*,void*) ;
 int FUNC_6 (struct pm8001_hba_info*,void*) ;
 int FUNC_7 (struct pm8001_hba_info*,void*) ;
 int FUNC_8 (struct pm8001_hba_info*,void*) ;
 int FUNC_9 (struct pm8001_hba_info*,void*) ;
 int FUNC_10 (struct pm8001_hba_info*,void*) ;
 int FUNC_11 (struct pm8001_hba_info*,void*) ;
 int FUNC_12 (struct pm8001_hba_info*,void*) ;
 int FUNC_13 (struct pm8001_hba_info*,void*) ;
 int FUNC_14 (struct pm8001_hba_info*,void*) ;
 int FUNC_15 (struct pm8001_hba_info*,void*) ;
 int FUNC_16 (struct pm8001_hba_info*,void*) ;
 int FUNC_17 (struct pm8001_hba_info*,void*) ;
 int FUNC_18 (struct pm8001_hba_info*,void*) ;
 int FUNC_19 (struct pm8001_hba_info*,void*) ;
 int FUNC_20 (struct pm8001_hba_info*,void*) ;
 int FUNC_21 (struct pm8001_hba_info*,void*) ;
 int FUNC_22 (struct pm8001_hba_info*,void*) ;
 int FUNC_23 (struct pm8001_hba_info*,void*) ;
 int FUNC_24 (struct pm8001_hba_info*,void*) ;
 int FUNC_25 (struct pm8001_hba_info*,void*) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (struct pm8001_hba_info*,void*) ;

__attribute__((used)) static void FUNC_28(struct pm8001_hba_info *VAR_0, void *VAR_1)
{
 __le32 VAR_2 = *(__le32 *)VAR_1;
 u32 VAR_3 = (u32)((FUNC_0(VAR_2)) & 0xFFF);

 switch (VAR_3) {
 case 164:
  FUNC_0(VAR_0, FUNC_26("OPC_OUB_ECHO\n"));
  break;
 case 152:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_HW_EVENT\n"));
  FUNC_5(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_THERMAL_EVENT\n"));
  FUNC_16(VAR_0, VAR_1);
  break;
 case 131:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SSP_COMP\n"));
  FUNC_14(VAR_0, VAR_1);
  break;
 case 134:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SMP_COMP\n"));
  FUNC_13(VAR_0, VAR_1);
  break;
 case 150:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_LOCAL_PHY_CNTRL\n"));
  FUNC_21(VAR_0, VAR_1);
  break;
 case 165:
  FUNC_0(VAR_0,
  FUNC_26("OPC_OUB_DEV_REGIST\n"));
  FUNC_22(VAR_0, VAR_1);
  break;
 case 168:
  FUNC_0(VAR_0,
   FUNC_26("unregister the device\n"));
  FUNC_17(VAR_0, VAR_1);
  break;
 case 158:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_GET_DEV_HANDLE\n"));
  break;
 case 142:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SATA_COMP\n"));
  FUNC_9(VAR_0, VAR_1);
  break;
 case 141:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SATA_EVENT\n"));
  FUNC_10(VAR_0, VAR_1);
  break;
 case 130:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SSP_EVENT\n"));
  FUNC_15(VAR_0, VAR_1);
  break;
 case 166:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_DEV_HANDLE_ARRIV\n"));

  break;
 case 129:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SSP_RECV_EVENT\n"));

  break;
 case 162:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_FW_FLASH_UPDATE\n"));
  FUNC_18(VAR_0, VAR_1);
  break;
 case 153:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_GPIO_RESPONSE\n"));
  break;
 case 154:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_GPIO_EVENT\n"));
  break;
 case 161:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_GENERAL_EVENT\n"));
  FUNC_19(VAR_0, VAR_1);
  break;
 case 133:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SSP_ABORT_RSP\n"));
  FUNC_25(VAR_0, VAR_1);
  break;
 case 143:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SATA_ABORT_RSP\n"));
  FUNC_25(VAR_0, VAR_1);
  break;
 case 145:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SAS_DIAG_MODE_START_END\n"));
  break;
 case 146:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SAS_DIAG_EXECUTE\n"));
  break;
 case 155:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_GET_TIME_STAMP\n"));
  break;
 case 144:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SAS_HW_EVENT_ACK\n"));
  break;
 case 147:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_PORT_CONTROL\n"));
  break;
 case 135:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SMP_ABORT_RSP\n"));
  FUNC_25(VAR_0, VAR_1);
  break;
 case 157:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_GET_NVMD_DATA\n"));
  FUNC_20(VAR_0, VAR_1);
  break;
 case 137:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SET_NVMD_DATA\n"));
  FUNC_24(VAR_0, VAR_1);
  break;
 case 167:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_DEVICE_HANDLE_REMOVAL\n"));
  break;
 case 139:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SET_DEVICE_STATE\n"));
  FUNC_23(VAR_0, VAR_1);
  break;
 case 159:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_GET_DEVICE_STATE\n"));
  break;
 case 138:
  FUNC_0(VAR_0,
   FUNC_26("OPC_OUB_SET_DEV_INFO\n"));
  break;

 case 149:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_PHY_START_RESP opcode:%x\n", VAR_3));
  FUNC_7(VAR_0, VAR_1);
  break;
 case 148:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_PHY_STOP_RESP opcode:%x\n", VAR_3));
  FUNC_8(VAR_0, VAR_1);
  break;
 case 140:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_SET_CONTROLLER_CONFIG opcode:%x\n", VAR_3));
  FUNC_11(VAR_0, VAR_1);
  break;
 case 160:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_GET_CONTROLLER_CONFIG opcode:%x\n", VAR_3));
  FUNC_3(VAR_0, VAR_1);
  break;
 case 156:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_GET_PHY_PROFILE opcode:%x\n", VAR_3));
  FUNC_4(VAR_0, VAR_1);
  break;
 case 163:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_FLASH_OP_EXT opcode:%x\n", VAR_3));
  FUNC_2(VAR_0, VAR_1);
  break;
 case 136:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_SET_PHY_PROFILE opcode:%x\n", VAR_3));
  FUNC_12(VAR_0, VAR_1);
  break;
 case 151:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_KEK_MANAGEMENT_RESP opcode:%x\n", VAR_3));
  FUNC_6(VAR_0, VAR_1);
  break;
 case 169:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_DEK_MANAGEMENT_RESP opcode:%x\n", VAR_3));
  FUNC_1(VAR_0, VAR_1);
  break;
 case 132:
  FUNC_0(VAR_0, FUNC_26(
   "OPC_OUB_SSP_COALESCED_COMP_RESP opcode:%x\n", VAR_3));
  FUNC_27(VAR_0, VAR_1);
  break;
 default:
  FUNC_0(VAR_0, FUNC_26(
   "Unknown outbound Queue IOMB OPC = 0x%x\n", VAR_3));
  break;
 }
}
