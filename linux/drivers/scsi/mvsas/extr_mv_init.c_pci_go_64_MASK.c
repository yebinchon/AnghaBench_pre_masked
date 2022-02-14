
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->dev, FUNC_0(64));
 if (VAR_2) {
  VAR_2 = FUNC_2(&VAR_1->dev, FUNC_0(32));
  if (VAR_2) {
   FUNC_1(VAR_0, &VAR_1->dev,
       "32-bit DMA enable failed\n");
   return VAR_2;
  }
 }

 return VAR_2;
}
