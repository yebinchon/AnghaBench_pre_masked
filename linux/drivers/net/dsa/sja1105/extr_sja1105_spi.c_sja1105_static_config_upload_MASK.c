
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sja1105_status {int ids; int crcchkl; int crcchkg; scalar_t__ configs; } ;
struct sja1105_static_config {int device_id; } ;
struct sja1105_regs {int config; } ;
struct sja1105_private {TYPE_2__* info; TYPE_1__* spidev; struct sja1105_static_config static_config; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int device_id; struct sja1105_regs* regs; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sja1105_private*) ;
 int FUNC_6 (struct sja1105_private*,unsigned long,int) ;
 int FUNC_7 (struct sja1105_private*) ;
 int FUNC_8 (struct sja1105_private*,int ,int ,int *,int) ;
 int FUNC_9 (struct sja1105_static_config*) ;
 int FUNC_10 (struct sja1105_private*,struct sja1105_status*) ;
 int FUNC_11 (struct sja1105_private*,int *,int) ;
 int FUNC_12 (int,int) ;

int FUNC_13(struct sja1105_private *VAR_8)
{
 unsigned long VAR_9 = FUNC_0(VAR_6 - 1, 0);
 struct sja1105_static_config *VAR_10 = &VAR_8->static_config;
 const struct sja1105_regs *VAR_11 = VAR_8->info->regs;
 struct device *VAR_12 = &VAR_8->spidev->dev;
 struct sja1105_status VAR_13;
 int VAR_14, VAR_15 = VAR_5;
 u8 *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_9(VAR_10);
 VAR_16 = FUNC_3(VAR_17, sizeof(char), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_14 = FUNC_11(VAR_8, VAR_16, VAR_17);
 if (VAR_14 < 0) {
  FUNC_1(VAR_12, "Invalid config, cannot upload\n");
  VAR_14 = -VAR_0;
  goto out;
 }




 VAR_14 = FUNC_6(VAR_8, VAR_9, 1);
 if (VAR_14 < 0) {
  FUNC_1(VAR_12, "Failed to inhibit Tx on ports\n");
  VAR_14 = -VAR_3;
  goto out;
 }




 FUNC_12(500, 1000);
 do {

  VAR_14 = FUNC_5(VAR_8);
  if (VAR_14 < 0) {
   FUNC_1(VAR_12, "Failed to reset switch, retrying...\n");
   continue;
  }

  FUNC_12(1000, 5000);

  VAR_14 = FUNC_8(VAR_8, VAR_7,
            VAR_11->config,
            VAR_16, VAR_17);
  if (VAR_14 < 0) {
   FUNC_1(VAR_12, "Failed to upload config, retrying...\n");
   continue;
  }

  VAR_14 = FUNC_10(VAR_8, &VAR_13);
  if (VAR_14 < 0)
   continue;

  if (VAR_13.ids == 1) {
   FUNC_1(VAR_12, "Mismatch between hardware and static config "
    "device id. Wrote 0x%llx, wants 0x%llx\n",
    VAR_10->device_id, VAR_8->info->device_id);
   continue;
  }
  if (VAR_13.crcchkl == 1) {
   FUNC_1(VAR_12, "Switch reported invalid local CRC on "
    "the uploaded config, retrying...\n");
   continue;
  }
  if (VAR_13.crcchkg == 1) {
   FUNC_1(VAR_12, "Switch reported invalid global CRC on "
    "the uploaded config, retrying...\n");
   continue;
  }
  if (VAR_13.configs == 0) {
   FUNC_1(VAR_12, "Switch reported that configuration is "
    "invalid, retrying...\n");
   continue;
  }

  break;
 } while (--VAR_15);

 if (!VAR_15) {
  VAR_14 = -VAR_1;
  FUNC_1(VAR_12, "Failed to upload config to device, giving up\n");
  goto out;
 } else if (VAR_15 != VAR_5) {
  FUNC_2(VAR_12, "Succeeded after %d tried\n", VAR_5 - VAR_15);
 }

 VAR_14 = FUNC_7(VAR_8);
 if (VAR_14 < 0)
  FUNC_1(VAR_12, "Failed to reset PTP clock: %d\n", VAR_14);

 FUNC_2(VAR_12, "Reset switch and programmed static config\n");

out:
 FUNC_4(VAR_16);
 return VAR_14;
}
