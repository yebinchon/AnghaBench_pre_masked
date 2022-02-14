
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
 size_t FUNC_1 (size_t,size_t) ;
 size_t VAR_11 ;
 scalar_t__ FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,size_t,size_t*,int ) ;
 int FUNC_5 (struct device*,size_t,void*,size_t) ;
 int VAR_12 ;
 int FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (struct pci_endpoint_test*,int ) ;
 int FUNC_8 (struct pci_endpoint_test*,int ,int) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static bool FUNC_11(struct pci_endpoint_test *VAR_13, size_t VAR_14)
{
 bool VAR_15 = 0;
 void *VAR_16;
 dma_addr_t VAR_17;
 struct pci_dev *VAR_18 = VAR_13->pdev;
 struct device *VAR_19 = &VAR_18->dev;
 void *VAR_20;
 dma_addr_t VAR_21;
 size_t VAR_22;
 size_t VAR_23 = VAR_13->alignment;
 u32 VAR_24;

 if (VAR_14 > VAR_11 - VAR_23)
  goto err;

 if (VAR_12 < VAR_2 || VAR_12 > VAR_3) {
  FUNC_3(VAR_19, "Invalid IRQ type option\n");
  goto err;
 }

 VAR_20 = FUNC_4(VAR_19, VAR_14 + VAR_23, &VAR_21,
           VAR_1);
 if (!VAR_20) {
  FUNC_3(VAR_19, "Failed to allocate destination address\n");
  VAR_15 = 0;
  goto err;
 }

 if (VAR_23 && !FUNC_0(VAR_21, VAR_23)) {
  VAR_17 = FUNC_1(VAR_21, VAR_23);
  VAR_22 = VAR_17 - VAR_21;
  VAR_16 = VAR_20 + VAR_22;
 } else {
  VAR_17 = VAR_21;
  VAR_16 = VAR_20;
 }

 FUNC_8(VAR_13, VAR_8,
     FUNC_6(VAR_17));
 FUNC_8(VAR_13, VAR_10,
     FUNC_9(VAR_17));

 FUNC_8(VAR_13, VAR_9, VAR_14);

 FUNC_8(VAR_13, VAR_7, VAR_12);
 FUNC_8(VAR_13, VAR_6, 1);
 FUNC_8(VAR_13, VAR_5,
     VAR_0);

 FUNC_10(&VAR_13->irq_raised);

 VAR_24 = FUNC_2(~0, VAR_16, VAR_14);
 if (VAR_24 == FUNC_7(VAR_13, VAR_4))
  VAR_15 = 1;

 FUNC_5(VAR_19, VAR_14 + VAR_23, VAR_20, VAR_21);
err:
 return VAR_15;
}
