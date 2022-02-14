
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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int,char*) ;
 int VAR_14 ;
 int FUNC_3 (struct device*,char*,scalar_t__,int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,struct device_node*) ;
 int FUNC_6 (struct device*,int ,int,char*) ;
 int FUNC_7 (struct device*,int ,int ) ;
 int FUNC_8 (struct device*,int,int ,int ,char*,struct device*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct device*,int,scalar_t__*,int *) ;
 int FUNC_12 (int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int*,int*) ;
 int VAR_24 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct device*) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 () ;
 int FUNC_19 (struct resource*) ;
 int FUNC_20 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_27)
{
 struct device *VAR_28 = &VAR_27->dev;
 struct device_node *VAR_29 = VAR_28->of_node;
 struct resource *VAR_30;
 int VAR_31, VAR_32;
 u16 VAR_33;
 u8 VAR_34, VAR_35;

 VAR_14 = -1;

 VAR_30 = FUNC_10(VAR_27, VAR_2, 0);
 if (!VAR_30) {
  FUNC_4(VAR_28, "Can't get %pOF property 'IORESOURCE_MEM'\n",
   VAR_29);
  return -VAR_1;
 }
 VAR_19 = FUNC_7(VAR_28, VAR_30->start, FUNC_19(VAR_30));
 if (!VAR_19)
  return -VAR_1;

 FUNC_14(&VAR_33, &VAR_34, &VAR_35);
 if (VAR_34 == 1 && VAR_35 == 0) {
  FUNC_4(VAR_28, "Rev1.0 on P4080 rev1 is not supported!\n");
   return -VAR_0;
 } else if (VAR_34 == 1 && VAR_35 == 1)
  VAR_25 = VAR_6;
 else if (VAR_34 == 1 && VAR_35 == 2)
  VAR_25 = VAR_7;
 else if (VAR_34 == 2 && VAR_35 == 0)
  VAR_25 = VAR_8;
 else if (VAR_34 == 3 && VAR_35 == 0)
  VAR_25 = VAR_9;
 else if (VAR_34 == 3 && VAR_35 == 1)
  VAR_25 = VAR_10;
 else if (VAR_34 == 3 && VAR_35 == 2)
  VAR_25 = VAR_11;
 else {
  FUNC_4(VAR_28, "Unknown QMan version\n");
  return -VAR_0;
 }

 if ((VAR_25 & 0xff00) >= VAR_9) {
  VAR_22 = VAR_5;
  VAR_21 = VAR_4;
 }

 if (VAR_15) {







  FUNC_2(1, "Unexpected architecture using non shared-dma-mem reservations");

 } else {





  VAR_31 = FUNC_11(VAR_28, 0, &VAR_15, &VAR_16);
  if (VAR_31) {
   FUNC_4(VAR_28, "qbman_init_private_mem() for FQD failed 0x%x\n",
    VAR_31);
   return -VAR_0;
  }
 }
 FUNC_3(VAR_28, "Allocated FQD 0x%llx 0x%zx\n", VAR_15, VAR_16);

 if (!VAR_17) {

  VAR_31 = FUNC_11(VAR_28, 1, &VAR_17, &VAR_18);
  if (VAR_31) {
   FUNC_4(VAR_28, "qbman_init_private_mem() for PFDR failed 0x%x\n",
    VAR_31);
   return -VAR_0;
  }
 }
 FUNC_3(VAR_28, "Allocated PFDR 0x%llx 0x%zx\n", VAR_17, VAR_18);

 VAR_31 = FUNC_16(VAR_28);
 if (VAR_31) {
  FUNC_4(VAR_28, "CCSR setup failed\n");
  return VAR_31;
 }

 VAR_32 = FUNC_9(VAR_27, 0);
 if (VAR_32 <= 0) {
  FUNC_5(VAR_28, "Can't get %pOF property 'interrupts'\n",
    VAR_29);
  return -VAR_0;
 }
 VAR_31 = FUNC_8(VAR_28, VAR_32, VAR_26, VAR_3, "qman-err",
          VAR_28);
 if (VAR_31) {
  FUNC_4(VAR_28, "devm_request_irq() failed %d for '%pOF'\n",
   VAR_31, VAR_29);
  return VAR_31;
 }





 FUNC_12(VAR_13, 0xffffffff);

 FUNC_12(VAR_12, 0xffffffff);

 VAR_23 = FUNC_6(VAR_28, 0, -1, "qman-fqalloc");
 if (FUNC_0(VAR_23)) {
  VAR_31 = FUNC_1(VAR_23);
  FUNC_4(VAR_28, "qman-fqalloc pool init failed (%d)\n", VAR_31);
  return VAR_31;
 }

 VAR_24 = FUNC_6(VAR_28, 0, -1, "qman-qpalloc");
 if (FUNC_0(VAR_24)) {
  VAR_31 = FUNC_1(VAR_24);
  FUNC_4(VAR_28, "qman-qpalloc pool init failed (%d)\n", VAR_31);
  return VAR_31;
 }

 VAR_20 = FUNC_6(VAR_28, 0, -1, "qman-cgralloc");
 if (FUNC_0(VAR_20)) {
  VAR_31 = FUNC_1(VAR_20);
  FUNC_4(VAR_28, "qman-cgralloc pool init failed (%d)\n", VAR_31);
  return VAR_31;
 }

 VAR_31 = FUNC_17(VAR_28);
 if (VAR_31)
  return VAR_31;

 VAR_31 = FUNC_15(FUNC_13());
 if (VAR_31)
  return VAR_31;

 VAR_31 = FUNC_18();
 if (VAR_31)
  return VAR_31;

 VAR_14 = 1;

 return 0;
}
