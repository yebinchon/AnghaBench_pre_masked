
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct qlc_83xx_fw_info {int fw_file_name; int fw; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int post_mode; struct qlc_83xx_fw_info* fw_info; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,int ) ;
 int FUNC_7 (struct qlcnic_adapter*,int ,int) ;
 int FUNC_8 (int *,int ,struct device*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct qlcnic_adapter *VAR_11)
{
 struct qlc_83xx_fw_info *VAR_12 = VAR_11->ahw->fw_info;
 struct device *VAR_13 = &VAR_11->pdev->dev;
 int VAR_14, VAR_15, VAR_16 = 0;
 u32 VAR_17;


 switch (VAR_11->ahw->post_mode) {
 case 132:
  VAR_14 = VAR_4 + 2000;
  break;
 case 130:
  VAR_14 = VAR_6 + 2000;
  break;
 case 128:
  VAR_14 = VAR_9 + 2000;
  break;
 default:
  return -VAR_0;
 }

 FUNC_9(VAR_12->fw_file_name, VAR_5,
  VAR_10);

 VAR_16 = FUNC_8(&VAR_12->fw, VAR_12->fw_file_name, VAR_13);
 if (VAR_16) {
  FUNC_1(VAR_13, "POST firmware can not be loaded, skipping POST\n");
  return 0;
 }

 VAR_16 = FUNC_4(VAR_11);
 if (VAR_16)
  return VAR_16;


 FUNC_7(VAR_11, VAR_8, 0);


 FUNC_7(VAR_11, VAR_7,
        VAR_11->ahw->post_mode);

 FUNC_0(VAR_11, VAR_2,
       VAR_3);

 FUNC_5(VAR_11);

 VAR_15 = 0;
 do {
  FUNC_3(100);
  VAR_15 += 100;

  VAR_17 = FUNC_6(VAR_11, VAR_8);
  if (VAR_17 == 129)
   break;
 } while (VAR_14 > VAR_15);

 if (VAR_14 <= VAR_15) {
  FUNC_1(VAR_13, "POST timed out, signature = 0x%08x\n", VAR_17);
  return -VAR_1;
 }

 switch (VAR_17) {
 case 129:
  FUNC_2(VAR_13, "POST passed, Signature = 0x%08x\n", VAR_17);
  break;
 case 134:
  FUNC_1(VAR_13, "POST failed, Test case : ASIC STRESS TEST, Signature = 0x%08x\n",
   VAR_17);
  VAR_16 = -VAR_1;
  break;
 case 133:
  FUNC_1(VAR_13, "POST failed, Test case : DDT TEST, Signature = 0x%08x\n",
   VAR_17);
  VAR_16 = -VAR_1;
  break;
 case 135:
  FUNC_1(VAR_13, "POST failed, Test case : ASIC MEMORY TEST, Signature = 0x%08x\n",
   VAR_17);
  VAR_16 = -VAR_1;
  break;
 case 131:
  FUNC_1(VAR_13, "POST failed, Test case : FLASH TEST, Signature = 0x%08x\n",
   VAR_17);
  VAR_16 = -VAR_1;
  break;
 default:
  FUNC_1(VAR_13, "POST failed, Test case : INVALID, Signature = 0x%08x\n",
   VAR_17);
  VAR_16 = -VAR_1;
  break;
 }

 return VAR_16;
}
