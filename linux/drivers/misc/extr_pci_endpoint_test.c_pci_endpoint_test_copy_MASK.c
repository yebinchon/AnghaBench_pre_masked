
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_endpoint_test {size_t alignment; int irq_raised; struct pci_dev* pdev; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (size_t,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t FUNC_1 (size_t,size_t) ;
 size_t VAR_12 ;
 scalar_t__ FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,size_t,size_t*,int ) ;
 int FUNC_5 (struct device*,size_t,void*,size_t) ;
 int FUNC_6 (void*,size_t) ;
 int VAR_13 ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (struct pci_endpoint_test*,int ,int) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static bool FUNC_11(struct pci_endpoint_test *VAR_14, size_t VAR_15)
{
 bool VAR_16 = 0;
 void *VAR_17;
 void *VAR_18;
 dma_addr_t VAR_19;
 dma_addr_t VAR_20;
 struct pci_dev *VAR_21 = VAR_14->pdev;
 struct device *VAR_22 = &VAR_21->dev;
 void *VAR_23;
 dma_addr_t VAR_24;
 void *VAR_25;
 dma_addr_t VAR_26;
 size_t VAR_27;
 size_t VAR_28 = VAR_14->alignment;
 u32 VAR_29;
 u32 VAR_30;

 if (VAR_15 > VAR_12 - VAR_28)
  goto err;

 if (VAR_13 < VAR_2 || VAR_13 > VAR_3) {
  FUNC_3(VAR_22, "Invalid IRQ type option\n");
  goto err;
 }

 VAR_23 = FUNC_4(VAR_22, VAR_15 + VAR_28,
        &VAR_24, VAR_1);
 if (!VAR_23) {
  FUNC_3(VAR_22, "Failed to allocate source buffer\n");
  VAR_16 = 0;
  goto err;
 }

 if (VAR_28 && !FUNC_0(VAR_24, VAR_28)) {
  VAR_19 = FUNC_1(VAR_24, VAR_28);
  VAR_27 = VAR_19 - VAR_24;
  VAR_17 = VAR_23 + VAR_27;
 } else {
  VAR_19 = VAR_24;
  VAR_17 = VAR_23;
 }

 FUNC_8(VAR_14, VAR_8,
     FUNC_7(VAR_19));

 FUNC_8(VAR_14, VAR_11,
     FUNC_9(VAR_19));

 FUNC_6(VAR_17, VAR_15);
 VAR_29 = FUNC_2(~0, VAR_17, VAR_15);

 VAR_25 = FUNC_4(VAR_22, VAR_15 + VAR_28,
        &VAR_26, VAR_1);
 if (!VAR_25) {
  FUNC_3(VAR_22, "Failed to allocate destination address\n");
  VAR_16 = 0;
  goto err_orig_src_addr;
 }

 if (VAR_28 && !FUNC_0(VAR_26, VAR_28)) {
  VAR_20 = FUNC_1(VAR_26, VAR_28);
  VAR_27 = VAR_20 - VAR_26;
  VAR_18 = VAR_25 + VAR_27;
 } else {
  VAR_20 = VAR_26;
  VAR_18 = VAR_25;
 }

 FUNC_8(VAR_14, VAR_7,
     FUNC_7(VAR_20));
 FUNC_8(VAR_14, VAR_10,
     FUNC_9(VAR_20));

 FUNC_8(VAR_14, VAR_9,
     VAR_15);

 FUNC_8(VAR_14, VAR_6, VAR_13);
 FUNC_8(VAR_14, VAR_5, 1);
 FUNC_8(VAR_14, VAR_4,
     VAR_0);

 FUNC_10(&VAR_14->irq_raised);

 VAR_30 = FUNC_2(~0, VAR_18, VAR_15);
 if (VAR_30 == VAR_29)
  VAR_16 = 1;

 FUNC_5(VAR_22, VAR_15 + VAR_28, VAR_25,
     VAR_26);

err_orig_src_addr:
 FUNC_5(VAR_22, VAR_15 + VAR_28, VAR_23,
     VAR_24);

err:
 return VAR_16;
}
