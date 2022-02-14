
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct netxen_dimm_cfg {int presence; int dimm_type; int size; int mem_type; } ;
struct netxen_adapter {struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {size_t size; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;






 int VAR_7 ;
 int FUNC_7 (struct netxen_adapter*,int ) ;
 struct netxen_adapter* FUNC_8 (struct device*) ;
 struct device* FUNC_9 (struct kobject*) ;
 int FUNC_10 (char*,struct netxen_dimm_cfg*,int) ;
 int FUNC_11 (struct netxen_dimm_cfg*,int ,int) ;
 int FUNC_12 (struct net_device*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_13(struct file *VAR_8, struct kobject *VAR_9,
  struct bin_attribute *VAR_10,
  char *VAR_11, loff_t VAR_12, size_t VAR_13)
{
 struct device *VAR_14 = FUNC_9(VAR_9);
 struct netxen_adapter *VAR_15 = FUNC_8(VAR_14);
 struct net_device *VAR_16 = VAR_15->netdev;
 struct netxen_dimm_cfg VAR_17;
 u8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23;

 if (VAR_13 < VAR_10->size) {
  FUNC_12(VAR_16, "Invalid size\n");
  return -VAR_0;
 }

 FUNC_11(&VAR_17, 0, sizeof(struct netxen_dimm_cfg));
 VAR_23 = FUNC_7(VAR_15, VAR_1);


 if (VAR_23 & VAR_7) {
  FUNC_12(VAR_16, "Invalid DIMM flag\n");
  VAR_17.presence = 0xff;
  goto out;
 }

 VAR_19 = FUNC_5(VAR_23);
 VAR_20 = FUNC_3(VAR_23);
 VAR_22 = FUNC_4(VAR_23);
 VAR_21 = FUNC_2(VAR_23);
 VAR_18 = FUNC_0(VAR_23);

 VAR_17.presence = (VAR_23 & VAR_4);


 if (!VAR_17.presence) {
  FUNC_12(VAR_16, "DIMM not present\n");
  goto out;
 }

 VAR_17.dimm_type = FUNC_6(VAR_23);

 switch (VAR_17.dimm_type) {
 case 130:
 case 128:
 case 129:
 case 133:
 case 132:
 case 131:
  break;
 default:
  FUNC_12(VAR_16, "Invalid DIMM type %x\n", VAR_17.dimm_type);
  goto out;
 }

 if (VAR_23 & VAR_2)
  VAR_17.mem_type = VAR_3;
 else
  VAR_17.mem_type = FUNC_1(VAR_23);

 if (VAR_23 & VAR_5) {
  VAR_17.size = VAR_6;
  goto out;
 }

 if (!VAR_19) {
  FUNC_12(VAR_16, "Invalid no of rows %x\n", VAR_19);
  goto out;
 }

 if (!VAR_20) {
  FUNC_12(VAR_16, "Invalid no of columns %x\n", VAR_20);
  goto out;
 }

 if (!VAR_21) {
  FUNC_12(VAR_16, "Invalid no of banks %x\n", VAR_21);
  goto out;
 }

 VAR_22 += 1;

 switch (VAR_18) {
 case 0x0:
  VAR_18 = 32;
  break;
 case 0x1:
  VAR_18 = 33;
  break;
 case 0x2:
  VAR_18 = 36;
  break;
 case 0x3:
  VAR_18 = 64;
  break;
 case 0x4:
  VAR_18 = 72;
  break;
 case 0x5:
  VAR_18 = 80;
  break;
 case 0x6:
  VAR_18 = 128;
  break;
 case 0x7:
  VAR_18 = 144;
  break;
 default:
  FUNC_12(VAR_16, "Invalid data-width %x\n", VAR_18);
  goto out;
 }

 VAR_17.size = ((1 << VAR_19) * (1 << VAR_20) * VAR_18 * VAR_21 * VAR_22) / 8;

 VAR_17.size = (VAR_17.size) / 0x100000;
out:
 FUNC_10(VAR_11, &VAR_17, sizeof(struct netxen_dimm_cfg));
 return sizeof(struct netxen_dimm_cfg);

}
