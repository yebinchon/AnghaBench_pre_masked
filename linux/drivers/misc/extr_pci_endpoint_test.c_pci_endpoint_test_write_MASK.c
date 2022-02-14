
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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
 int VAR_13 ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,size_t,size_t*,int ) ;
 int FUNC_5 (struct device*,size_t,void*,size_t) ;
 int FUNC_6 (void*,size_t) ;
 int VAR_14 ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (struct pci_endpoint_test*,int ) ;
 int FUNC_9 (struct pci_endpoint_test*,int ,int) ;
 int FUNC_10 (size_t) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static bool FUNC_12(struct pci_endpoint_test *VAR_15, size_t VAR_16)
{
 bool VAR_17 = 0;
 u32 VAR_18;
 void *VAR_19;
 dma_addr_t VAR_20;
 struct pci_dev *VAR_21 = VAR_15->pdev;
 struct device *VAR_22 = &VAR_21->dev;
 void *VAR_23;
 dma_addr_t VAR_24;
 size_t VAR_25;
 size_t VAR_26 = VAR_15->alignment;
 u32 VAR_27;

 if (VAR_16 > VAR_12 - VAR_26)
  goto err;

 if (VAR_14 < VAR_2 || VAR_14 > VAR_3) {
  FUNC_3(VAR_22, "Invalid IRQ type option\n");
  goto err;
 }

 VAR_23 = FUNC_4(VAR_22, VAR_16 + VAR_26, &VAR_24,
           VAR_1);
 if (!VAR_23) {
  FUNC_3(VAR_22, "Failed to allocate address\n");
  VAR_17 = 0;
  goto err;
 }

 if (VAR_26 && !FUNC_0(VAR_24, VAR_26)) {
  VAR_20 = FUNC_1(VAR_24, VAR_26);
  VAR_25 = VAR_20 - VAR_24;
  VAR_19 = VAR_23 + VAR_25;
 } else {
  VAR_20 = VAR_24;
  VAR_19 = VAR_23;
 }

 FUNC_6(VAR_19, VAR_16);

 VAR_27 = FUNC_2(~0, VAR_19, VAR_16);
 FUNC_9(VAR_15, VAR_4,
     VAR_27);

 FUNC_9(VAR_15, VAR_8,
     FUNC_7(VAR_20));
 FUNC_9(VAR_15, VAR_11,
     FUNC_10(VAR_20));

 FUNC_9(VAR_15, VAR_9, VAR_16);

 FUNC_9(VAR_15, VAR_7, VAR_14);
 FUNC_9(VAR_15, VAR_6, 1);
 FUNC_9(VAR_15, VAR_5,
     VAR_0);

 FUNC_11(&VAR_15->irq_raised);

 VAR_18 = FUNC_8(VAR_15, VAR_10);
 if (VAR_18 & VAR_13)
  VAR_17 = 1;

 FUNC_5(VAR_22, VAR_16 + VAR_26, VAR_23, VAR_24);

err:
 return VAR_17;
}
