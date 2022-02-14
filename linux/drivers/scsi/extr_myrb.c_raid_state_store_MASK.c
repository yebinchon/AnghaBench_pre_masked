
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct myrb_pdev_state* hostdata; int host; } ;
struct myrb_pdev_state {int state; int present; } ;
struct myrb_hba {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum myrb_devstate { ____Placeholder_myrb_devstate } myrb_devstate ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 unsigned short FUNC_0 (struct myrb_hba*,struct scsi_device*,int) ;
 int FUNC_1 (int ,struct scsi_device*,char*,...) ;
 struct myrb_hba* FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*,int) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_10,
  struct device_attribute *VAR_11, const char *VAR_12, size_t VAR_13)
{
 struct scsi_device *VAR_14 = FUNC_4(VAR_10);
 struct myrb_hba *VAR_15 = FUNC_2(VAR_14->host);
 struct myrb_pdev_state *VAR_16;
 enum myrb_devstate VAR_17;
 unsigned short VAR_18;

 if (!FUNC_3(VAR_12, "kill", 4) ||
     !FUNC_3(VAR_12, "offline", 7))
  VAR_17 = VAR_7;
 else if (!FUNC_3(VAR_12, "online", 6))
  VAR_17 = VAR_8;
 else if (!FUNC_3(VAR_12, "standby", 7))
  VAR_17 = VAR_9;
 else
  return -VAR_2;

 VAR_16 = VAR_14->hostdata;
 if (!VAR_16) {
  FUNC_1(VAR_6, VAR_14,
       "Failed - no physical device information\n");
  return -VAR_5;
 }
 if (!VAR_16->present) {
  FUNC_1(VAR_6, VAR_14,
       "Failed - device not present\n");
  return -VAR_5;
 }

 if (VAR_16->state == VAR_17)
  return VAR_13;

 VAR_18 = FUNC_0(VAR_15, VAR_14, VAR_17);
 switch (VAR_18) {
 case 128:
  break;
 case 129:
  FUNC_1(VAR_6, VAR_14,
        "Failed - Unable to Start Device\n");
  VAR_13 = -VAR_0;
  break;
 case 130:
  FUNC_1(VAR_6, VAR_14,
       "Failed - No Device at Address\n");
  VAR_13 = -VAR_4;
  break;
 case 131:
  FUNC_1(VAR_6, VAR_14,
    "Failed - Invalid Channel or Target or Modifier\n");
  VAR_13 = -VAR_2;
  break;
 case 132:
  FUNC_1(VAR_6, VAR_14,
    "Failed - Channel Busy\n");
  VAR_13 = -VAR_1;
  break;
 default:
  FUNC_1(VAR_6, VAR_14,
    "Failed - Unexpected Status %04X\n", VAR_18);
  VAR_13 = -VAR_3;
  break;
 }
 return VAR_13;
}
