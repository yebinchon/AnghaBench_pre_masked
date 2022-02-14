
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ec_response_get_protocol_info {int dummy; } ;
struct ec_host_response {int dummy; } ;
struct ec_host_request {int dummy; } ;
struct cros_ec_device {int din_size; int dout_size; int irq; int cmd_readmem; int pkt_xfer; int cmd_xfer; int phys_name; struct device* dev; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;
struct TYPE_2__ {int (* read ) (scalar_t__,int,char*) ;int write; } ;


 int VAR_0 ;
 struct acpi_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,int ,struct cros_ec_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (scalar_t__,int,char*) ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;
 int FUNC_4 (scalar_t__,int,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct cros_ec_device*) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,char*,int ) ;
 struct cros_ec_device* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,struct cros_ec_device*) ;
 int FUNC_13 (scalar_t__,int,char*) ;
 int FUNC_14 (scalar_t__,int,char*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_19)
{
 struct device *VAR_20 = &VAR_19->dev;
 struct acpi_device *VAR_21;
 acpi_status VAR_22;
 struct cros_ec_device *VAR_23;
 u8 VAR_24[2];
 int VAR_25, VAR_26;

 if (!FUNC_10(VAR_20, VAR_5, VAR_7,
     FUNC_7(VAR_20))) {
  FUNC_6(VAR_20, "couldn't reserve memmap region\n");
  return -VAR_1;
 }







 VAR_15.read = FUNC_3;
 VAR_15.write = VAR_14;
 VAR_15.read(VAR_5 + VAR_6, 2, VAR_24);
 if (VAR_24[0] != 'E' || VAR_24[1] != 'C') {

  VAR_15.read = FUNC_4;
  VAR_15.write = VAR_17;
  VAR_15.read(VAR_5 + VAR_6, 2,
         VAR_24);
  if (VAR_24[0] != 'E' || VAR_24[1] != 'C') {
   FUNC_6(VAR_20, "EC ID not detected\n");
   return -VAR_8;
  }
 }

 if (!FUNC_10(VAR_20, VAR_2,
     VAR_4, FUNC_7(VAR_20))) {
  FUNC_6(VAR_20, "couldn't reserve region0\n");
  return -VAR_1;
 }
 if (!FUNC_10(VAR_20, VAR_3,
     VAR_4, FUNC_7(VAR_20))) {
  FUNC_6(VAR_20, "couldn't reserve region1\n");
  return -VAR_1;
 }

 VAR_23 = FUNC_9(VAR_20, sizeof(*VAR_23), VAR_11);
 if (!VAR_23)
  return -VAR_9;

 FUNC_12(VAR_19, VAR_23);
 VAR_23->dev = VAR_20;
 VAR_23->phys_name = FUNC_7(VAR_20);
 VAR_23->cmd_xfer = VAR_12;
 VAR_23->pkt_xfer = VAR_18;
 VAR_23->cmd_readmem = VAR_16;
 VAR_23->din_size = sizeof(struct ec_host_response) +
      sizeof(struct ec_response_get_protocol_info);
 VAR_23->dout_size = sizeof(struct ec_host_request);





 VAR_25 = FUNC_11(VAR_19, 0);
 if (VAR_25 > 0)
  VAR_23->irq = VAR_25;
 else if (VAR_25 != -VAR_10) {
  FUNC_6(VAR_20, "couldn't retrieve IRQ number (%d)\n", VAR_25);
  return VAR_25;
 }

 VAR_26 = FUNC_5(VAR_23);
 if (VAR_26) {
  FUNC_6(VAR_20, "couldn't register ec_dev (%d)\n", VAR_26);
  return VAR_26;
 }





 VAR_21 = FUNC_0(VAR_20);
 if (VAR_21) {
  VAR_22 = FUNC_2(VAR_21->handle,
           VAR_0,
           VAR_13,
           VAR_23);
  if (FUNC_1(VAR_22))
   FUNC_8(VAR_20, "Failed to register notifier %08x\n",
     VAR_22);
 }

 return 0;
}
