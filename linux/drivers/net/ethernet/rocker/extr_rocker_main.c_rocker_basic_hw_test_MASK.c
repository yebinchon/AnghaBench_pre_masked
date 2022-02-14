
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_wait {int dummy; } ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct rocker_wait*) ;
 int FUNC_2 (int ,int ,int ,int ,struct rocker_wait*) ;
 int FUNC_3 (struct rocker const*,struct rocker_wait*) ;
 int VAR_4 ;
 int FUNC_4 (struct rocker const*,int ) ;
 int FUNC_5 (struct rocker const*) ;
 int VAR_5 ;
 int FUNC_6 (struct rocker_wait*,int) ;
 int FUNC_7 (struct rocker_wait*) ;
 int FUNC_8 (struct rocker const*,int ,int ) ;

__attribute__((used)) static int FUNC_9(const struct rocker *VAR_6)
{
 const struct pci_dev *VAR_7 = VAR_6->pdev;
 struct rocker_wait VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9) {
  FUNC_0(&VAR_7->dev, "reg test failed\n");
  return VAR_9;
 }

 VAR_9 = FUNC_2(FUNC_4(VAR_6, VAR_2),
     VAR_5, 0,
     VAR_4, &VAR_8);
 if (VAR_9) {
  FUNC_0(&VAR_7->dev, "cannot assign test irq\n");
  return VAR_9;
 }

 FUNC_7(&VAR_8);
 FUNC_8(VAR_6, VAR_3, VAR_2);

 if (!FUNC_6(&VAR_8, VAR_1 / 10)) {
  FUNC_0(&VAR_7->dev, "no interrupt received within a timeout\n");
  VAR_9 = -VAR_0;
  goto free_irq;
 }

 VAR_9 = FUNC_3(VAR_6, &VAR_8);
 if (VAR_9)
  FUNC_0(&VAR_7->dev, "dma test failed\n");

free_irq:
 FUNC_1(FUNC_4(VAR_6, VAR_2), &VAR_8);
 return VAR_9;
}
