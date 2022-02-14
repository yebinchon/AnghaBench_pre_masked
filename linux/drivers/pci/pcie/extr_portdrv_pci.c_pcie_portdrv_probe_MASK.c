
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_6,
     const struct pci_device_id *VAR_7)
{
 int VAR_8;

 if (!FUNC_2(VAR_6) ||
     ((FUNC_3(VAR_6) != VAR_4) &&
      (FUNC_3(VAR_6) != VAR_5) &&
      (FUNC_3(VAR_6) != VAR_3)))
  return -VAR_2;

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_4(VAR_6);

 FUNC_0(&VAR_6->dev, VAR_0 |
        VAR_1);

 if (FUNC_1(VAR_6)) {





  FUNC_9(&VAR_6->dev, 100);
  FUNC_10(&VAR_6->dev);
  FUNC_7(&VAR_6->dev);
  FUNC_8(&VAR_6->dev);
  FUNC_6(&VAR_6->dev);
 }

 return 0;
}
