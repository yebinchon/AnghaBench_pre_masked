
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,int,scalar_t__,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,char*,scalar_t__,int ) ;

__attribute__((used)) static u8
FUNC_2(struct MPT3SAS_ADAPTER *VAR_0, u64 VAR_1,
 u16 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = 1;
 char *VAR_5 = ((void*)0);

 switch (VAR_3) {
 case 139:
 case 140:
  VAR_4 = 0;
  break;
 case 145:
  VAR_5 = "PCIe device capability failed";
  break;
 case 144:
  VAR_5 = "PCIe device blocked";
  FUNC_1(VAR_0,
      "Device with Access Status (%s): wwid(0x%016llx), "
      "handle(0x%04x)\n ll only be added to the internal list",
      VAR_5, (u64)VAR_1, VAR_2);
  VAR_4 = 0;
  break;
 case 142:
  VAR_5 = "PCIe device mem space access failed";
  break;
 case 128:
  VAR_5 = "PCIe device unsupported";
  break;
 case 141:
  VAR_5 = "PCIe device MSIx Required";
  break;
 case 143:
  VAR_5 = "PCIe device init fail max";
  break;
 case 129:
  VAR_5 = "PCIe device status unknown";
  break;
 case 130:
  VAR_5 = "nvme ready timeout";
  break;
 case 138:
  VAR_5 = "nvme device configuration unsupported";
  break;
 case 134:
  VAR_5 = "nvme identify failed";
  break;
 case 132:
  VAR_5 = "nvme qconfig failed";
  break;
 case 131:
  VAR_5 = "nvme qcreation failed";
  break;
 case 137:
  VAR_5 = "nvme eventcfg failed";
  break;
 case 135:
  VAR_5 = "nvme get feature stat failed";
  break;
 case 133:
  VAR_5 = "nvme idle timeout";
  break;
 case 136:
  VAR_5 = "nvme failure status";
  break;
 default:
  FUNC_0(VAR_0, "NVMe discovery error(0x%02x): wwid(0x%016llx), handle(0x%04x)\n",
   VAR_3, (u64)VAR_1, VAR_2);
  return VAR_4;
 }

 if (!VAR_4)
  return VAR_4;

 FUNC_1(VAR_0, "NVMe discovery error(%s): wwid(0x%016llx), handle(0x%04x)\n",
   VAR_5, (u64)VAR_1, VAR_2);
 return VAR_4;
}
