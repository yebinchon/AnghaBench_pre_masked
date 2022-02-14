
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


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
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int) ;
 int VAR_15 ;
 int FUNC_3 (int*,int*,int*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct device*,char*,int ,int ) ;
 int FUNC_6 (struct device*,char*,int,...) ;
 int FUNC_7 (struct device*,char*,struct device_node*) ;
 int FUNC_8 (struct device*,int ,int,char*) ;
 int FUNC_9 (struct device*,int ,int ) ;
 int FUNC_10 (struct device*,int,int ,int ,char*,struct device*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (int ,int ,int,int) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct device*,int ,int *,int *) ;
 int FUNC_15 (struct resource*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_20)
{
 int VAR_21, VAR_22;
 struct device *VAR_23 = &VAR_20->dev;
 struct device_node *VAR_24 = VAR_23->of_node;
 struct resource *VAR_25;
 u16 VAR_26, VAR_27;
 u8 VAR_28, VAR_29;

 VAR_13 = -1;

 VAR_25 = FUNC_13(VAR_20, VAR_8, 0);
 if (!VAR_25) {
  FUNC_6(VAR_23, "Can't get %pOF property 'IORESOURCE_MEM'\n",
   VAR_24);
  return -VAR_7;
 }
 VAR_15 = FUNC_9(VAR_23, VAR_25->start, FUNC_15(VAR_25));
 if (!VAR_15)
  return -VAR_7;

 FUNC_3(&VAR_26, &VAR_28, &VAR_29);
 if (VAR_28 == 1 && VAR_29 == 0) {
  VAR_16 = VAR_0;
  VAR_27 = VAR_4;
 } else if (VAR_28 == 2 && VAR_29 == 0) {
  VAR_16 = VAR_1;
  VAR_27 = 8;
 } else if (VAR_28 == 2 && VAR_29 == 1) {
  VAR_16 = VAR_2;
  VAR_27 = VAR_4;
 } else {
  FUNC_6(VAR_23, "Unknown Bman version:%04x,%02x,%02x\n",
   VAR_26, VAR_28, VAR_29);
  return -VAR_6;
 }





 if (!VAR_18) {
  VAR_21 = FUNC_14(VAR_23, 0, &VAR_18, &VAR_19);
  if (VAR_21) {
   FUNC_6(VAR_23, "qbman_init_private_mem() failed 0x%x\n",
    VAR_21);
   return -VAR_6;
  }
 }

 FUNC_5(VAR_23, "Allocated FBPR 0x%llx 0x%zx\n", VAR_18, VAR_19);

 FUNC_4(VAR_18, VAR_19);

 VAR_22 = FUNC_12(VAR_20, 0);
 if (VAR_22 <= 0) {
  FUNC_7(VAR_23, "Can't get %pOF IRQ\n", VAR_24);
  return -VAR_6;
 }
 VAR_21 = FUNC_10(VAR_23, VAR_22, VAR_17, VAR_9, "bman-err",
          VAR_23);
 if (VAR_21) {
  FUNC_6(VAR_23, "devm_request_irq() failed %d for '%pOF'\n",
   VAR_21, VAR_24);
  return VAR_21;
 }

 FUNC_2(VAR_11, VAR_3);




 FUNC_2(VAR_12, 0xffffffff);

 FUNC_2(VAR_10, 0xffffffff);

 VAR_14 = FUNC_8(VAR_23, 0, -1, "bman-bpalloc");
 if (FUNC_0(VAR_14)) {
  VAR_21 = FUNC_1(VAR_14);
  FUNC_6(VAR_23, "bman-bpalloc pool init failed (%d)\n", VAR_21);
  return VAR_21;
 }


 VAR_21 = FUNC_11(VAR_14, VAR_5, VAR_27, -1);
 if (VAR_21) {
  FUNC_6(VAR_23, "Failed to seed BPID range [%d..%d] (%d)\n",
   0, VAR_27 - 1, VAR_21);
  return VAR_21;
 }

 VAR_13 = 1;

 return 0;
}
