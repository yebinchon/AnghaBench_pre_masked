
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct ips_driver {int second_cpu; int mcp_power_limit; int core_power_limit; int poll_turbo_status; int gpu_turbo_enabled; int orig_turbo_limit; int cpu_turbo_enabled; int mcp_temp_limit; int irq; int adjust; int monitor; void* mgta_val; void* pta_val; void* cta_val; int regmap; int limits; int * dev; int turbo_status_lock; } ;


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
 scalar_t__ FUNC_0 (int ) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 struct ips_driver* FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,struct ips_driver*) ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_7 (struct ips_driver*) ;
 int FUNC_8 (struct ips_driver*) ;
 int FUNC_9 (struct ips_driver*) ;
 int FUNC_10 (struct ips_driver*) ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_11 (int ,struct ips_driver*,char*) ;
 int FUNC_12 (int ,struct ips_driver*,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct pci_dev*,int,int,int ) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,struct ips_driver*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int,int ) ;
 int * FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int ,int ,int ,char*,struct ips_driver*) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 void* FUNC_27 (int ) ;
 int FUNC_28 (int ,int) ;
 int FUNC_29 (int ,int) ;
 int FUNC_30 (int ,int) ;
 int FUNC_31 (struct ips_driver*) ;

__attribute__((used)) static int FUNC_32(struct pci_dev *VAR_39, const struct pci_device_id *VAR_40)
{
 u64 VAR_41;
 struct ips_driver *VAR_42;
 u32 VAR_43;
 int VAR_44 = 0;
 u16 VAR_45, VAR_46, VAR_47;
 u8 VAR_48;

 if (FUNC_5(VAR_36))
  return -VAR_0;

 VAR_42 = FUNC_4(&VAR_39->dev, sizeof(*VAR_42), VAR_3);
 if (!VAR_42)
  return -VAR_1;

 FUNC_24(&VAR_42->turbo_status_lock);
 VAR_42->dev = &VAR_39->dev;

 VAR_42->limits = FUNC_8(VAR_42);
 if (!VAR_42->limits) {
  FUNC_3(&VAR_39->dev, "IPS not supported on this CPU\n");
  return -VAR_2;
 }

 VAR_44 = FUNC_19(VAR_39);
 if (VAR_44) {
  FUNC_2(&VAR_39->dev, "can't enable PCI device, aborting\n");
  return VAR_44;
 }

 VAR_44 = FUNC_20(VAR_39, 1 << 0, FUNC_17(VAR_39));
 if (VAR_44) {
  FUNC_2(&VAR_39->dev, "failed to map thermal regs, aborting\n");
  return VAR_44;
 }
 VAR_42->regmap = FUNC_21(VAR_39)[0];

 FUNC_18(VAR_39, VAR_42);

 VAR_48 = FUNC_25(VAR_23);
 if (VAR_48 != VAR_29) {
  FUNC_2(&VAR_39->dev, "thermal device not enabled (0x%02x), aborting\n", VAR_48);
  return -VAR_2;
 }

 VAR_46 = FUNC_27(VAR_22);
 VAR_47 = VAR_25 | VAR_27 | VAR_28;
 if ((VAR_46 & VAR_47) != VAR_47) {
  FUNC_2(&VAR_39->dev, "thermal reporting for required devices not enabled, aborting\n");
  return -VAR_2;
 }

 if (VAR_46 & VAR_26)
  VAR_42->second_cpu = 1;

 FUNC_31(VAR_42);
 FUNC_1(&VAR_39->dev, "max cpu power clamp: %dW\n",
  VAR_42->mcp_power_limit / 10);
 FUNC_1(&VAR_39->dev, "max core power clamp: %dW\n",
  VAR_42->core_power_limit / 10);

 if (FUNC_26(VAR_19) & VAR_13)
  VAR_42->poll_turbo_status = 1;

 if (!FUNC_10(VAR_42)) {
  FUNC_3(&VAR_39->dev, "failed to get i915 symbols, graphics turbo disabled until i915 loads\n");
  VAR_42->gpu_turbo_enabled = 0;
 } else {
  FUNC_1(&VAR_39->dev, "graphics turbo enabled\n");
  VAR_42->gpu_turbo_enabled = 1;
 }





 FUNC_22(VAR_11, VAR_41);
 if (!(VAR_41 & VAR_12)) {
  FUNC_2(&VAR_39->dev, "platform indicates TDP override unavailable, aborting\n");
  return -VAR_0;
 }





 VAR_44 = FUNC_14(VAR_39, 1, 1, VAR_10);
 if (VAR_44 < 0)
  return VAR_44;

 VAR_42->irq = FUNC_16(VAR_39, 0);

 VAR_44 = FUNC_23(VAR_42->irq, VAR_37, VAR_9, "ips", VAR_42);
 if (VAR_44) {
  FUNC_2(&VAR_39->dev, "request irq failed, aborting\n");
  return VAR_44;
 }


 FUNC_28(VAR_24, VAR_30 | VAR_32 |
     VAR_33 | VAR_31);
 FUNC_28(VAR_21, VAR_14);


 VAR_42->cta_val = FUNC_27(VAR_15);
 VAR_42->pta_val = FUNC_27(VAR_20);
 VAR_42->mgta_val = FUNC_27(VAR_18);


 FUNC_22(VAR_34, VAR_42->orig_turbo_limit);

 FUNC_9(VAR_42);
 VAR_42->cpu_turbo_enabled = 0;


 VAR_42->adjust = FUNC_11(VAR_35, VAR_42, "ips-adjust");
 if (FUNC_0(VAR_42->adjust)) {
  FUNC_2(&VAR_39->dev,
   "failed to create thermal adjust thread, aborting\n");
  VAR_44 = -VAR_1;
  goto error_free_irq;

 }





 VAR_42->monitor = FUNC_12(VAR_38, VAR_42, "ips-monitor");
 if (FUNC_0(VAR_42->monitor)) {
  FUNC_2(&VAR_39->dev,
   "failed to create thermal monitor thread, aborting\n");
  VAR_44 = -VAR_1;
  goto error_thread_cleanup;
 }

 VAR_43 = (VAR_42->core_power_limit << VAR_7) |
  (VAR_42->mcp_temp_limit << VAR_8) | VAR_6;
 VAR_45 = VAR_4 << VAR_5;

 FUNC_30(VAR_17, VAR_45);
 FUNC_29(VAR_16, VAR_43);

 FUNC_7(VAR_42);

 FUNC_3(&VAR_39->dev, "IPS driver initialized, MCP temp limit %d\n",
   VAR_42->mcp_temp_limit);
 return VAR_44;

error_thread_cleanup:
 FUNC_13(VAR_42->adjust);
error_free_irq:
 FUNC_6(VAR_42->irq, VAR_42);
 FUNC_15(VAR_39);
 return VAR_44;
}
