
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_hw {int flags; int napi; struct pci_dev* pdev; } ;
struct pci_dev {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,char const*,struct sky2_hw*) ;
 int VAR_5 ;
 int FUNC_3 (struct sky2_hw*,int ) ;
 int FUNC_4 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sky2_hw *VAR_6, const char *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_6->pdev;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_8->irq, VAR_5,
     (VAR_6->flags & VAR_3) ? 0 : VAR_1,
     VAR_7, VAR_6);
 if (VAR_9)
  FUNC_0(&VAR_8->dev, "cannot assign irq %d\n", VAR_8->irq);
 else {
  VAR_6->flags |= VAR_2;

  FUNC_1(&VAR_6->napi);
  FUNC_4(VAR_6, VAR_0, VAR_4);
  FUNC_3(VAR_6, VAR_0);
 }

 return VAR_9;
}
