
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct altera_msi {int irq; int num_of_vectors; int vector_phy; void* vector_base; void* csr_base; struct platform_device* pdev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct altera_msi*) ;
 int VAR_4 ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 void* FUNC_5 (TYPE_1__*,struct resource*) ;
 struct altera_msi* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int,int ,struct altera_msi*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int *) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,char*) ;
 int FUNC_12 (struct platform_device*,struct altera_msi*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct altera_msi *VAR_6;
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 struct resource *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_6(&VAR_5->dev, sizeof(struct altera_msi),
      VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_8(&VAR_6->lock);
 VAR_6->pdev = VAR_5;

 VAR_8 = FUNC_11(VAR_5, VAR_3, "csr");
 VAR_6->csr_base = FUNC_5(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_6->csr_base)) {
  FUNC_4(&VAR_5->dev, "failed to map csr memory\n");
  return FUNC_1(VAR_6->csr_base);
 }

 VAR_8 = FUNC_11(VAR_5, VAR_3,
        "vector_slave");
 VAR_6->vector_base = FUNC_5(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_6->vector_base)) {
  FUNC_4(&VAR_5->dev, "failed to map vector_slave memory\n");
  return FUNC_1(VAR_6->vector_base);
 }

 VAR_6->vector_phy = VAR_8->start;

 if (FUNC_9(VAR_7, "num-vectors", &VAR_6->num_of_vectors)) {
  FUNC_4(&VAR_5->dev, "failed to parse the number of vectors\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_6->irq = FUNC_10(VAR_5, 0);
 if (VAR_6->irq < 0) {
  FUNC_4(&VAR_5->dev, "failed to map IRQ: %d\n", VAR_6->irq);
  VAR_9 = VAR_6->irq;
  goto err;
 }

 FUNC_7(VAR_6->irq, VAR_4, VAR_6);
 FUNC_12(VAR_5, VAR_6);

 return 0;

err:
 FUNC_3(VAR_5);
 return VAR_9;
}
